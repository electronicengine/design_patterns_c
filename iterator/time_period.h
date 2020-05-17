#ifndef __time_period_H
#define __time_period_H


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
#include <sys/time.h>


#define container_of(ptr, type, member) \
    ((type *)((char *)(ptr)-(unsigned long)(&((type *)0)->member)))


struct TimePeriod
{

    void (*doSomeThing)(struct TimePeriod *Period);

    int Index;

};

void initTimePeriod(struct TimePeriod *Period);


#endif
