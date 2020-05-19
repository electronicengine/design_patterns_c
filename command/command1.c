#include "command1.h"


static void execute(struct Command *Comm)
{

    struct Command1 *command1 = container_of(Comm, typeof(*command1), command);

    printf("Command 1 giving order!\n");
    Comm->subject.order1(&Comm->subject);

}


void initCommand1(struct Command1 *Comm)
{
    initCommand(&Comm->command);
    Comm->command.execute = execute;

}
