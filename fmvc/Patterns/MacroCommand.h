#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H
#include "../Interface/ICommand.h"
#include "../Interface/IObserver.h"
#include "Notifier.h"

#include <QList>

class MacroCommand: public Notifier,public ICommand
{
public:
    virtual void excute(INotification *notification);
protected:
    void addSubCommand(ICommand *command);
    virtual void initializeMacroCommand();
private:
    QList<ICommand *> subCommands;
};

#endif // MACROCOMMAND_H
