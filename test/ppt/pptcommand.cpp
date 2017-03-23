#include "pptcommand.h"

#include <QApplication>
#include <QDialog>
#include <QMessageBox>

PPTCommand::PPTCommand()
{

}

void PPTCommand::excute(INotification *notification)
{
    QMessageBox::aboutQt(QApplication::activeWindow(),"about qt!");
}
