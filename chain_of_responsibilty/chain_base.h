#ifndef __chain_base_H
#define __chain_base_H


#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>



struct ChainBase
{

    void (*handle)(struct ChainBase *Base);
    void (*addChain)(struct ChainBase *Base, struct ChainBase *NextChain);

    struct ChainBase *next_chain;

};

void initChainBase(struct ChainBase *Base);




#endif
