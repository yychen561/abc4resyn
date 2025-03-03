#include "node_logic.h"

int AND2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigAnd(p,  B, A );
};

int AND2x4_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigAnd(p,  B, A );
};

int AND2x6_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigAnd(p,  B, A );
};

int AND3x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigAnd(p,  C, Mini_AigAnd(p,  B , A ));
};

int AND3x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigAnd(p,  C, Mini_AigAnd(p,  B , A ));
};

int AND3x4_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigAnd(p,  C, Mini_AigAnd(p,  B , A ));
};

int AND4x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D)
{
return Mini_AigAnd(p,  D, Mini_AigAnd(p,  C , Mini_AigAnd(p,  B , A )));
};

int AND4x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D)
{
return Mini_AigAnd(p,  D, Mini_AigAnd(p,  C , Mini_AigAnd(p,  B , A )));
};

int AND5x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E)
{
return Mini_AigAnd(p,  E, Mini_AigAnd(p,  D , Mini_AigAnd(p,  C , Mini_AigAnd(p,  B , A ))));
};

int AND5x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E)
{
return Mini_AigAnd(p,  E, Mini_AigAnd(p,  D , Mini_AigAnd(p,  C , Mini_AigAnd(p,  B , A ))));
};

int FAx1_ASAP7_75t_R_CON(Mini_Aig_t *p, int A, int B, int CI)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(CI), Mini_AigLitNot(B) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(CI), Mini_AigLitNot(A) ), Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) )));
};

int FA1_ASAP7_75t_R_SN(Mini_Aig_t *p, int A, int B, int CI)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(CI), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A) )), Mini_AigOr(p, Mini_AigAnd(p,  CI, Mini_AigAnd(p,  B , Mini_AigLitNot(A) )), Mini_AigOr(p, Mini_AigAnd(p,  CI, Mini_AigAnd(p,  Mini_AigLitNot(B) , A )), Mini_AigAnd(p,  Mini_AigLitNot(CI), Mini_AigAnd(p,  B , A )))));
};

int HAxp5_ASAP7_75t_R_CON(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int HAxp5_ASAP7_75t_R_SN(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) ), Mini_AigAnd(p,  B, A ));
};

int MAJIxp5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigLitNot(B) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigLitNot(A) ), Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) )));
};

int MAJx2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C, B ), Mini_AigOr(p, Mini_AigAnd(p,  C, A ), Mini_AigAnd(p,  B, A )));
};

int MAJx3_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C, B ), Mini_AigOr(p, Mini_AigAnd(p,  C, A ), Mini_AigAnd(p,  B, A )));
};

int NAND2x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND2x1p5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND2xp33_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND2xp5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND2xp67_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND3x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A)));
};

int NAND3x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A)));
};

int NAND3xp33_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A)));
};

int NAND4xp25_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D)
{
return Mini_AigOr(p, Mini_AigLitNot(D), Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A))));
};

int NAND4xp75_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D)
{
return Mini_AigOr(p, Mini_AigLitNot(D), Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A))));
};

int NAND5xp2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E)
{
return Mini_AigOr(p, Mini_AigLitNot(E), Mini_AigOr(p, Mini_AigLitNot(D), Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A)))));
};

int NOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) );
};

int NOR2x1p5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) );
};

int NOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) );
};

int NOR2xp33_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) );
};

int NOR2xp67_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) );
};

int NOR3x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A) ));
};

int NOR3x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A) ));
};

int NOR3xp33_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A) ));
};

int NOR4xp25_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D)
{
return Mini_AigAnd(p,  Mini_AigLitNot(D), Mini_AigAnd(p,  Mini_AigLitNot(C) , Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A) )));
};

int NOR4xp75_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D)
{
return Mini_AigAnd(p,  Mini_AigLitNot(D), Mini_AigAnd(p,  Mini_AigLitNot(C) , Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A) )));
};

int NOR5xp2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E)
{
return Mini_AigAnd(p,  Mini_AigLitNot(E), Mini_AigAnd(p,  Mini_AigLitNot(D) , Mini_AigAnd(p,  Mini_AigLitNot(C) , Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A) ))));
};

int OR2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, B, A);
};

int OR2x4_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, B, A);
};

int OR2x6_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, B, A);
};

int OR3x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigOr(p, C, Mini_AigOr(p, B, A));
};

int OR3x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigOr(p, C, Mini_AigOr(p, B, A));
};

int OR3x4_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C)
{
return Mini_AigOr(p, C, Mini_AigOr(p, B, A));
};

int OR4x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D)
{
return Mini_AigOr(p, D, Mini_AigOr(p, C, Mini_AigOr(p, B, A)));
};

int OR4x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D)
{
return Mini_AigOr(p, D, Mini_AigOr(p, C, Mini_AigOr(p, B, A)));
};

int OR5x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E)
{
return Mini_AigOr(p, E, Mini_AigOr(p, D, Mini_AigOr(p, C, Mini_AigOr(p, B, A))));
};

int OR5x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B, int C, int D, int E)
{
return Mini_AigOr(p, E, Mini_AigOr(p, D, Mini_AigOr(p, C, Mini_AigOr(p, B, A))));
};

int TIEHIx1_ASAP7_75t_R(Mini_Aig_t *p)
{
return 1;
};

int TIELOx1_ASAP7_75t_R(Mini_Aig_t *p)
{
return 0;
};

int XNOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) ), Mini_AigAnd(p,  B, A ));
};

int XNOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) ), Mini_AigAnd(p,  B, A ));
};

int XNOR2xp5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A) ), Mini_AigAnd(p,  B, A ));
};

int XOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B, Mini_AigLitNot(A) ), Mini_AigAnd(p,  Mini_AigLitNot(B), A ));
};

int XOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B, Mini_AigLitNot(A) ), Mini_AigAnd(p,  Mini_AigLitNot(B), A ));
};

int XOR2xp5_ASAP7_75t_R(Mini_Aig_t *p, int A, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B, Mini_AigLitNot(A) ), Mini_AigAnd(p,  Mini_AigLitNot(B), A ));
};

