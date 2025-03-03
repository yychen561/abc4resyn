#include "node_logic.h"

int O2A1O1Ixp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigLitNot(B) ), Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) )));
};

int O2A1O1Ixp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigLitNot(B) ), Mini_AigAnd(p,  Mini_AigLitNot(C), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) )));
};

int OA211x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C, Mini_AigAnd(p,  B , A2 )), Mini_AigAnd(p,  C, Mini_AigAnd(p,  B , A1 )));
};

int OA21x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B, A2 ), Mini_AigAnd(p,  B, A1 ));
};

int OA221x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C, Mini_AigAnd(p,  B2 , A1 )), Mini_AigAnd(p,  C, Mini_AigAnd(p,  B1 , A1 )))));
};

int OA222x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A1 )), Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A1 )))))))));
};

int OA22x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B2, A2 ), Mini_AigOr(p, Mini_AigAnd(p,  B1, A2 ), Mini_AigOr(p, Mini_AigAnd(p,  B2, A1 ), Mini_AigAnd(p,  B1, A1 ))));
};

int OA31x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B1, A3 ), Mini_AigOr(p, Mini_AigAnd(p,  B1, A2 ), Mini_AigAnd(p,  B1, A1 )));
};

int OA331x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A1 )), Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A1 ))))))))));
};

int OA331x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A1 )), Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A1 ))))))))));
};

int OA332x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A1 )), Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A1 )))))))))))))))))));
};

int OA332x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A1 )), Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A1 )))))))))))))))))));
};

int OA333x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B1 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A1 )), Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A1 ))))))))))))))))))))))))))));
};

int OA333x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3)
{
return Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A3 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A2 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B3 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B2 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C3, Mini_AigAnd(p,  B1 , A1 )), Mini_AigOr(p, Mini_AigAnd(p,  C2, Mini_AigAnd(p,  B1 , A1 )), Mini_AigAnd(p,  C1, Mini_AigAnd(p,  B1 , A1 ))))))))))))))))))))))))))));
};

int OA33x2_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3)
{
return Mini_AigOr(p, Mini_AigAnd(p,  B3, A3 ), Mini_AigOr(p, Mini_AigAnd(p,  B2, A3 ), Mini_AigOr(p, Mini_AigAnd(p,  B1, A3 ), Mini_AigOr(p, Mini_AigAnd(p,  B3, A2 ), Mini_AigOr(p, Mini_AigAnd(p,  B2, A2 ), Mini_AigOr(p, Mini_AigAnd(p,  B1, A2 ), Mini_AigOr(p, Mini_AigAnd(p,  B3, A1 ), Mini_AigOr(p, Mini_AigAnd(p,  B2, A1 ), Mini_AigAnd(p,  B1, A1 )))))))));
};

int OAI211xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B, int C)
{
return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p,  Mini_AigLitNot(A2), Mini_AigLitNot(A1) )));
};

int OAI21x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p,  Mini_AigLitNot(A2), Mini_AigLitNot(A1) ));
};

int OAI21xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p,  Mini_AigLitNot(A2), Mini_AigLitNot(A1) ));
};

int OAI21xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p,  Mini_AigLitNot(A2), Mini_AigLitNot(A1) ));
};

int OAI221xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C)
{
return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(B1) ), Mini_AigAnd(p,  Mini_AigLitNot(A2), Mini_AigLitNot(A1) )));
};

int OAI222xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigLitNot(C1) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(B1) ), Mini_AigAnd(p,  Mini_AigLitNot(A2), Mini_AigLitNot(A1) )));
};

int OAI22x1_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(B1) ), Mini_AigAnd(p,  Mini_AigLitNot(A2), Mini_AigLitNot(A1) ));
};

int OAI22xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(B1) ), Mini_AigAnd(p,  Mini_AigLitNot(A2), Mini_AigLitNot(A1) ));
};

int OAI22xp5_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(B1) ), Mini_AigAnd(p,  Mini_AigLitNot(A2), Mini_AigLitNot(A1) ));
};

int OAI311xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int C1)
{
return Mini_AigOr(p, Mini_AigLitNot(C1), Mini_AigOr(p, Mini_AigLitNot(B1), Mini_AigAnd(p,  Mini_AigLitNot(A3), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) ))));
};

int OAI31xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p,  Mini_AigLitNot(A3), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) )));
};

int OAI31xp67_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B)
{
return Mini_AigOr(p, Mini_AigLitNot(B), Mini_AigAnd(p,  Mini_AigLitNot(A3), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) )));
};

int OAI321xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int C)
{
return Mini_AigOr(p, Mini_AigLitNot(C), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(B1) ), Mini_AigAnd(p,  Mini_AigLitNot(A3), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) ))));
};

int OAI322xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigLitNot(C1) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(B1) ), Mini_AigAnd(p,  Mini_AigLitNot(A3), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) ))));
};

int OAI32xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B2), Mini_AigLitNot(B1) ), Mini_AigAnd(p,  Mini_AigLitNot(A3), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) )));
};

int OAI331xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1)
{
return Mini_AigOr(p, Mini_AigLitNot(C1), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B3), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(B1) )), Mini_AigAnd(p,  Mini_AigLitNot(A3), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) ))));
};

int OAI332xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C2), Mini_AigLitNot(C1) ), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B3), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(B1) )), Mini_AigAnd(p,  Mini_AigLitNot(A3), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) ))));
};

int OAI333xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3, int C1, int C2, int C3)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(C3), Mini_AigAnd(p,  Mini_AigLitNot(C2) , Mini_AigLitNot(C1) )), Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B3), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(B1) )), Mini_AigAnd(p,  Mini_AigLitNot(A3), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) ))));
};

int OAI33xp33_ASAP7_75t_R(Mini_Aig_t *p, int A1, int A2, int A3, int B1, int B2, int B3)
{
return Mini_AigOr(p, Mini_AigAnd(p,  Mini_AigLitNot(B3), Mini_AigAnd(p,  Mini_AigLitNot(B2) , Mini_AigLitNot(B1) )), Mini_AigAnd(p,  Mini_AigLitNot(A3), Mini_AigAnd(p,  Mini_AigLitNot(A2) , Mini_AigLitNot(A1) )));
};

