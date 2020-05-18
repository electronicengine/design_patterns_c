#ifndef __observer_H
#define __observer_H


#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>

struct Subject;

struct Observer
{
    void (*update)(struct Observer *Obs);

    struct Subject *model;

};

void initObserver(struct Observer *Obs, struct Subject *Model);




#endif
