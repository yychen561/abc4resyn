#define _VERIFIC_DATABASE_H_ 1
#define ABC_NAMESPACE_HEADER_START
#define ABC_NAMESPACE_HEADER_END

#include "aig/miniaig/miniaig.h"
#include "base/main/abcapis.h"
#include "aig/saig/saig.h"

typedef struct Abc_Ntk_t_ Abc_Ntk_t;

void Command_Execute(char *Command, Abc_Frame_t *pAbc)
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

int main(int argc, char *argv[])
{
    Aig_Man_t *p;
    Abc_Frame_t *pAbc;
    char Command[1000];

    // start the ABC framework and MiniAIG pakcage
    Abc_Start();
    pAbc = Abc_FrameGetGlobalFrame();
    p = Aig_ManStart(-1);

    // create a MiniAIG
    int i1 = Aig_ObjCreateCi(p);
    int i2 = Aig_ObjCreateCi(p);
    int o1 = Aig_And(p, i1, i2);
    Aig_ObjCreateCo(p, o1);

    // transform MiniAIG to ABC network
    Abc_NtkInputMiniAig(pAbc, p);

    // execute command
    sprintf(Command, "print_stats");
    Command_Execute(Command, pAbc);

    sprintf(Command, "print_io");
    Command_Execute(Command, pAbc);

    sprintf(Command, "write demo_miniAig_1.v");
    Command_Execute(Command, pAbc);

    sprintf(Command, "logic");
    Command_Execute(Command, pAbc);

    sprintf(Command, "print_kmap");
    Command_Execute(Command, pAbc);

    sprintf(Command, "print_gates");
    Command_Execute(Command, pAbc);

    sprintf(Command, "write demo_miniAig_2.v");
    Command_Execute(Command, pAbc);

    return 0;
}