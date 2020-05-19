#include "client.h"

void giveOrder(struct Client *Cli)
{
    Cli->commander.appendCommand(&Cli->commander, &Cli->command1.command);
    Cli->commander.appendCommand(&Cli->commander, &Cli->command2.command);

    Cli->commander.executeCommands(&Cli->commander);
}


void initClient(struct Client *Cli)
{

    initCommand1(&Cli->command1);
    initCommand2(&Cli->command2);

    initCommander(&Cli->commander);

    Cli->giveOrder = giveOrder;


}
