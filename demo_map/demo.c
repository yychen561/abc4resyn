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
#include "node_logic/node_logic.h"
#include <stdio.h>
#include <time.h>

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

    // procedures to start and stop the ABC framework
    // (should be called before and after the ABC procedures are called)
    void Abc_Start();
    void Abc_Stop();

    // procedures to get the ABC framework and execute commands in it
    typedef struct Abc_Frame_t_ Abc_Frame_t;

    Abc_Frame_t *Abc_FrameGetGlobalFrame();
    int Cmd_CommandExecute(Abc_Frame_t *pAbc, const char *sCommand);

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
void print_time(clock_t time, char *info)
{
    printf("%s = %6.2f sec   \n", info, (float)(time) / (float)(CLOCKS_PER_SEC));
}
int main(int argc, char *argv[])
{
    // parameters
    int fUseResyn2 = 1;
    int fPrintStats = 1;
    int fVerify = 1;
    // variables
    Abc_Frame_t *pAbc;
    char *pFileName;
    char Command[1000];
    clock_t clkRead, clkReadLib, clkMapOrigin, clkMapBalan, clkResyn1, clkResyn2, clkResyn3, clkVerOrigin, clkVerBalan, clkVerResyn1, clkVerResyn2, clkVerResyn3, clk;

    //////////////////////////////////////////////////////////////////////////
    // get the input file name
    if (argc != 2)
    {
        printf("Wrong number of command-line arguments.\n");
        return 1;
    }
    pFileName = argv[1];

    //////////////////////////////////////////////////////////////////////////
    // start the ABC framework
    Abc_Start();
    pAbc = Abc_FrameGetGlobalFrame();

    clk = clock();
    //////////////////////////////////////////////////////////////////////////

    freopen("demo.txt", "w", stdout);
    // read the file and .lib
    sprintf(Command, "read %s", pFileName);
    Command_Execute(Command, pAbc);
    clkRead = clock() - clk;
    clk = clock();

    sprintf(Command, "read ./node_lib/asap7sc7p5t_ALL_RVT_FF_nldm_201020.lib");
    Command_Execute(Command, pAbc);
    clkReadLib = clock() - clk;

    // origin
    clk = clock();
    sprintf(Command, "map");
    Command_Execute(Command, pAbc);
    clkMapOrigin = clock() - clk;

    sprintf(Command, "print_stats");
    Command_Execute(Command, pAbc);

    sprintf(Command, "write_blif demo.blif");
    Command_Execute(Command, pAbc);

    clk = clock();
    sprintf(Command, "cec %s demo.blif", pFileName);
    Command_Execute(Command, pAbc);
    clkVerOrigin = clock() - clk;

    // balance
    clk = clock();
    sprintf(Command, "balance");
    Command_Execute(Command, pAbc);

    sprintf(Command, "map");
    Command_Execute(Command, pAbc);
    clkMapBalan = clock() - clk;

    sprintf(Command, "write_blif demo_balan.blif");
    Command_Execute(Command, pAbc);

    sprintf(Command, "print_stats");
    Command_Execute(Command, pAbc);

    clk = clock();
    sprintf(Command, "cec %s demo_balan.blif", pFileName);
    Command_Execute(Command, pAbc);
    clkVerBalan = clock() - clk;

    // resyn1
    clk = clock();
    sprintf(Command, "balance; rewrite -l; refactor -l; balance; rewrite -l; rewrite -lz; balance; refactor -lz; rewrite -lz; balance");
    Command_Execute(Command, pAbc);

    sprintf(Command, "map");
    Command_Execute(Command, pAbc);
    clkResyn1 = clock() - clk;

    sprintf(Command, "write_blif demo_resyn1.blif");
    Command_Execute(Command, pAbc);

    sprintf(Command, "print_stats");
    Command_Execute(Command, pAbc);

    clk = clock();
    sprintf(Command, "cec %s demo_resyn1.blif", pFileName);
    Command_Execute(Command, pAbc);
    clkVerResyn1 = clock() - clk;

    // resyn2
    clk = clock();
    sprintf(Command, "balance; rewrite -l; rewrite -lz; balance; rewrite -lz; balance");
    Command_Execute(Command, pAbc);

    sprintf(Command, "map");
    Command_Execute(Command, pAbc);
    clkResyn2 = clock() - clk;

    sprintf(Command, "write_blif demo_resyn2.blif");
    Command_Execute(Command, pAbc);

    sprintf(Command, "print_stats");
    Command_Execute(Command, pAbc);

    clk = clock();
    sprintf(Command, "cec %s demo_resyn2.blif", pFileName);
    Command_Execute(Command, pAbc);
    clkVerResyn2 = clock() - clk;

    // Resyn3
    clk = clock();
    sprintf(Command, "balance; rewrite -l; refactor -l; balance; rewrite -l; rewrite -lz; balance; refactor -lz; rewrite -lz; balance");
    Command_Execute(Command, pAbc);

    sprintf(Command, "map");
    Command_Execute(Command, pAbc);
    clkResyn3 = clock() - clk;

    sprintf(Command, "write_blif demo_resyn3.blif");
    Command_Execute(Command, pAbc);

    sprintf(Command, "print_stats");
    Command_Execute(Command, pAbc);

    clk = clock();
    sprintf(Command, "cec %s demo_resyn3.blif", pFileName);
    Command_Execute(Command, pAbc);
    clkVerResyn3 = clock() - clk;


    //print time
    print_time(clkRead, "read");
    print_time(clkReadLib, "readlib");
    printf("\n");

    print_time(clkMapOrigin, "MapOrigin");
    print_time(clkVerOrigin, "VerOrigin");
    printf("\n");

    print_time(clkMapBalan, "MapBalan");
    print_time(clkVerBalan, "VerBalan");
    printf("\n");

    print_time(clkResyn1, "Resyn1");
    print_time(clkVerResyn1, "VerResyn1");
    printf("\n");

    print_time(clkResyn2, "Resyn2");
    print_time(clkVerResyn2, "VerResyn2");
    printf("\n");

    print_time(clkResyn3, "Resyn3");
    print_time(clkVerResyn3, "VerResyn3");
    printf("\n");

    //////////////////////////////////////////////////////////////////////////
    // stop the ABC framework
    Abc_Stop();
    return 0;
}
