#include "node_logic.h"

int A2O1A1Ixp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    int C = Ptr[3];
    return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A2)), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A1))));
};

int A2O1A1O1Ixp25_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    int C = Ptr[3];
    int D = Ptr[4];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(D), Mini_AigLitNot(C)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(D), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A2))), Mini_AigAnd(p, Mini_AigLitNot(D), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A1)))));
};

int AO211x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    int C = Ptr[3];
    return Mini_AigOr(p, C, Mini_AigOr(p, B, Mini_AigAnd(p, A2, A1)));
};

int AO21x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    return Mini_AigOr(p, B, Mini_AigAnd(p, A2, A1));
};

int AO21x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    return Mini_AigOr(p, B, Mini_AigAnd(p, A2, A1));
};

int AO221x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    int C = Ptr[4];
    return Mini_AigOr(p, C, Mini_AigOr(p, Mini_AigAnd(p, B2, B1), Mini_AigAnd(p, A2, A1)));
};

int AO221x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    int C = Ptr[4];
    return Mini_AigOr(p, C, Mini_AigOr(p, Mini_AigAnd(p, B2, B1), Mini_AigAnd(p, A2, A1)));
};

int AO222x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    int C1 = Ptr[4];
    int C2 = Ptr[5];
    return Mini_AigOr(p, Mini_AigAnd(p, C2, C1), Mini_AigOr(p, Mini_AigAnd(p, B2, B1), Mini_AigAnd(p, A2, A1)));
};

int AO22x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, B2, B1), Mini_AigAnd(p, A2, A1));
};

int AO22x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, B2, B1), Mini_AigAnd(p, A2, A1));
};

int AO31x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B = Ptr[3];
    return Mini_AigOr(p, B, Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1)));
};

int AO322x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int C1 = Ptr[5];
    int C2 = Ptr[6];
    return Mini_AigOr(p, Mini_AigAnd(p, C2, C1), Mini_AigOr(p, Mini_AigAnd(p, B2, B1), Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1))));
};

int AO32x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    return Mini_AigOr(p, Mini_AigAnd(p, B2, B1), Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1)));
};

int AO32x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    return Mini_AigOr(p, Mini_AigAnd(p, B2, B1), Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1)));
};

int AO331x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C = Ptr[6];
    return Mini_AigOr(p, C, Mini_AigOr(p, Mini_AigAnd(p, B3, Mini_AigAnd(p, B2, B1)), Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1))));
};

int AO331x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C = Ptr[6];
    return Mini_AigOr(p, C, Mini_AigOr(p, Mini_AigAnd(p, B3, Mini_AigAnd(p, B2, B1)), Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1))));
};

int AO332x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    return Mini_AigOr(p, Mini_AigAnd(p, C2, C1), Mini_AigOr(p, Mini_AigAnd(p, B3, Mini_AigAnd(p, B2, B1)), Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1))));
};

int AO332x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    return Mini_AigOr(p, Mini_AigAnd(p, C2, C1), Mini_AigOr(p, Mini_AigAnd(p, B3, Mini_AigAnd(p, B2, B1)), Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1))));
};

int AO333x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    int C3 = Ptr[8];
    return Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, C2, C1)), Mini_AigOr(p, Mini_AigAnd(p, B3, Mini_AigAnd(p, B2, B1)), Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1))));
};

int AO333x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    int C3 = Ptr[8];
    return Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, C2, C1)), Mini_AigOr(p, Mini_AigAnd(p, B3, Mini_AigAnd(p, B2, B1)), Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1))));
};

int AO33x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    return Mini_AigOr(p, Mini_AigAnd(p, B3, Mini_AigAnd(p, B2, B1)), Mini_AigAnd(p, A3, Mini_AigAnd(p, A2, A1)));
};

int AOI211x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    int C = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A2))), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A1))));
};

int AOI211xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    int C = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A2))), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A1))));
};

int AOI21x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A2)), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A1)));
};

int AOI21xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A2)), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A1)));
};

int AOI21xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A2)), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A1)));
};

int AOI221x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    int C = Ptr[4];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))))));
};

int AOI221xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    int C = Ptr[4];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))))));
};

int AOI222xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    int C1 = Ptr[4];
    int C2 = Ptr[5];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))), Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))))))))));
};

int AOI22x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1)), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1)))));
};

int AOI22xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1)), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1)))));
};

int AOI22xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1)), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1)))));
};

int AOI311xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B = Ptr[3];
    int C = Ptr[4];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A2))), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A1)))));
};

int AOI31xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A3)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A2)), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A1))));
};

int AOI31xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A3)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A2)), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A1))));
};

int AOI321xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int C = Ptr[5];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))))))));
};

int AOI322xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int C1 = Ptr[5];
    int C2 = Ptr[6];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))), Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))))))))))))));
};

int AOI32xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1)), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1)))))));
};

int AOI331xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1)))))))))));
};

int AOI332xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))), Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))))))))))))))))))));
};

int AOI333xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    int C3 = Ptr[8];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C3), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C3), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C3), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C3), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C3), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C3), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C3), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C3), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C3), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))), Mini_AigAnd(p, Mini_AigLitNot(C1), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1)))))))))))))))))))))))))))));
};

int AOI33xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A3)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A3)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A3)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A2)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigLitNot(A1)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(A1)), Mini_AigAnd(p, Mini_AigLitNot(B1), Mini_AigLitNot(A1))))))))));
};

int AND2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigAnd(p, B, A);
};

int AND2x4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigAnd(p, B, A);
};

int AND2x6_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigAnd(p, B, A);
};

int AND3x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigAnd(p, C, Mini_AigAnd(p, B, A));
};

int AND3x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigAnd(p, C, Mini_AigAnd(p, B, A));
};

int AND3x4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigAnd(p, C, Mini_AigAnd(p, B, A));
};

int AND4x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    return Mini_AigAnd(p, D, Mini_AigAnd(p, C, Mini_AigAnd(p, B, A)));
};

int AND4x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    return Mini_AigAnd(p, D, Mini_AigAnd(p, C, Mini_AigAnd(p, B, A)));
};

int AND5x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    int E = Ptr[4];
    return Mini_AigAnd(p, E, Mini_AigAnd(p, D, Mini_AigAnd(p, C, Mini_AigAnd(p, B, A))));
};

int AND5x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    int E = Ptr[4];
    return Mini_AigAnd(p, E, Mini_AigAnd(p, D, Mini_AigAnd(p, C, Mini_AigAnd(p, B, A))));
};

int FAx1_ASAP7_75t_R_CON(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int CI = Ptr[2];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(CI), Mini_AigLitNot(B)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(CI), Mini_AigLitNot(A)), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A))));
};

int FAx1_ASAP7_75t_R_SN(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int CI = Ptr[2];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(CI), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A))), Mini_AigOr(p, Mini_AigAnd(p, CI, Mini_AigAnd(p, B, Mini_AigLitNot(A))), Mini_AigOr(p, Mini_AigAnd(p, CI, Mini_AigAnd(p, Mini_AigLitNot(B), A)), Mini_AigAnd(p, Mini_AigLitNot(CI), Mini_AigAnd(p, B, A)))));
};

int HAxp5_ASAP7_75t_R_CON(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int HAxp5_ASAP7_75t_R_SN(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A)), Mini_AigAnd(p, B, A));
};

int MAJIxp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigLitNot(B)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigLitNot(A)), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A))));
};

int MAJx2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigOr(p, Mini_AigAnd(p, C, B), Mini_AigOr(p, Mini_AigAnd(p, C, A), Mini_AigAnd(p, B, A)));
};

int MAJx3_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigOr(p, Mini_AigAnd(p, C, B), Mini_AigOr(p, Mini_AigAnd(p, C, A), Mini_AigAnd(p, B, A)));
};

int NAND2x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND2x1p5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND2xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND2xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND2xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NAND3x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A)));
};

int NAND3x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int B = Ptr[0];
    int C = Ptr[1];
    int A = Ptr[2];
    return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A)));
};

int NAND3xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A)));
};

int NAND4xp25_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    return Mini_AigOr(p, Mini_AigLitNot(D), Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A))));
};

int NAND4xp75_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    return Mini_AigOr(p, Mini_AigLitNot(D), Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A))));
};

int NAND5xp2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    int E = Ptr[4];
    return Mini_AigOr(p, Mini_AigLitNot(E), Mini_AigOr(p, Mini_AigLitNot(D), Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigLitNot(A)))));
};

int NOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NOR2x1p5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NOR2xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NOR2xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A));
};

int NOR3x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A)));
};

int NOR3x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int B = Ptr[0];
    int C = Ptr[1];
    int A = Ptr[2];
    return Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A)));
};

int NOR3xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A)));
};

int NOR4xp25_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    return Mini_AigAnd(p, Mini_AigLitNot(D), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A))));
};

int NOR4xp75_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    return Mini_AigAnd(p, Mini_AigLitNot(D), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A))));
};

int NOR5xp2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    int E = Ptr[4];
    return Mini_AigAnd(p, Mini_AigLitNot(E), Mini_AigAnd(p, Mini_AigLitNot(D), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A)))));
};

int OR2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, B, A);
};

int OR2x4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, B, A);
};

int OR2x6_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, B, A);
};

int OR3x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigOr(p, C, Mini_AigOr(p, B, A));
};

int OR3x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigOr(p, C, Mini_AigOr(p, B, A));
};

int OR3x4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    return Mini_AigOr(p, C, Mini_AigOr(p, B, A));
};

int OR4x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    return Mini_AigOr(p, D, Mini_AigOr(p, C, Mini_AigOr(p, B, A)));
};

int OR4x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    return Mini_AigOr(p, D, Mini_AigOr(p, C, Mini_AigOr(p, B, A)));
};

int OR5x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    int E = Ptr[4];
    return Mini_AigOr(p, E, Mini_AigOr(p, D, Mini_AigOr(p, C, Mini_AigOr(p, B, A))));
};

int OR5x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    int C = Ptr[2];
    int D = Ptr[3];
    int E = Ptr[4];
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

int XNOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int B = Ptr[0];
    int A = Ptr[1];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A)), Mini_AigAnd(p, B, A));
};

int XNOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A)), Mini_AigAnd(p, B, A));
};

int XNOR2xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B), Mini_AigLitNot(A)), Mini_AigAnd(p, B, A));
};

int XOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigAnd(p, B, Mini_AigLitNot(A)), Mini_AigAnd(p, Mini_AigLitNot(B), A));
};

int XOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigAnd(p, B, Mini_AigLitNot(A)), Mini_AigAnd(p, Mini_AigLitNot(B), A));
};

int XOR2xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    int B = Ptr[1];
    return Mini_AigOr(p, Mini_AigAnd(p, B, Mini_AigLitNot(A)), Mini_AigAnd(p, Mini_AigLitNot(B), A));
};

int BUFx10_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx12_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx12f_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx16f_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx24_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx3_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx4f_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx6f_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int BUFx8_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int CKINVDCx10_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int CKINVDCx11_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int CKINVDCx12_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int CKINVDCx14_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int CKINVDCx16_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int CKINVDCx20_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int CKINVDCx5p33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int CKINVDCx6p67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int CKINVDCx8_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int CKINVDCx9p33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int HB1xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int HB2xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int HB3xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int HB4xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return A;
};

int INVx11_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int INVx13_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int INVx1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int INVx2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int INVx3_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int INVx4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int INVx5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int INVx6_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int INVx8_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int INVxp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int INVxp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A = Ptr[0];
    return Mini_AigLitNot(A);
};

int O2A1O1Ixp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    int C = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigLitNot(B)), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1))));
};

int O2A1O1Ixp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    int C = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigLitNot(B)), Mini_AigAnd(p, Mini_AigLitNot(C), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1))));
};

int OA211x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    int C = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, C, Mini_AigAnd(p, B, A2)), Mini_AigAnd(p, C, Mini_AigAnd(p, B, A1)));
};

int OA21x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    return Mini_AigOr(p, Mini_AigAnd(p, B, A2), Mini_AigAnd(p, B, A1));
};

int OA221x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    int C = Ptr[4];
    return Mini_AigOr(p, Mini_AigAnd(p, C, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C, Mini_AigAnd(p, B2, A1)), Mini_AigAnd(p, C, Mini_AigAnd(p, B1, A1)))));
};

int OA222x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    int C1 = Ptr[4];
    int C2 = Ptr[5];
    return Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A1)), Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A1)))))))));
};

int OA22x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, B2, A2), Mini_AigOr(p, Mini_AigAnd(p, B1, A2), Mini_AigOr(p, Mini_AigAnd(p, B2, A1), Mini_AigAnd(p, B1, A1))));
};

int OA31x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, B1, A3), Mini_AigOr(p, Mini_AigAnd(p, B1, A2), Mini_AigAnd(p, B1, A1)));
};

int OA331x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    return Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A1)), Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A1))))))))));
};

int OA331x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    return Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A1)), Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A1))))))))));
};

int OA332x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    return Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A1)), Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A1)))))))))))))))))));
};

int OA332x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    return Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A1)), Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A1)))))))))))))))))));
};

int OA333x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    int C3 = Ptr[8];
    return Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B1, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A1)), Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A1))))))))))))))))))))))))))));
};

int OA333x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    int C3 = Ptr[8];
    return Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A3)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A3)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A3)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A2)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A2)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A2)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B3, A1)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C1, Mini_AigAnd(p, B2, A1)), Mini_AigOr(p, Mini_AigAnd(p, C3, Mini_AigAnd(p, B1, A1)), Mini_AigOr(p, Mini_AigAnd(p, C2, Mini_AigAnd(p, B1, A1)), Mini_AigAnd(p, C1, Mini_AigAnd(p, B1, A1))))))))))))))))))))))))))));
};

int OA33x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    return Mini_AigOr(p, Mini_AigAnd(p, B3, A3), Mini_AigOr(p, Mini_AigAnd(p, B2, A3), Mini_AigOr(p, Mini_AigAnd(p, B1, A3), Mini_AigOr(p, Mini_AigAnd(p, B3, A2), Mini_AigOr(p, Mini_AigAnd(p, B2, A2), Mini_AigOr(p, Mini_AigAnd(p, B1, A2), Mini_AigOr(p, Mini_AigAnd(p, B3, A1), Mini_AigOr(p, Mini_AigAnd(p, B2, A1), Mini_AigAnd(p, B1, A1)))))))));
};

int OAI211xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    int C = Ptr[3];
    return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1))));
};

int OAI21x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)));
};

int OAI21xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)));
};

int OAI21xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B = Ptr[2];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)));
};

int OAI221xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    int C = Ptr[4];
    return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1)), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1))));
};

int OAI222xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    int C1 = Ptr[4];
    int C2 = Ptr[5];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigLitNot(C1)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1)), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1))));
};

int OAI22x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1)), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)));
};

int OAI22xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1)), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)));
};

int OAI22xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int B1 = Ptr[2];
    int B2 = Ptr[3];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1)), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)));
};

int OAI311xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int C1 = Ptr[4];
    return Mini_AigOr(p, Mini_AigLitNot(C1), Mini_AigOr(p, Mini_AigLitNot(B1), Mini_AigAnd(p, Mini_AigLitNot(A3), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)))));
};

int OAI31xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B = Ptr[3];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p, Mini_AigLitNot(A3), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1))));
};

int OAI31xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B = Ptr[3];
    return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p, Mini_AigLitNot(A3), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1))));
};

int OAI321xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int C = Ptr[5];
    return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1)), Mini_AigAnd(p, Mini_AigLitNot(A3), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)))));
};

int OAI322xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int C1 = Ptr[5];
    int C2 = Ptr[6];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigLitNot(C1)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1)), Mini_AigAnd(p, Mini_AigLitNot(A3), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)))));
};

int OAI32xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1)), Mini_AigAnd(p, Mini_AigLitNot(A3), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1))));
};

int OAI331xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    return Mini_AigOr(p, Mini_AigLitNot(C1), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1))), Mini_AigAnd(p, Mini_AigLitNot(A3), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)))));
};

int OAI332xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigLitNot(C1)), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1))), Mini_AigAnd(p, Mini_AigLitNot(A3), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)))));
};

int OAI333xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    int C1 = Ptr[6];
    int C2 = Ptr[7];
    int C3 = Ptr[8];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(C3), Mini_AigAnd(p, Mini_AigLitNot(C2), Mini_AigLitNot(C1))), Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1))), Mini_AigAnd(p, Mini_AigLitNot(A3), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1)))));
};

int OAI33xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len)
{
    int A1 = Ptr[0];
    int A2 = Ptr[1];
    int A3 = Ptr[2];
    int B1 = Ptr[3];
    int B2 = Ptr[4];
    int B3 = Ptr[5];
    return Mini_AigOr(p, Mini_AigAnd(p, Mini_AigLitNot(B3), Mini_AigAnd(p, Mini_AigLitNot(B2), Mini_AigLitNot(B1))), Mini_AigAnd(p, Mini_AigLitNot(A3), Mini_AigAnd(p, Mini_AigLitNot(A2), Mini_AigLitNot(A1))));
};
