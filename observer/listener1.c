#include "listener1.h"
#include "subject.h"


static void update(struct Observer *Obs)
{
    struct Listener1 *listener = container_of(Obs, typeof(*listener), observer);

    int state;

    Obs->model->getState(Obs->model, &state);

    printf("Updated listner1! state: %d\n", state);

}


void initListener1(struct Listener1 *Listener, struct Subject *Model)
{

    initObserver(&Listener->observer, Model);

    Listener->observer.update = update;
}
