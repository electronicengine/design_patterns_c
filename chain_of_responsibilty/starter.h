#ifndef __starter_H
#define __starter_H


#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>

#include "handler1.h"
#include "handler2.h"
#include "handler3.h"



struct Starter
{
    struct Handler1 handler1;
    struct Handler2 handler2;
    struct Handler3 handler3;

    void (*createChain)(struct Starter *Start);
    void (*startChain)(struct Starter *Start);

};

void initStarter(struct Starter *Start);




#endif
