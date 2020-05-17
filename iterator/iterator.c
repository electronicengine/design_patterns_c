#include "iterator.h"

static void iterateTime(struct Iterator *Itr)
{

    struct TimePeriod *period = Itr->time_period_list.getNextTimePeriod(&Itr->time_period_list);

    period->doSomeThing(period);

}


void initIterator(struct Iterator *Itr)
{
    Itr->iterateTime = iterateTime;

    initPeriod1(&Itr->period1);
    initPeriod2(&Itr->period2);
    initPeriod3(&Itr->period3);

    initTimePeriodList(&Itr->time_period_list);

    Itr->time_period_list.addTimePeriod(&Itr->time_period_list, &Itr->period1.period);
    Itr->time_period_list.addTimePeriod(&Itr->time_period_list, &Itr->period2.period);
    Itr->time_period_list.addTimePeriod(&Itr->time_period_list, &Itr->period3.period);


}
