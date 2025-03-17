#include "node_logic/node_logic.h"
#include <iostream>
#include <vector>
#include <string>

int main(int argc, char *argv[])
{
    // int PI_num = 3;
    // int PI[10000];
    // struct node_type node_list[10000] = {{1,2,"AND2x2_ASAP7_75t_R",0},{1,2,"AND2x2_ASAP7_75t_R",1},{0,2,"AND2x2_ASAP7_75t_R",2}};
    // int node_num = 3;
    // int flat_node2pin_start_map[10000] = {0,3,6};
    // int flat_node2pin_map[10000] = {0,1,6,2,3, 7,4,5, 8};
    // int pin2node_map[10000] = {0, 0, 1, 1, 2, 2, 0, 1, 2};
    // int pin2net_map[10000] = {-1 , -1, 3 , -1, 3, 4, 3, 4, -2};//-1 means to PI, -2 means to PO
    // int flat_net2pin_map[10000] = {-1, -1, -1, 0, 3};
    // int flat_net2pin_start_map[10000] = {6,2,4, 7,5};

    IO_Manager *IN, *OUT;

    // Allocate memory for IN
    IN = new IO_Manager();
    if (IN == NULL)
    {
        std::cerr << "Memory allocation failed" << std::endl;
        return 1;
    }

    // Initialize IN
    IN->PI_num = 2;
    IN->PO_num = 2;
    IN->node_num = 2;
    IN->flat_node2pin_start_map = {0, 3};
    IN->flat_node2pin_map = {0, 1, 6, 2, 3, 7, 4, 5, 8};
    IN->pin2node_map = {0, 0, 1, 1, 2, 2, 0, 1, 2};
    IN->pin2net_map = {1, 2, 1, 2, 4, 4, 3, 4};
    IN->flat_net2pin_start_map = {-1, 0, 2, 4, 5};
    IN->flat_net2pin_map = {0, 2, 2, 3, 6, 7};

    IN->node_list.resize(2);
    IN->node_list[0].Fain_num = 2;
    IN->node_list[0].Type = "HAxp5_ASAP7_75t_R_CON";
    IN->node_list[0].ID = 0;

    IN->node_list[1].Fain_num = 2;
    IN->node_list[1].Type = "HAxp5_ASAP7_75t_R_SN";
    IN->node_list[1].ID = 1;

    // Allocate memory for OUT
    OUT = netlist_logic(IN);
    
    // Print contents of OUT
    print_IO_Info(OUT);
}