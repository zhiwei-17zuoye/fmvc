#include <QApplication>
#include "ApplicationFacade.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    ApplicationFacade *af = ApplicationFacade::getInstance();
    af->sendNotification("app_start",nullptr);

    return app.exec();
}
