#include "LoginMediator.h"
#include "Interface/INotification.h"
#include "Interface/IFacade.h"
#include "LoginProxy.h"

LoginMediator::LoginMediator()
{
    MEDIATOR_NAME = "LoginMediator";

    m_notificationInterests.append("login_success");
    m_notificationInterests.append("login_error");
    m_notificationInterests.append("login_request");
}

QList<QString> LoginMediator::getListNotificationInterests()
{
    return m_notificationInterests;
}

void LoginMediator::handleNotification(INotification *notification)
{
    if(notification->getNotificationName()=="login_request"){
        Dialog *dialog = new Dialog();
        connect(dialog,&Dialog::login,this,&LoginMediator::doLogin);
        dialog->show();
        registerViewComponent(dialog);
    }
    else if (notification->getNotificationName() == "login_success")
    {
        m_viewComponent->update((IUpdateData *)notification->getBody());
    }
}

void LoginMediator::doLogin(LoginInfo *loginInfo)
{
    LoginProxy *loginProxy = (LoginProxy *)m_facade->retrieveProxy("LoginProxy");
    loginProxy->checkLogin(loginInfo);
}
