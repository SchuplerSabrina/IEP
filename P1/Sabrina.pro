#-------------------------------------------------
#
# Project created by QtCreator 2017-11-06T16:00:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sabrina
TEMPLATE = app


SOURCES +=\
    pwm.cpp \
    main.cpp \
    bcm2835_stub.cpp

HEADERS  += \
    bcm2835.h \
    pwm.h
