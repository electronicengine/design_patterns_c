#ifndef __period1_H
#define __period1_H


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
#include "time_period.h"




struct Period1
{
    struct TimePeriod period;

};

void initPeriod1(struct Period1 *Period);




#endif
