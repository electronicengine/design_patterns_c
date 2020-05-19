#include "commander.h"


void appendCommand(struct Commander *Cmdr, struct Command *Comm)
{
    Cmdr->commands[Cmdr->total_commands++] = Comm;
}



void executeCommands(struct Commander *Cmdr)
{
    for(int i = 0; i<Cmdr->total_commands; i++)
        Cmdr->commands[i]->execute(Cmdr->commands[i]);
}

void initCommander(struct Commander *Comm)
{
    Comm->appendCommand = appendCommand;
    Comm->executeCommands = executeCommands;

    Comm->total_commands = 0;

}
