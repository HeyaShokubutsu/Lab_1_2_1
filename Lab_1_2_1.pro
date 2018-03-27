TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    measurement.cpp \
    device.cpp \
    abstract.cpp \
    deviceextended.cpp

HEADERS += \
    measurement.h \
    device.h \
    abstract.h \
    deviceextended.h
