#include "ApplicationFacade.h"
#include "appstartcommand.h"

#include <login/LoginCommand.h>
#include <login/LoginMediator.h>
#include <login/LoginProxy.h>

ApplicationFacade * ApplicationFacade::instance = 0;

ApplicationFacade::ApplicationFacade() : Facade()
{
}

ApplicationFacade *ApplicationFacade::getInstance()
{
    if(instance==NULL){
        instance = new ApplicationFacade;
        instance->initializeCommand();
    }

    return instance;
}

void ApplicationFacade::initializeCommand()
{
    registerCommand("app_start", new AppStartCommand());
}
