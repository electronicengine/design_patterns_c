#include <stdio.h>
#include "subject.h"
#include "listener1.h"
#include "listener2.h"
#include "trigger.h"


int main()
{
    struct Subject subject;
    struct Listener1 listener1;
    struct Listener2 listener2;
    struct Trigger trigger;


    initSubject(&subject);
    initListener1(&listener1, &subject);
    initListener2(&listener2, &subject);
    initTrigger(&trigger, &subject);


    subject.attach(&subject, &listener1.observer);
    subject.attach(&subject, &listener2.observer);


    trigger.createEvent(&trigger);


    return 0;
}
