#include "node_logic/node_logic.h"
#include <cassert>
#include <cstdio>

void process_io_manager(IO_Manager *IN, IO_Manager *OUT)
{
    vector <int> net_dream2abc = {0}; // initialize to -1 meaning not mapped

    int input_list[100] = {0};

    Mini_Aig_t *p;
    Abc_Frame_t *pAbc;
    char Command[1000];

    


    // start the ABC framework and MiniAIG pakcage
    Abc_Start();
    pAbc = Abc_FrameGetGlobalFrame();
    p = Mini_AigStart();

    // create a MiniAIG
    for (int i = 1; i <= IN->PI_num; i++)
    {
        net_dream2abc[i] = Mini_AigCreatePi(p);
    }

    for (int i = 0; i < IN->node_num; i++)
    {
        for (int j = 0; j < IN->node_list[i].Fain_num; j++)
        {

            int input_net = IN->pin2net_map[IN->flat_node2pin_map[IN->flat_node2pin_start_map[i] + j]];
            input_list[j] = net_dream2abc[input_net];
            assert(input_list[j] != 0);
        }
        int output = NodeName2func(p, IN->node_list[i].Type.c_str(), input_list, IN->node_list[i].Fain_num);
        int output_net = IN->pin2net_map[IN->flat_node2pin_map[IN->flat_node2pin_start_map[i] + IN->node_list[i].Fain_num]];
        net_dream2abc[output_net] = output;
        if (output_net > IN->PI_num && output_net <= IN->PI_num + IN->PO_num)
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

    sprintf(Command, "print_stats");
    Command_Execute(Command, pAbc);

    sprintf(Command, "print_io");
    Command_Execute(Command, pAbc);

    sprintf(Command, "print_gates");
    Command_Execute(Command, pAbc);

    // sprintf(Command, "write_verilog output.v");
    // Command_Execute(Command, pAbc);

    sprintf(Command, "map");
    Command_Execute(Command, pAbc);

    ConstructOUT(pAbc, OUT);
    if(OUT == NULL)
    {
        fprintf(stderr, "ConstructOUT failed\n");
        return;
    }

    // printf("\n");

    // sprintf(Command, "write_blif output2.blif");
    // Command_Execute(Command, pAbc);

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

    return;
};