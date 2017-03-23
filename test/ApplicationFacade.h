#ifndef APPLICATIONFACADE_H
#define APPLICATIONFACADE_H

#include "Patterns/Facade.h"

#include <QMutex>
#include <QReadWriteLock>

class ApplicationFacade : public Facade
{
public:
    static ApplicationFacade * getInstance();
protected:
    virtual void initializeCommand();
private:
    ApplicationFacade();
    ApplicationFacade(const ApplicationFacade &);
    ApplicationFacade & operator=(const ApplicationFacade &);

    static ApplicationFacade *instance;
};

#endif // APPLICATIONFACADE_H
