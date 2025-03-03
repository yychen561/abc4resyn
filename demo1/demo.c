/**CFile****************************************************************

  FileName    [demo.c]

  SystemName  [ABC: Logic synthesis and verification system.]

  PackageName [ABC as a static library.]

  Synopsis    [A demo program illustrating the use of ABC as a static library.]

  Author      [Alan Mishchenko]

  Affiliation [UC Berkeley]

  Date        [Ver. 1.0. Started - June 20, 2005.]

  Revision    [$Id: demo.c,v 1.00 2005/11/14 00:00:00 alanmi Exp $]

***********************************************************************/

#include <stdio.h>
#include <time.h>

#define ABC_NAMESPACE_HEADER_START
#define ABC_NAMESPACE_HEADER_END
#include "base/main/abcapis.h"

////////////////////////////////////////////////////////////////////////
///                        DECLARATIONS                              ///
////////////////////////////////////////////////////////////////////////

#if defined(ABC_NAMESPACE)
namespace ABC_NAMESPACE
{
#elif defined(__cplusplus)
extern "C"
{
#endif

    typedef struct Abc_Ntk_t_ Abc_Ntk_t;
    typedef struct Abc_Frame_t_ Abc_Frame_t;
    // network types
    typedef enum
    {
        ABC_NTK_NONE = 0, // 0:  unknown
        ABC_NTK_NETLIST,  // 1:  network with PIs/POs, latches, nodes, and nets
        ABC_NTK_LOGIC,    // 2:  network with PIs/POs, latches, and nodes
        ABC_NTK_STRASH,   // 3:  structurally hashed AIG (two input AND gates with c-attributes on edges)
        ABC_NTK_OTHER     // 4:  unused
    } Abc_NtkType_t;

    // network functionality
    typedef enum
    {
        ABC_FUNC_NONE = 0, // 0:  unknown
        ABC_FUNC_SOP,      // 1:  sum-of-products
        ABC_FUNC_BDD,      // 2:  binary decision diagrams
        ABC_FUNC_AIG,      // 3:  and-inverter graphs
        ABC_FUNC_MAP,      // 4:  standard cell library
        ABC_FUNC_BLIFMV,   // 5:  BLIF-MV node functions
        ABC_FUNC_BLACKBOX, // 6:  black box about which nothing is known
        ABC_FUNC_OTHER     // 7:  unused
    } Abc_NtkFunc_t;

#if defined(ABC_NAMESPACE)
}
using namespace ABC_NAMESPACE;
#elif defined(__cplusplus)
}
#endif

////////////////////////////////////////////////////////////////////////
///                     FUNCTION DEFINITIONS                         ///
////////////////////////////////////////////////////////////////////////

/**Function*************************************************************

  Synopsis    [The main() procedure.]

  Description [This procedure compiles into a stand-alone program for
  DAG-aware rewriting of the AIGs. A BLIF or PLA file to be considered
  for rewriting should be given as a command-line argument. Implementation
  of the rewriting is inspired by the paper: Per Bjesse, Arne Boralv,
  "DAG-aware circuit compression for formal verification", Proc. ICCAD 2004.]

  SideEffects []

  SeeAlso     []

***********************************************************************/
int main(int argc, char *argv[])
{
    // parameters
    int fUseResyn2 = 0;
    int fPrintStats = 1;
    int fVerify = 1;
    // variables
    Abc_Frame_t *pAbc;
    char *pFileName;
    char Command[1000];
    clock_t clkRead, clkResyn, clkVer, clk;

    //////////////////////////////////////////////////////////////////////////
    // get the input file name
    if (argc != 2)
    {
        printf("Wrong number of command-line arguments.\n");
        return 1;
    }
    pFileName = argv[1];

    // create a new network
    Abc_Ntk_t *pAig;
    pAig = Abc_NtkAlloc(ABC_NTK_STRASH, ABC_FUNC_AIG, 1);

    //////////////////////////////////////////////////////////////////////////
    // start the ABC framework
    Abc_Start();
    pAbc = Abc_FrameGetGlobalFrame();
    Abc_UtilsSource(pAbc);

    clk = clock();
    //////////////////////////////////////////////////////////////////////////
    // read the file
    sprintf(Command, "read %s", pFileName);
    if (Cmd_CommandExecute(pAbc, Command))
    {
        fprintf(stdout, "Cannot execute command \"%s\".\n", Command);
        return 1;
    }

    //////////////////////////////////////////////////////////////////////////
    // balance
    sprintf(Command, "balance");
    if (Cmd_CommandExecute(pAbc, Command))
    {
        fprintf(stdout, "Cannot execute command \"%s\".\n", Command);
        return 1;
    }
    clkRead = clock() - clk;

    //////////////////////////////////////////////////////////////////////////
    // print stats
    if (fPrintStats)
    {
        sprintf(Command, "print_stats");
        if (Cmd_CommandExecute(pAbc, Command))
        {
            fprintf(stdout, "Cannot execute command \"%s\".\n", Command);
            return 1;
        }
    }

    clk = clock();
    //////////////////////////////////////////////////////////////////////////
    // synthesize
    if (fUseResyn2)
    {
        sprintf(Command, "balance; rewrite -l; refactor -l; balance; rewrite -l; rewrite -lz; balance; refactor -lz; rewrite -lz; balance");
        if (Cmd_CommandExecute(pAbc, Command))
        {
            fprintf(stdout, "Cannot execute command \"%s\".\n", Command);
            return 1;
        }
    }
    else
    {
        sprintf(Command, "balance; rewrite -l; rewrite -lz; balance; rewrite -lz; balance");
        if (Cmd_CommandExecute(pAbc, Command))
        {
            fprintf(stdout, "Cannot execute command \"%s\".\n", Command);
            return 1;
        }
    }
    clkResyn = clock() - clk;

    //////////////////////////////////////////////////////////////////////////
    // print stats
    if (fPrintStats)
    {
        sprintf(Command, "print_stats");
        if (Cmd_CommandExecute(pAbc, Command))
        {
            fprintf(stdout, "Cannot execute command \"%s\".\n", Command);
            return 1;
        }
    }

    //////////////////////////////////////////////////////////////////////////
    // write the result in verilog
    sprintf(Command, "write_verilog result.v");
    if (Cmd_CommandExecute(pAbc, Command))
    {
        fprintf(stdout, "Cannot execute command \"%s\".\n", Command);
        return 1;
    }

    //////////////////////////////////////////////////////////////////////////
    // perform verification
    clk = clock();
    if (fVerify)
    {
        sprintf(Command, "cec %s result.v", pFileName);
        if (Cmd_CommandExecute(pAbc, Command))
        {
            fprintf(stdout, "Cannot execute command \"%s\".\n", Command);
            return 1;
        }
    }
    clkVer = clock() - clk;

    printf("Reading = %6.2f sec   ", (float)(clkRead) / (float)(CLOCKS_PER_SEC));
    printf("Rewriting = %6.2f sec   ", (float)(clkResyn) / (float)(CLOCKS_PER_SEC));
    printf("Verification = %6.2f sec\n", (float)(clkVer) / (float)(CLOCKS_PER_SEC));

    //////////////////////////////////////////////////////////////////////////
    // stop the ABC framework
    Abc_Stop();
    return 0;
}
