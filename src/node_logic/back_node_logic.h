

#define _VERIFIC_DATABASE_H_ 1
#define ABC_NAMESPACE_HEADER_START
#define ABC_NAMESPACE_HEADER_END

#include "aig/miniaig/miniaig.h"
#include "base/main/abcapis.h"

//typedef struct Abc_Ntk_t_ Abc_Ntk_t;

static inline void Command_Execute(char *Command, Abc_Frame_t *pAbc)
{
    printf("Executing command \"%s\".\n", Command);
    if (Cmd_CommandExecute(pAbc, Command))
    {
        fprintf(stdout, "Cannot execute command \"%s\".\n", Command);
        printf("--------------------------------\n");
        return;
    }
    printf("--------------------------------\n");
}

///////////////////////asap7sc7p5t_AO_RVT_FF_nldm_201020.lib/////////////////////////


extern int A2O1A1Ixp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C);
extern int A2O1A1O1Ixp25_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C, int D);
extern int AO211x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C);
extern int AO21x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B);
extern int AO21x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B);
extern int AO221x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C);
extern int AO221x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C);
extern int AO222x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C1, int C2);
extern int AO22x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2);
extern int AO22x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2);
extern int AO31x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B);
extern int AO322x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int C1, int C2);
extern int AO32x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2);
extern int AO32x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2);
extern int AO331x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C);
extern int AO331x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C);
extern int AO332x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2);
extern int AO332x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2);
extern int AO333x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3);
extern int AO333x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3);
extern int AO33x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3);
extern int AOI211x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C);
extern int AOI211xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C);
extern int AOI21x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B);
extern int AOI21xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B);
extern int AOI21xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B);
extern int AOI221x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C);
extern int AOI221xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C);
extern int AOI222xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C1, int C2);
extern int AOI22x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2);
extern int AOI22xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2);
extern int AOI22xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2);
extern int AOI311xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B, int C);
extern int AOI31xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B);
extern int AOI31xp67_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B);
extern int AOI321xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int C);
extern int AOI322xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int C1, int C2);
extern int AOI32xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2);
extern int AOI331xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1);
extern int AOI332xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2);
extern int AOI333xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3);
extern int AOI33xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3);


///////////////////////asap7sc7p5t_OA_RVT_FF_nldm_201020.lib/////////////////////////



extern int O2A1O1Ixp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C);
extern int O2A1O1Ixp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C);
extern int OA211x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C);
extern int OA21x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B);
extern int OA221x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C);
extern int OA222x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C1, int C2);
extern int OA22x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2);
extern int OA31x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1);
extern int OA331x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1);
extern int OA331x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1);
extern int OA332x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2);
extern int OA332x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2);
extern int OA333x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3);
extern int OA333x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3);
extern int OA33x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3);
extern int OAI211xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C);
extern int OAI21x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B);
extern int OAI21xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B);
extern int OAI21xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B);
extern int OAI221xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C);
extern int OAI222xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C1, int C2);
extern int OAI22x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2);
extern int OAI22xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2);
extern int OAI22xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2);
extern int OAI311xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int C1);
extern int OAI31xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B);
extern int OAI31xp67_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B);
extern int OAI321xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int C);
extern int OAI322xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int C1, int C2);
extern int OAI32xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2);
extern int OAI331xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1);
extern int OAI332xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2);
extern int OAI333xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3);
extern int OAI33xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3);


///////////////////////asap7sc7p5t_SIMPLE_RVT_FF_nldm_201020.lib/////////////////////////

extern int AND2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int AND2x4_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int AND2x6_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int AND3x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int AND3x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int AND3x4_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int AND4x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D);
extern int AND4x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D);
extern int AND5x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E);
extern int AND5x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E);
extern int FAx1_ASAP7_75t_R_CON(Mini_Aig_t *p, int A, int B, int CI);
extern int FA1_ASAP7_75t_R_SN(Mini_Aig_t *p, int A, int B, int CI);
extern int HAxp5_ASAP7_75t_R_CON(Mini_Aig_t *p, int A, int B);
extern int HAxp5_ASAP7_75t_R_SN(Mini_Aig_t *p, int A, int B);
extern int MAJIxp5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int MAJx2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int MAJx3_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int NAND2x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NAND2x1p5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NAND2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NAND2xp33_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NAND2xp5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NAND2xp67_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NAND3x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int NAND3x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int NAND3xp33_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int NAND4xp25_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D);
extern int NAND4xp75_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D);
extern int NAND5xp2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E);
extern int NOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NOR2x1p5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NOR2xp33_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NOR2xp67_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int NOR3x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int NOR3x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int NOR3xp33_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int NOR4xp25_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D);
extern int NOR4xp75_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D);
extern int NOR5xp2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E);
extern int OR2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int OR2x4_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int OR2x6_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int OR3x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int OR3x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int OR3x4_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C);
extern int OR4x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D);
extern int OR4x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D);
extern int OR5x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E);
extern int OR5x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E);
extern int TIEHIx1_ASAP7_75t_R(Mini_Aig_t *p);
extern int TIELOx1_ASAP7_75t_R(Mini_Aig_t *p);
extern int XNOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int XNOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int XNOR2xp5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int XOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int XOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);
extern int XOR2xp5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B);

