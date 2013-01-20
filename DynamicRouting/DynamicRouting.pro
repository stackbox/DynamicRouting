#-------------------------------------------------
#
# Project created by QtCreator 2013-01-19T15:50:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DynamicRouting
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    routerflow.cpp \
    routertable.cpp \
    router.cpp \
    showtable.cpp \
    showflow.cpp

HEADERS  += mainwindow.h \
    routerflow.h \
    routertable.h \
    router.h \
    showtable.h \
    showflow.h

FORMS    += mainwindow.ui \
    showtable.ui \
    showflow.ui

RESOURCES += \
    background.qrc
