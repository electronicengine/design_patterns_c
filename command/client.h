#ifndef __client_H
#define __client_H

#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>

#include "command1.h"
#include "command2.h"
#include "commander.h"



struct Client
{
    struct Command1 command1;
    struct Command2 command2;
    struct Commander commander;

    void (*giveOrder)(struct Client *Cli);
};



void initClient(struct Client *Cli);




#endif
