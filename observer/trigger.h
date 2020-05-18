#ifndef __trigger_H
#define __trigger_H


#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include "subject.h"


struct Trigger
{
    void (*createEvent)(struct Trigger *Obs);
    struct Subject *sub;
};

void initTrigger(struct Trigger *Trig, struct Subject *Sub);




#endif
