#include "period2.h"


static void doSomeThing(struct TimePeriod *Period)
{
    struct Period2 *period2 = container_of(Period, typeof(*period2), period);
    printf("do period2 !\n");

}

void initPeriod2(struct Period2 *Period2)
{

    initTimePeriod(&Period2->period);

    Period2->period.doSomeThing = doSomeThing;
}


