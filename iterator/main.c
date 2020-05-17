#include <stdio.h>
#include "iterator.h"

int main()
{

    struct Iterator iterator;

    initIterator(&iterator);

    for(int i=0; i<3; i++)
        iterator.iterateTime(&iterator);


    return 0;
}
