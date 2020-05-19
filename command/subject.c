#include "subject.h"

void order1(struct Subject *Sub)
{
    printf("Order1\n");

}



void order2(struct Subject *Sub)
{
    printf("Order2\n");
}



void initSubject(struct Subject *Sub)
{
    Sub->order1 = order1;
    Sub->order2 = order2;

}
