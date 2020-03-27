QT += core
QT -= gui

CONFIG += c++11

TARGET = TestBaseQt
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    testqdatastream.cpp \
    testcase.cpp \
    testreflect.cpp \
    testqthread.cpp \
    testqrunnable.cpp

HEADERS += \
    testcase.h \
    testreflect.h \
    testqthread.h \
    testqrunnable.h
