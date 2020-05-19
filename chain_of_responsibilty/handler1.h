#ifndef __handler1_H
#define __handler1_H


#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>

#include "chain_base.h"



struct Handler1
{
    struct ChainBase chain_base;

};

void initHandler1(struct Handler1 *Handler);




#endif
