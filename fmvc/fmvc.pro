#-------------------------------------------------
#
# Project created by QtCreator 2017-03-22T12:06:58
#
#-------------------------------------------------

QT       -= gui

TARGET = fmvc
TEMPLATE = lib
CONFIG   += staticlib
DEFINES += FMVC_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Core/Controller.cpp \
    Core/Model.cpp \
    Core/View.cpp \
    Patterns/Command.cpp \
    Patterns/Facade.cpp \
    Patterns/Mediator.cpp \
    Patterns/Notification.cpp \
    Patterns/Notifier.cpp \
    Patterns/Proxy.cpp \
    Patterns/UpdateData.cpp \
    Patterns/MacroCommand.cpp

HEADERS +=\
        fmvc_global.h \
    Core/Controller.h \
    Core/Model.h \
    Core/View.h \
    Interface/ICommand.h \
    Interface/IController.h \
    Interface/IFacade.h \
    Interface/IMediator.h \
    Interface/IModel.h \
    Interface/INotification.h \
    Interface/INotifier.h \
    Interface/IObserver.h \
    Interface/IProxy.h \
    Interface/IUpdateData.h \
    Interface/IView.h \
    Interface/IViewComponent.h \
    Patterns/Command.h \
    Patterns/Facade.h \
    Patterns/Mediator.h \
    Patterns/Notification.h \
    Patterns/Notifier.h \
    Patterns/Proxy.h \
    Patterns/UpdateData.h \
    Patterns/MacroCommand.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
