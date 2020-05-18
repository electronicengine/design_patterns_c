#include "listener1.h"
#include "subject.h"


static void update(struct Observer *Obs)
{
    int state;

    Obs->model->getState(Obs->model, &state);

    printf("Updated listner1! state: %d\n", state);

}


void initListener1(struct Listener1 *Listener, struct Subject *Model)
{

    initObserver(&Listener->observer, Model);

    Listener->observer.update = update;
}
