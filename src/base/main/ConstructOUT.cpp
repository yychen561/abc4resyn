#include "mainInt.h"
#include "map/mio/mio.h"
#include "node_logic/node_logic.h"
#include <stdio.h>

extern int ConstructNODE(IO_Manager *OUT, Abc_Obj_t *pNode, int Length, int node_count, int *pin_count);

ABC_NAMESPACE_IMPL_START

void ConstructOUT(Abc_Frame_t *pAbc, IO_Manager *OUT)
{

    Abc_Obj_t *pObj;
    Abc_Ntk_t *pNtk;
    int Length;
    ProgressBar *pProgress;
    Abc_Obj_t *pNode;
    
    pNtk = pAbc->pNtkCur;

    int PIO_count = 0;
    for (int i = 0; i < pNtk->vObjs->nSize; i++)
    {
        pObj = Abc_NtkObj(pNtk, i);
        if (pObj != NULL && pObj->Type != ABC_OBJ_NODE)
        {
            PIO_count++;
            printf("pObj->Id: %d\npObj->Type: %d\n", pObj->Id, pObj->Type);
            printf("Fanins: ");
            for (int j = 0; j < pObj->vFanins.nSize; j++)
            {
                printf("%d ", pObj->vFanins.pArray[j]);
            }
            printf("\nFanouts: ");
            for (int j = 0; j < pObj->vFanouts.nSize; j++)
            {
                printf("%d ", pObj->vFanouts.pArray[j]);
            }
            printf("\n\n");
        }
    }
    assert(PIO_count == Abc_NtkPiNum(pNtk) + Abc_NtkPoNum(pNtk));

    OUT->PI_num = Abc_NtkPiNum(pNtk);
    OUT->PO_num = Abc_NtkPoNum(pNtk);

    // print PI PO info

    // print node info
    int j;
    Length = Abc_NtkHasMapping(pNtk) ? Mio_LibraryReadGateNameMax((Mio_Library_t *)pNtk->pManFunc) : 0;
    pProgress = Extra_ProgressBarStart(stdout, Abc_NtkObjNumMax(pNtk));

    int node_count = 0;
    int pin_count = 0;
    Abc_NtkForEachNode(pNtk, pNode, j)
    {
        Extra_ProgressBarUpdate(pProgress, j, NULL);

        if (ConstructNODE(OUT, pNode, Length, node_count, &pin_count)) // skip the next node
            j++;
        node_count++;
        printf("\n");
    }

    OUT->node_num = node_count;
    Extra_ProgressBarStop(pProgress);
    // Vec_IntEntry

    return;
}

ABC_NAMESPACE_IMPL_END