#ifndef __handler2_H
#define __handler2_H


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

struct Handler2
{

    struct ChainBase chain_base;

};


void initHandler2(struct Handler2 *Handler);




#endif
