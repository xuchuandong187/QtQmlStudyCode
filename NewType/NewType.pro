#-------------------------------------------------
#
# Project created by QtCreator 2016-03-02T09:05:40
#
#-------------------------------------------------

QT       += core gui
QT += qml quick
QT += qml
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = NewType
TEMPLATE = app


SOURCES += main.cpp\
        painteditem.cpp

HEADERS  += painteditem.h

FORMS    += painteditem.ui

DISTFILES += \
    main.qml

RESOURCES += \
    qml.qrc
