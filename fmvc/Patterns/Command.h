#ifndef COMMAND_H
#define COMMAND_H

#include "../Interface/ICommand.h"
#include "Notifier.h"

class Command :  public Notifier,public ICommand
{
public:
    virtual void excute(INotification *notification);
};

#endif // COMMAND_H
