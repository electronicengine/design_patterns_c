#include "trigger.h"



static void createEvent(struct Trigger *Trig)
{
    printf("Triggered Event! State: 10 \n");

    Trig->sub->setState(Trig->sub, 10);

}



void initTrigger(struct Trigger *Trig, struct Subject *Sub)
{
    Trig->createEvent = createEvent;
    Trig->sub = Sub;
}
