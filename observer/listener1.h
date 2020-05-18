#ifndef __listener1_H
#define __listener1_H


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


struct Listener1
{
    struct Observer observer;

};

void initListener1(struct Listener1 *Listener, struct Subject *Model);




#endif
