#include "listener2.h"
#include "subject.h"



static void update(struct Observer *Obs)
{
    struct Listener2 *listener = container_of(Obs, typeof(*listener), observer);

    int state;

    Obs->model->getState(Obs->model, &state);

    printf("Updated listner2! state: %d\n", state);

}


void initListener2(struct Listener2 *Listener, struct Subject *Model)
{

    initObserver(&Listener->observer, Model);

    Listener->observer.update = update;
}
