#include "chain_base.h"



void addChain(struct ChainBase *Base, struct ChainBase *NextChain)
{
    if(Base->next_chain == NULL)
        Base->next_chain = NextChain;
    else
        Base->next_chain->addChain(Base->next_chain, NextChain);

}



void initChainBase(struct ChainBase *Base)
{
    Base->addChain = addChain;

    Base->next_chain = NULL;
}
