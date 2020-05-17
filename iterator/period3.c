#include "period3.h"


static void doSomeThing(struct TimePeriod *Period)
{
    struct Period3 *period3 = container_of(Period, typeof(*period3), period);
    printf("do period3 !\n");

}

void initPeriod3(struct Period3 *Period)
{

    initTimePeriod(&Period->period);

    Period2->period.doSomeThing = doSomeThing;
}



