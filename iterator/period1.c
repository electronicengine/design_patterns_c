#include "period1.h"


static void doSomeThing(struct TimePeriod *Period)
{
    struct Period1 *period1 = container_of(Period, typeof(*period1), period);
    printf("do period1 !\n");

}

void initPeriod1(struct Period1 *Period1)
{

    initTimePeriod(&Period1->period);

    Period1->period.doSomeThing = doSomeThing;

}



