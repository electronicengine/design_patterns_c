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





struct Subject
{
    void (*order1)(struct Subject *Sub);
    void (*order2)(struct Subject *Sub);

};

void initSubject(struct Subject *Sub);




#endif
