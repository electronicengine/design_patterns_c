#ifndef __subject_H
#define __subject_H


#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include "observer.h"

#define MAX_OBSERVERS   12



struct Subject
{

    void (*notify)(struct Subject *Sub);
    void (*getState)(struct Subject *Sub, int *State);
    void (*setState)(struct Subject *Sub, int State);
    void (*attach)(struct Subject *Sub, struct Observer *Obs);

    struct Observer *observers[MAX_OBSERVERS];
    int total_observer;

    int state;

};

void initSubject(struct Subject *Sub);




#endif
