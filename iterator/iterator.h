#ifndef __iterator_H
#define __iterator_H


#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <pthread.h>

#include "period1.h"
#include "period2.h"
#include "period3.h"
#include "time_period_list.h"






struct Iterator
{

    struct TimePeriodList time_period_list;
    struct Period1 period1;
    struct Period2 period2;
    struct Period3 period3;

    void (*iterateTime)(struct Iterator *Itr);

};

void initIterator(struct Iterator *Itr);





#endif
