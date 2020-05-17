#ifndef __period2_H
#define __period2_H


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




struct Period2
{
    struct TimePeriod period;

};

void initPeriod2(struct Period2 *Period);




#endif

