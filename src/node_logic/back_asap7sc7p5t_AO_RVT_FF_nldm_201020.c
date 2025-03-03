#include "node_logic.h"

int A2O1A1Ixp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C)
{
return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A2) ), Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A1) )));
};

int A2O1A1O1Ixp25_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C, int D)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(D), Mini_AigLitNot(C) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(D), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A2) )), Mini_AigAnd(p,  Mini_AigLitNot(D), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A1) ))));
};

int AO211x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C)
{
return Mini_AigOr(p, C, Mini_AigOr(p, B, Mini_AigAnd(p,  A2, A1 )));
};

int AO21x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B)
{
return Mini_AigOr(p, B, Mini_AigAnd(p,  A2, A1 ));
};

int AO21x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B)
{
return Mini_AigOr(p, B, Mini_AigAnd(p,  A2, A1 ));
};

int AO221x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C)
{
return Mini_AigOr(p, C, Mini_AigOr(p, Mini_AigAnd(p,  B2, B1 ), Mini_AigAnd(p,  A2, A1 )));
};

int AO221x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C)
{
return Mini_AigOr(p, C, Mini_AigOr(p, Mini_AigAnd(p,  B2, B1 ), Mini_AigAnd(p,  A2, A1 )));
};

int AO222x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C2, C1 ), Mini_AigOr(p, Mini_AigAnd(p,  B2, B1 ), Mini_AigAnd(p,  A2, A1 )));
};

int AO22x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B2, B1 ), Mini_AigAnd(p,  A2, A1 ));
};

int AO22x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B2, B1 ), Mini_AigAnd(p,  A2, A1 ));
};

int AO31x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B)
{
return Mini_AigOr(p, B, Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 )));
};

int AO322x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C2, C1 ), Mini_AigOr(p, Mini_AigAnd(p,  B2, B1 ), Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 ))));
};

int AO32x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B2, B1 ), Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 )));
};

int AO32x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B2, B1 ), Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 )));
};

int AO331x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C)
{
return Mini_AigOr(p, C, Mini_AigOr(p, Mini_AigAnd(p,  B3, Mini_AigAnd(p,  B2 , B1 )), Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 ))));
};

int AO331x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C)
{
return Mini_AigOr(p, C, Mini_AigOr(p, Mini_AigAnd(p,  B3, Mini_AigAnd(p,  B2 , B1 )), Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 ))));
};

int AO332x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C2, C1 ), Mini_AigOr(p, Mini_AigAnd(p,  B3, Mini_AigAnd(p,  B2 , B1 )), Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 ))));
};

int AO332x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C2, C1 ), Mini_AigOr(p, Mini_AigAnd(p,  B3, Mini_AigAnd(p,  B2 , B1 )), Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 ))));
};

int AO333x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  C2 , C1 )), Mini_AigOr(p, Mini_AigAnd(p,  B3, Mini_AigAnd(p,  B2 , B1 )), Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 ))));
};

int AO333x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  C2 , C1 )), Mini_AigOr(p, Mini_AigAnd(p,  B3, Mini_AigAnd(p,  B2 , B1 )), Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 ))));
};

int AO33x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B3, Mini_AigAnd(p,  B2 , B1 )), Mini_AigAnd(p,  A3, Mini_AigAnd(p,  A2 , A1 )));
};

int AOI211x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A2) )), Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A1) )));
};

int AOI211xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A2) )), Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A1) )));
};

int AOI21x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A2) ), Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A1) ));
};

int AOI21xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A2) ), Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A1) ));
};

int AOI21xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A2) ), Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A1) ));
};

int AOI221x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )))));
};

int AOI221xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )))));
};

int AOI222xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )), Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )))))))));
};

int AOI22x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A1) ), Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A1) ))));
};

int AOI22xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A1) ), Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A1) ))));
};

int AOI22xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A1) ), Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A1) ))));
};

int AOI311xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A2) )), Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B) , Mini_AigLitNot(A1) ))));
};

int AOI31xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A3) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A2) ), Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A1) )));
};

int AOI31xp67_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A3) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A2) ), Mini_AigAnd(p,  Mini_AigLitNot(B), Mini_AigLitNot(A1) )));
};

int AOI321xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )))))));
};

int AOI322xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )), Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )))))))))))));
};

int AOI32xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A3) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A3) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A1) ), Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A1) ))))));
};

int AOI331xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) ))))))))));
};

int AOI332xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )), Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )))))))))))))))))));
};

int AOI333xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C3), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C3), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C3), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A3) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C3), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C3), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C3), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A2) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C3), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B3) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C3), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C3), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) )), Mini_AigAnd(p,  Mini_AigLitNot(C1), Mini_AigAnd(p,  Mini_AigLitNot(B1) , Mini_AigLitNot(A1) ))))))))))))))))))))))))))));
};

int AOI33xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B3), Mini_AigLitNot(A3) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A3) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A3) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B3), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A2) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B3), Mini_AigLitNot(A1) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(A1) ), Mini_AigAnd(p,  Mini_AigLitNot(B1), Mini_AigLitNot(A1) )))))))));
};

