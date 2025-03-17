#define _VERIFIC_DATABASE_H_ 1
#define ABC_NAMESPACE_HEADER_START
#define ABC_NAMESPACE_HEADER_END




// typedef struct Abc_Ntk_t_ Abc_Ntk_t;
#ifdef __cplusplus
extern "C" {
#endif

#include "aig/miniaig/miniaig.h"
#include "base/main/abcapis.h"
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

extern int A2O1A1Ixp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int A2O1A1O1Ixp25_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO211x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO21x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO21x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO221x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO221x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO222x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO22x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO22x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO31x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO322x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO32x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO32x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO331x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO331x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO332x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO332x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO333x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO333x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AO33x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI211x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI211xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI21x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI21xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI21xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI221x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI221xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI222xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI22x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI22xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI22xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI311xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI31xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI31xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI321xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI322xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI32xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI331xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI332xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI333xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AOI33xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);

///////////////////////asap7sc7p5t_OA_RVT_FF_nldm_201020.lib/////////////////////////

extern int O2A1O1Ixp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int O2A1O1Ixp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA211x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA21x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA221x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA222x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA22x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA31x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA331x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA331x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA332x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA332x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA333x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA333x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OA33x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI211xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI21x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI21xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI21xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI221xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI222xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI22x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI22xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI22xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI311xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI31xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI31xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI321xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI322xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI32xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI331xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI332xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI333xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OAI33xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);

///////////////////////asap7sc7p5t_SIMPLE_RVT_FF_nldm_201020.lib/////////////////////////

extern int AND2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AND2x4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AND2x6_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AND3x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AND3x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AND3x4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AND4x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AND4x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AND5x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int AND5x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int FAx1_ASAP7_75t_R_CON(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int FAx1_ASAP7_75t_R_SN(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int HAxp5_ASAP7_75t_R_CON(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int HAxp5_ASAP7_75t_R_SN(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int MAJIxp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int MAJx2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int MAJx3_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND2x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND2x1p5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND2xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND2xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND2xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND3x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND3x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND3xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND4xp25_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND4xp75_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NAND5xp2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR2x1p5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR2xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR2xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR3x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR3x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR3xp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR4xp25_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR4xp75_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int NOR5xp2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OR2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OR2x4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OR2x6_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OR3x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OR3x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OR3x4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OR4x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OR4x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OR5x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int OR5x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int TIEHIx1_ASAP7_75t_R(Mini_Aig_t *p);
extern int TIELOx1_ASAP7_75t_R(Mini_Aig_t *p);
extern int XNOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int XNOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int XNOR2xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int XOR2x1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int XOR2x2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int XOR2xp5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);

///////////////////////asap7sc7p5t_INVBUF_RVT_FF_nldm_201020.lib/////////////////////////

extern int BUFx10_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx12_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx12f_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx16f_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx24_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx3_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx4f_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx6f_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int BUFx8_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int CKINVDCx10_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int CKINVDCx11_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int CKINVDCx12_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int CKINVDCx14_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int CKINVDCx16_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int CKINVDCx20_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int CKINVDCx5p33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int CKINVDCx6p67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int CKINVDCx8_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int CKINVDCx9p33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int HB1xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int HB2xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int HB3xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int HB4xp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVx11_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVx13_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVx1_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVx2_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVx3_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVx4_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVx5_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVx6_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVx8_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVxp33_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);
extern int INVxp67_ASAP7_75t_R(Mini_Aig_t *p, int *Ptr, int Prt_len);

///////////////////////NodeName2func.c/////////////////////////
extern int NodeName2func(Mini_Aig_t *p,const char *name, int *Ptr, int Ptr_len);


#ifdef __cplusplus
}
#endif
//////////////////////IOProcess.c////////////////////////////////

// void print_frame(Abc_Frame_t *pAbc);



#ifdef __cplusplus
#include <vector>
#include <string>
using namespace std;
struct pin_type
{
    string Name;
    int ID;
};

struct node_type
{
    int Fain_num;
    string Type;
    int ID;
    // struct pin_type *Fain_list;
};

struct IO_Manager
{
    // pin id 1 ~ +inf
    int PI_num;
    int PO_num;

    int node_num;
    vector <node_type> node_list;

    vector <int> flat_node2pin_map; // pin_id
    vector <int> flat_node2pin_start_map;// start index
    vector <int> pin2node_map;

    vector <int> pin2net_map; //-1 means to PI, -2 means to PO
    vector <int> flat_net2pin_map; //pin_id
    vector <int> flat_net2pin_start_map; // start index
};

extern void process_io_manager(IO_Manager *IN, IO_Manager *OUT);
extern void ConstructOUT(Abc_Frame_t *pAbc, IO_Manager *OUT);
extern void print_IO_Info( IO_Manager *P);
extern IO_Manager* netlist_logic(IO_Manager *IN);
#endif



