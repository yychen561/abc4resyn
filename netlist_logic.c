#include "node_logic/node_logic.h"

// #include "base/main/mainInt.h"

void print_frame(Abc_Frame_t *pAbc);

struct IO_Manager
{
    int PI_num;
    int PO_num;

    struct node_type {
        int is_PI;
        int Fain_num;
        char Type[100];
        int ID;
    }node_list[10000];
    int node_num;
    int node2pin_map[10000];
    int node2pin_start_map[10000];

    int pin2node_map[10000];

    int pin2net_map[10000]; //-1 means to PI, -2 means to PO
    int flat_net2pin_map[10000];
    int flat_net2pin_start_map[10000];
};

void process_io_manager(struct IO_Manager *INFromDream)
{
    int net_dream2abc[10000] = {0}; // initialize to -1 meaning not mapped

    int input_list[100] = {0};

    Mini_Aig_t *p;
    Abc_Frame_t *pAbc;
    char Command[1000];

    // start the ABC framework and MiniAIG pakcage
    Abc_Start();
    pAbc = Abc_FrameGetGlobalFrame();
    p = Mini_AigStart();

    // create a MiniAIG
    for (int i = 1; i <= INFromDream->PI_num; i++)
    {
        net_dream2abc[i] = Mini_AigCreatePi(p);
    }


    for (int i = 0; i < INFromDream->node_num; i++)
    {
        for (int j = 0; j < INFromDream->node_list[i].Fain_num; j++)
        {

            int input_net = INFromDream->pin2net_map[INFromDream->node2pin_start_map[INFromDream->node2pin_map[i] + j]];
            input_list[j] = net_dream2abc[input_net];
            assert(input_list[j] != 0);
        }
        int output = NodeName2func(p, INFromDream->node_list[i].Type, input_list, INFromDream->node_list[i].Fain_num);
        int output_net = INFromDream->pin2net_map[INFromDream->node2pin_start_map[INFromDream->node2pin_map[i] + INFromDream->node_list[i].Fain_num]];
        net_dream2abc[output_net] = output;
        if (output_net > INFromDream->PI_num && output_net <= INFromDream->PI_num + INFromDream->PO_num)
        {
            Mini_AigCreatePo(p, output);
        }
    }

    // transform MiniAIG to ABC network
    Abc_NtkInputMiniAig(pAbc, p);

    // execute command
    sprintf(Command, "read ./node_lib/asap7sc7p5t_ALL_RVT_FF_nldm_201020.lib");
    Command_Execute(Command, pAbc);

    // // sprintf(Command, "print_library");
    // // Command_Execute(Command, pAbc);

    // sprintf(Command, "logic");
    // Command_Execute(Command, pAbc);

    // sprintf(Command, "print_kmap");
    // Command_Execute(Command, pAbc);

    // sprintf(Command, "print_stats");
    // Command_Execute(Command, pAbc);

    // sprintf(Command, "print_io");
    // Command_Execute(Command, pAbc);

    // sprintf(Command, "print_gates");
    // Command_Execute(Command, pAbc);

    // sprintf(Command, "write_verilog output.v");
    // Command_Execute(Command, pAbc);

    sprintf(Command, "map");
    Command_Execute(Command, pAbc);

    print_frame(pAbc);
    printf("\n");

    sprintf(Command, "write_blif output2.blif");
    Command_Execute(Command, pAbc);

    // sprintf(Command, "logic");
    // Command_Execute(Command, pAbc);

    // sprintf(Command, "print_gates");
    // Command_Execute(Command, pAbc);

    // sprintf(Command, "print_stats");
    // Command_Execute(Command, pAbc);

    // sprintf(Command, "print_io");
    // Command_Execute(Command, pAbc);

    Mini_AigStop(p);
    Abc_Stop();
};

int main(int argc, char *argv[])
{
    // int PI_num = 3;
    // int PI[10000];
    // struct node_type node_list[10000] = {{1,2,"AND2x2_ASAP7_75t_R",0},{1,2,"AND2x2_ASAP7_75t_R",1},{0,2,"AND2x2_ASAP7_75t_R",2}};
    // int node_num = 3;
    // int node2pin_map[10000] = {0,3,6};
    // int node2pin_start_map[10000] = {0,1,6,2,3, 7,4,5, 8};
    // int pin2node_map[10000] = {0, 0, 1, 1, 2, 2, 0, 1, 2};
    // int pin2net_map[10000] = {-1 , -1, 3 , -1, 3, 4, 3, 4, -2};//-1 means to PI, -2 means to PO
    // int flat_net2pin_map[10000] = {-1, -1, -1, 0, 3};
    // int flat_net2pin_start_map[10000] = {6,2,4, 7,5};

    struct IO_Manager *INFromDream;

    // Allocate memory for INFromDream
    INFromDream = (struct IO_Manager *)malloc(sizeof(struct IO_Manager));
    if (INFromDream == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Initialize INFromDream
    *INFromDream = (struct IO_Manager){
        .PI_num = 2,
        .PO_num = 2,
        .node_list = {
            {1, 2, "HAxp5_ASAP7_75t_R_CON", 0},
            {1, 2, "HAxp5_ASAP7_75t_R_SN", 1}
        },
        .node_num = 2,
        .node2pin_map = {0, 3},
        .node2pin_start_map = {0, 1, 6, 2, 3, 7, 4, 5, 8},
        .pin2node_map = {0, 0, 1, 1, 2, 2, 0, 1, 2},
        .pin2net_map = {1, 2, 1, 2, 4, 4, 3, 4},
        .flat_net2pin_map = {-1, 0, 2, 4, 5},
        .flat_net2pin_start_map = {0, 2, 2, 3, 6, 7}
    };

    // Process IO_Manager
    process_io_manager(INFromDream);

    // Free allocated memory
    free(INFromDream);

    return 0;
}