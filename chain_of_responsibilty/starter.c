#include "starter.h"

static void startChain(struct Starter *Start)
{
    struct Handler1 *chain_root = &Start->handler1;
    struct Handler2 *chain_1 = &Start->handler2;
    struct Handler3 *chain_2 = &Start->handler3;

    chain_root->chain_base.addChain(&chain_root->chain_base, &chain_1->chain_base);
    chain_root->chain_base.addChain(&chain_root->chain_base, &chain_2->chain_base);

    chain_root->chain_base.handle(&chain_root->chain_base);
}


void initStarter(struct Starter *Start)
{
    initHandler1(&Start->handler1);
    initHandler2(&Start->handler2);
    initHandler3(&Start->handler3);

    Start->startChain = startChain;

}
