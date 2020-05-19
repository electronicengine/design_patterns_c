#ifndef __commander_H
#define __commander_H


#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>

#include "command.h"

#define MAX_COMMAND     12

struct Commander
{
    void (*appendCommand)(struct Commander *Cmdr, struct Command *Comm);
    void (*executeCommands)(struct Commander *Cmdr);

    struct Command *commands[MAX_COMMAND];
    int total_commands;

};

void initCommander(struct Commander *Comm);




#endif
