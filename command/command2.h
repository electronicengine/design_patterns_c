#ifndef __command2_H
#define __command2_H


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




struct Command2
{
    struct Command command;
};

void initCommand2(struct Command2 *Comm);




#endif
