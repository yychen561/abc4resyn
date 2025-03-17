#include "node_logic/node_logic.h"
#include <iostream>
#include <vector>
#include <string>

void print_IO_Info(IO_Manager *P)
{
    std::cout << "P contents:" << std::endl;
    std::cout << "PI_num: " << P->PI_num << std::endl;
    std::cout << "PO_num: " << P->PO_num << std::endl;
    std::cout << "node_num: " << P->node_num << std::endl;
    std::cout << "node_list:" << std::endl;
    for (int i = 0; i < P->node_num; i++)
    {
        std::cout << "  Type: " << P->node_list[i].Type << std::endl;
        std::cout << "  Fain_num: " << P->node_list[i].Fain_num << std::endl;
        std::cout << "  ID: " << P->node_list[i].ID << std::endl;
    }
    std::cout << "flat_node2pin_start_map: ";
    for (int i = 0; i < P->flat_node2pin_start_map.capacity(); i++)
    {
        std::cout << P->flat_node2pin_start_map[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "flat_node2pin_map: ";
    for (int i = 0; i < P->flat_node2pin_map.capacity(); i++)
    {
        std::cout << P->flat_node2pin_map[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "pin2node_map: ";
    for (int i = 0; i < P->pin2node_map.capacity(); i++)
    {
        std::cout << P->pin2node_map[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "pin2net_map: ";
    for (int i = 0; i < P->pin2net_map.capacity(); i++)
    {
        std::cout << P->pin2net_map[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "flat_net2pin_start_map: ";
    for (int i = 0; i < P->flat_net2pin_start_map.capacity(); i++)
    {
        std::cout << P->flat_net2pin_start_map[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "flat_net2pin_map: ";
    for (int i = 0; i < P->flat_net2pin_map.capacity(); i++)
    {
        std::cout << P->flat_net2pin_map[i] << " ";
    }
}