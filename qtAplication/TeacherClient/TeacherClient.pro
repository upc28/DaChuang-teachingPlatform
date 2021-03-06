#-------------------------------------------------
#
# Project created by QtCreator 2016-09-24T14:25:26
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TeacherClient
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    homeTab.cpp \
    studentTab.cpp \
    manageTab.cpp \
    statusTab.cpp \
    socket.cpp \
    myxml.cpp

HEADERS  += widget.h \
    homeTab.h \
    studentTab.h \
    manageTab.h \
    statusTab.h \
    socket.h \
    myxml.h

FORMS    += widget.ui \
    homeTab.ui \
    studentTab.ui \
    manageTab.ui \
    statusTab.ui
