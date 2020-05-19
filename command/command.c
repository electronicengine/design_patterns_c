#include "command.h"



void initCommand(struct Command *Comm)
{
    initSubject(&Comm->subject);
}
