#include "subject.h"


static void notify(struct Subject *Sub)
{
    for(int i=0; i<Sub->total_observer; i++)
        Sub->observers[i]->update(Sub->observers[i]);
}


static void getState(struct Subject *Sub, int *State)
{
    memcpy(State, &Sub->state, sizeof(int));
}



static void setState(struct Subject *Sub, int State)
{
    memcpy(&Sub->state, &State,  sizeof(int));

    notify(Sub);

}



static void attach(struct Subject *Sub, struct Observer *Obs)
{
    Sub->observers[Sub->total_observer++] = Obs;
}



void initSubject(struct Subject *Sub)
{
    Sub->attach = attach;
    Sub->setState = setState;
    Sub->getState = getState;
    Sub->notify = notify;

    Sub->state = 0;
    Sub->total_observer = 0;

}
