#include "period3.h"


static void doSomeThing(struct TimePeriod *Period)
{
    printf("do period3 !\n");

}

void initPeriod3(struct Period3 *Period2)
{

    initTimePeriod(&Period2->period);

    Period2->period.doSomeThing = doSomeThing;
}



