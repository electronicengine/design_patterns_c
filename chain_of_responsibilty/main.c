#include <stdio.h>
#include "starter.h"



int main()
{
    struct Starter starter;

    initStarter(&starter);

    starter.createChain(&starter);

    starter.startChain(&starter);

    return 0;
}
