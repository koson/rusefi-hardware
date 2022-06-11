#include "fault.h"

static Fault currentFault = Fault::None;

bool HasFault()
{
    return currentFault != Fault::None;
}

Fault GetCurrentFault()
{
    return currentFault;
}
