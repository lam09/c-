QT += core
QT -= gui

CONFIG += c++11

TARGET = testQt
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    nhanvat.cpp \
    vukhi.cpp

HEADERS += \
    nhanvat.h \
    vukhi.h
