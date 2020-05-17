#ifndef __period3_H
#define __period3_H


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




struct Period3
{
    struct TimePeriod period;

};

void initPeriod3(struct Period3 *Period);




#endif

