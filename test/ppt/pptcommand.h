#ifndef PPTCOMMAND_H
#define PPTCOMMAND_H

#include "Patterns/Command.h"
class PPTCommand : public Command
{
public:
    PPTCommand();

    void excute(INotification *notification);
};

#endif // PPTCOMMAND_H
