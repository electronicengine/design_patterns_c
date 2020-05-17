#include "period2.h"


static void doSomeThing(struct TimePeriod *Period)
{
    printf("do period2 !\n");

}

void initPeriod2(struct Period2 *Period2)
{

    initTimePeriod(&Period2->period);

    Period2->period.doSomeThing = doSomeThing;
}


