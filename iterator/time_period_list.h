#ifndef __time_period_list_H
#define __time_period_list_H


#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <sys/time.h>
#include <pthread.h>

#include "time_period.h"


#define MAX_PERIOD 32

struct TimePeriodList
{

    void (*addTimePeriod)(struct TimePeriodList *List, struct TimePeriod *Period);
    struct TimePeriod *(*getNextTimePeriod)(struct TimePeriodList *List);

    struct TimePeriod *periods[MAX_PERIOD];
    int period_index;
    int total_period;
};

void initTimePeriodList(struct TimePeriodList *List);



#endif
