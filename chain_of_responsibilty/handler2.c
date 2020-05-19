#include "handler2.h"



static void handle(struct ChainBase *Base)
{
    printf("Handle2...\n");

    if(Base->next_chain != NULL)
        Base->next_chain->handle(Base->next_chain);
}


void initHandler2(struct Handler2 *Handler)
{
    initChainBase(&Handler->chain_base);

    Handler->chain_base.handle = handle;
}
