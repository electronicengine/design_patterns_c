#include "handler3.h"

static void handle(struct ChainBase *Base)
{
    printf("Handle3...\n");

    if(Base->next_chain != NULL)
        Base->next_chain->handle(Base->next_chain);

}


void initHandler3(struct Handler3 *Handler)
{
    initChainBase(&Handler->chain_base);

    Handler->chain_base.handle = handle;

}
