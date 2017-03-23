#ifndef LOGINMEDIATOR_H
#define LOGINMEDIATOR_H

#include <QObject>
#include "Patterns/Mediator.h"
#include "LoginInfo.h"
#include "LoginResult.h"
#include "LoginForm.h"
class LoginInfo;

class LoginMediator : public QObject,public Mediator
{
    Q_OBJECT
public:
    LoginMediator();

    QList<QString> getListNotificationInterests();

    void handleNotification(INotification *notification);

    // special
public slots:
    void doLogin(LoginInfo *loginInfo);

private:
    QList<QString> m_notificationInterests;
};

#endif // LOGINMEDIATOR_H
