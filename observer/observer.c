#include "observer.h"
#include "subject.h"



void initObserver(struct Observer *Obs, struct Subject *Model)
{
    Obs->model = Model;
}
