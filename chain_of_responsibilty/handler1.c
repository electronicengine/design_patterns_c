#include "handler1.h"

static void handle(struct ChainBase *Base)
{
    printf("Handle1...\n");

    if(Base->next_chain != NULL)
        Base->next_chain->handle(Base->next_chain);

}


void initHandler1(struct Handler1 *Handler)
{
    initChainBase(&Handler->chain_base);

    Handler->chain_base.handle = handle;

}
