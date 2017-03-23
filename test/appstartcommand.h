#ifndef APPSTARTCOMMAND_H
#define APPSTARTCOMMAND_H
#include "Patterns/MacroCommand.h"

class AppStartCommand : public MacroCommand
{
public:
    AppStartCommand();
    virtual void initializeMacroCommand();
};

#endif // APPSTARTCOMMAND_H
