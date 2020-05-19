#ifndef __command1_H
#define __command1_H


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




struct Command1
{
    struct Command command;
};

void initCommand1(struct Command1 *Comm);




#endif
