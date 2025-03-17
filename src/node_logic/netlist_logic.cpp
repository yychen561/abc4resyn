#include "node_logic.h"
#include <iostream>
#include <vector>
#include <string>

IO_Manager* netlist_logic(IO_Manager *IN)
{
    IO_Manager *OUT;

    // Allocate memory for OUT
    OUT = new IO_Manager();
    if (OUT == NULL)
    {
        std::cerr << "Memory allocation failed" << std::endl;
    }
    OUT->node_list.reserve(10);
    OUT->flat_node2pin_start_map.reserve(10);
    OUT->flat_node2pin_map.reserve(10);
    OUT->pin2node_map.reserve(10);
    OUT->pin2net_map.reserve(10);
    OUT->flat_net2pin_start_map.reserve(10);
    OUT->flat_net2pin_map.reserve(10);

    // Process IO_Manager
    process_io_manager(IN, OUT);



    return OUT;
}