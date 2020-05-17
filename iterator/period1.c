#include "period1.h"


static void doSomeThing(struct TimePeriod *Period)
{
    printf("do period1 !\n");

}

void initPeriod1(struct Period1 *Period1)
{

    initTimePeriod(&Period1->period);

    Period1->period.doSomeThing = doSomeThing;

}



