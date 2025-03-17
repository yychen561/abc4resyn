#include "mainInt.h"
#include "map/mio/mio.h"
#include "node_logic/node_logic.h"
#include <stdio.h>

ABC_NAMESPACE_IMPL_START
void Vec_Extend_Cap(std::vector<int> * a){
    a->reserve(2 * a->capacity());
}

int ConstructNODE(IO_Manager *OUT, Abc_Obj_t *pNode, int Length, int node_count, int *pin_count)
{
    static int fReport = 0;
    Mio_Gate_t *pGate = (Mio_Gate_t *)pNode->pData;
    Mio_Pin_t *pGatePin;
    Abc_Obj_t *pNode2;
    int i;

    // printf(" %-*s ", Length, Mio_GateReadName(pGate));

    if(OUT->node_list.capacity() <= node_count + 1)
    {
        OUT->node_list.reserve(2 * OUT->node_list.capacity());
    }
    OUT->node_list[node_count].Type = Mio_GateReadName(pGate);
    printf(" %-*s ", Length, OUT->node_list[node_count].Type.c_str());

    OUT->node_list[node_count].Fain_num = Abc_ObjFaninNum(pNode);
    printf("Fain_num=%d ", OUT->node_list[node_count].Fain_num);
    OUT->node_list[node_count].ID = pNode->Id;
    printf("ID=%d ", OUT->node_list[node_count].ID);


    if (OUT->flat_node2pin_start_map.capacity() < OUT->node_list[node_count].ID + 1)
    {
        OUT->flat_node2pin_start_map.reserve(OUT->node_list[node_count].ID + 1);
    }
    
    OUT->flat_node2pin_start_map[OUT->node_list[node_count].ID] = *pin_count;

    for (pGatePin = Mio_GateReadPins(pGate), i = 0; pGatePin; pGatePin = Mio_PinReadNext(pGatePin), i++)
    {
        // printf("%s=%s ", Mio_PinReadName(pGatePin), Abc_ObjName(Abc_ObjFanin(pNode, i)));
        // Abc_Obj_t *tem = Abc_ObjFanin(pNode, i);
        printf("%s.ID=%d ", Mio_PinReadName(pGatePin), pNode->vFanins.pArray[i]);

        if (OUT->flat_node2pin_map.capacity() < *pin_count + 1)
        {
            OUT->flat_node2pin_map.reserve(*pin_count + 1);
        }
        OUT->flat_node2pin_map[*pin_count] = *pin_count;

        if(OUT->pin2node_map.capacity() < *pin_count + 1)
        {
            OUT->pin2node_map.reserve(*pin_count + 1);
        }
        OUT->pin2node_map[*pin_count] = OUT->node_list[node_count].ID;

        if(OUT->pin2net_map.capacity() < *pin_count + 1)
        {
            OUT->pin2net_map.reserve(*pin_count + 1);
        }
        OUT->pin2net_map[*pin_count] = pNode->vFanins.pArray[i];

        if(OUT->flat_net2pin_start_map.capacity() < pNode->vFanins.pArray[i] + 1)
        {
            OUT->flat_net2pin_start_map.reserve(pNode->vFanins.pArray[i] + 1);
        }
        OUT->flat_net2pin_start_map[pNode->vFanins.pArray[i]] = *pin_count;
        
        if(OUT->flat_net2pin_map.capacity() < *pin_count + 1)
        {
            OUT->flat_net2pin_map.reserve(*pin_count + 1);
        }
        OUT->flat_net2pin_map[pNode->vFanins.pArray[i]] = *pin_count;

        (*pin_count)++;
        // printf("\n");
        // printf("%s.ID=%d ", Mio_PinReadName(pGatePin), tem->Id);
    }

    assert(i == Abc_ObjFaninNum(pNode));
    // printf("%s=%s", Mio_GateReadOutName(pGate), Abc_ObjName(Abc_ObjFanout0(pNode)));
    // Abc_Obj_t *tem = Abc_ObjFanout0(pNode);
    printf("%s.ID=%d", Mio_GateReadOutName(pGate), pNode->vFanouts.pArray[0]);

    if(OUT->flat_node2pin_map.capacity() < *pin_count + 1)
    {
        OUT->flat_node2pin_map.reserve(*pin_count + 1);
    }
    OUT->flat_node2pin_map[*pin_count] = *pin_count;

    if(OUT->pin2node_map.capacity() < *pin_count + 1)
    {
        OUT->pin2node_map.reserve(*pin_count + 1);
    }
    OUT->pin2node_map[*pin_count] = OUT->node_list[node_count].ID;

    if(OUT->pin2net_map.capacity() < *pin_count + 1)
    {
        OUT->pin2net_map.reserve(*pin_count + 1);
    }
    OUT->pin2net_map[*pin_count] = pNode->vFanouts.pArray[0];
    
    (*pin_count)++;
    // printf("\n");
    // printf("%s.ID=%d", Mio_GateReadOutName(pGate), tem->Id);

    if (Mio_GateReadTwin(pGate) == NULL)
        return 0;
    pNode2 = Abc_NtkFetchTwinNode(pNode);
    if (pNode2 == NULL)
    {
        if (!fReport)
            fReport = 1, printf("Warning: Missing second output of gate(s) \"%s\".\n", Mio_GateReadName(pGate));
        return 0;
    }
    printf(" %s=%s", Mio_GateReadOutName((Mio_Gate_t *)pNode2->pData), Abc_ObjName(Abc_ObjFanout0(pNode2)));
    return 1;
}

ABC_NAMESPACE_IMPL_END