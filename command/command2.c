#include "command2.h"

static void execute(struct Command *Comm)
{

    struct Command2 *command2 = container_of(Comm, typeof(*command2), command);

    printf("Command 2 giving order!\n");
    Comm->subject.order2(&Comm->subject);

}


void initCommand2(struct Command2 *Comm)
{
    initCommand(&Comm->command);
    Comm->command.execute = execute;
}
