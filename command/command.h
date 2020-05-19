#ifndef __command_H
#define __command_H


#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include "subject.h"


#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr)-(unsigned long)(&((type *)0)->member)))



struct Command
{
    void (*execute)(struct Command *Comm);
    struct Subject subject;

};

void initCommand(struct Command *Comm);




#endif
