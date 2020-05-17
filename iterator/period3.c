#include "period3.h"


static void doSomeThing(struct TimePeriod *Period)
{
    struct Period2 *period2 = container_of(Period, typeof(*period2), period);
    printf("do period3 !\n");

}

void initPeriod3(struct Period3 *Period2)
{

    initTimePeriod(&Period2->period);

    Period2->period.doSomeThing = doSomeThing;
}



