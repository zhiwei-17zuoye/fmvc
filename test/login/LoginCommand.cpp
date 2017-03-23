#include "LoginCommand.h"
#include "Patterns/Facade.h"
#include "LoginProxy.h"
#include "LoginResult.h"
#include "LoginMediator.h"
#include "Interface/INotification.h"

LoginCommand::LoginCommand()
{
}

void LoginCommand::excute(INotification *notification)
{
    Facade *facade = Facade::getInstance();
    facade->registerMediator(new LoginMediator());
    facade->registerProxy(new LoginProxy());
    sendNotification("login_request",nullptr);
}
