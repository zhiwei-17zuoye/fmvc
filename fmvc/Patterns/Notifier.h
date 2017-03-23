#ifndef NOTIFIER_H
#define NOTIFIER_H

#include <QString>
#include "../Interface/INotifier.h"

class IFacade;
class INotification;

class Notifier : public INotifier
{
public:
    Notifier();

    virtual void sendNotification(const QString &notificationName, void *body);

protected:
    IFacade *m_facade;
};

#endif // NOTIFIER_H
