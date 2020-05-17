#include "time_period_list.h"


void addTimePeriod(struct TimePeriodList *List, struct TimePeriod *Period)
{
    List->periods[List->total_period++] = Period;
}



struct TimePeriod *getNextTimePeriod(struct TimePeriodList *List)
{
    List->period_index++;
    if(List->period_index > List->total_period)
        List->period_index = 1;

    return List->periods[List->period_index - 1];
}



void initTimePeriodList(struct TimePeriodList *List)
{
    List->addTimePeriod = addTimePeriod;
    List->getNextTimePeriod = getNextTimePeriod;

    List->period_index = 0;
    List->total_period = 0;
}
