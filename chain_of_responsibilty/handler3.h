#ifndef __handler3_H
#define __handler3_H


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


struct Handler3
{

    struct ChainBase chain_base;

};


void initHandler3(struct Handler3 *Handler);




#endif
