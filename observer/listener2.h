#ifndef __listener2_H
#define __listener2_H


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



struct Listener2
{
    struct Observer observer;

};

void initListener2(struct Listener2 *Listener, struct Subject *Model);




#endif
