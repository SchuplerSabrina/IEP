#-------------------------------------------------
#
# Project created by QtCreator 2017-10-23T16:14:52
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = P1
TEMPLATE = app


SOURCES +=\
        mainwindow.cpp \
    bcm2835_stub.cpp \
    pin.cpp \
    blink.cpp

HEADERS  += mainwindow.h \
    bcm2835.h \
    pin.h

FORMS    += mainwindow.ui
