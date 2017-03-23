#include "MacroCommand.h"

void MacroCommand::excute(INotification *notification)
{
    int count = subCommands.size();
    for (int i = 0; i < count; i++)
    {
        subCommands.at(i)->excute(notification);
    }
}

void MacroCommand::addSubCommand(ICommand *command)
{
    subCommands.append(command);
}

void MacroCommand::initializeMacroCommand()
{

}
