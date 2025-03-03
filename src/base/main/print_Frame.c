#include "mainInt.h"
#include "map/mio/mio.h"
#include <stdio.h>

ABC_NAMESPACE_IMPL_START

int print_nodeinfo(Abc_Obj_t *pNode, int Length)
{
    static int fReport = 0;
    Mio_Gate_t *pGate = (Mio_Gate_t *)pNode->pData;
    Mio_Pin_t *pGatePin;
    Abc_Obj_t *pNode2;
    int i;
    printf(" %-*s ", Length, Mio_GateReadName(pGate));
    for (pGatePin = Mio_GateReadPins(pGate), i = 0; pGatePin; pGatePin = Mio_PinReadNext(pGatePin), i++)
    {
        // printf("%s=%s ", Mio_PinReadName(pGatePin), Abc_ObjName(Abc_ObjFanin(pNode, i)));
        // Abc_Obj_t *tem = Abc_ObjFanin(pNode, i);
        printf("%s.ID=%d ", Mio_PinReadName(pGatePin), pNode->vFanins.pArray[i]);
        // printf("\n");
        // printf("%s.ID=%d ", Mio_PinReadName(pGatePin), tem->Id);
    }

    assert(i == Abc_ObjFaninNum(pNode));
    // printf("%s=%s", Mio_GateReadOutName(pGate), Abc_ObjName(Abc_ObjFanout0(pNode)));
    // Abc_Obj_t *tem = Abc_ObjFanout0(pNode);
    printf("%s.ID=%d", Mio_GateReadOutName(pGate), pNode->vFanouts.pArray[0]);
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

void Io_NtkWritePos(FILE *pFile, Abc_Ntk_t *pNtk, int fWriteLatches)
{
    Abc_Obj_t *pTerm, *pNet;
    int LineLength;
    int AddedLength;
    int NameCounter;
    int i;

    LineLength = 8;
    NameCounter = 0;

    if (fWriteLatches)
    {
        Abc_NtkForEachPo(pNtk, pTerm, i)
        {
            pNet = Abc_ObjFanin0(pTerm);
            // get the line length after this name is written
            AddedLength = strlen(Abc_ObjName(pNet)) + 1;
            if (NameCounter && LineLength + AddedLength + 3 > IO_WRITE_LINE_LENGTH)
            { // write the line extender
                fprintf(pFile, " \\\n");
                // reset the line length
                LineLength = 0;
                NameCounter = 0;
            }
            fprintf(pFile, " %s", Abc_ObjName(pNet));
            LineLength += AddedLength;
            NameCounter++;
        }
    }
}

void Io_NtkWritePis(FILE *pFile, Abc_Ntk_t *pNtk, int fWriteLatches)
{
    Abc_Obj_t *pTerm, *pNet;
    int LineLength;
    int AddedLength;
    int NameCounter;
    int i;

    LineLength = 7;
    NameCounter = 0;

    if (fWriteLatches)
    {
        Abc_NtkForEachPi(pNtk, pTerm, i)
        {
            pNet = Abc_ObjFanout0(pTerm);
            // get the line length after this name is written
            AddedLength = strlen(Abc_ObjName(pNet)) + 1;
            if (NameCounter && LineLength + AddedLength + 3 > IO_WRITE_LINE_LENGTH)
            { // write the line extender
                fprintf(pFile, " \\\n");
                // reset the line length
                LineLength = 0;
                NameCounter = 0;
            }
            fprintf(pFile, " %s", Abc_ObjName(pNet));
            LineLength += AddedLength;
            NameCounter++;
        }
    }
}

void print_frame(Abc_Frame_t *pAbc)
{

    Abc_Obj_t *pObj;
    Abc_Ntk_t *pNtk;
    int Length;
    ProgressBar *pProgress;
    Abc_Obj_t *pNode;

    pNtk = pAbc->pNtkCur;
    // only printing the PNtkCur
    //  printf("only printing the Ntk in frame\n");
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

    // print PI PO info

    // print node info
    int j;
    Length = Abc_NtkHasMapping(pNtk) ? Mio_LibraryReadGateNameMax((Mio_Library_t *)pNtk->pManFunc) : 0;
    pProgress = Extra_ProgressBarStart(stdout, Abc_NtkObjNumMax(pNtk));
    Abc_NtkForEachNode(pNtk, pNode, j)
    {
        Extra_ProgressBarUpdate(pProgress, j, NULL);
        if (print_nodeinfo(pNode, Length)) // skip the next node
            j++;
        printf("\n");
    }
    Extra_ProgressBarStop(pProgress);
    // Vec_IntEntry
}

ABC_NAMESPACE_IMPL_END