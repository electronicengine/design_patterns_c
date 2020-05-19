#include <stdio.h>
#include "client.h"


int main()
{

    struct Client client;

    initClient(&client);

    client.giveOrder(&client);

    return 0;

}
