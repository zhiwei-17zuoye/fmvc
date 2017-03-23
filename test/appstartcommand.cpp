#include "appstartcommand.h"
#include "Patterns/Facade.h"
#include "ppt/pptcommand.h"

#include <login/LoginCommand.h>

AppStartCommand::AppStartCommand()
{
    initializeMacroCommand();
}

void AppStartCommand::initializeMacroCommand()
{
    addSubCommand(new PPTCommand());
    addSubCommand(new LoginCommand());
}
