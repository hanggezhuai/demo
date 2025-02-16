// filepath: /workspaces/demo/装箱智多星/src/装箱智多星.pro
QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 装箱智多星
TEMPLATE = app

SOURCES += main.cpp \
    mainwindow.cpp \
    inputhandler.cpp \
    outputhandler.cpp \
    calculation.cpp \
    visualization.cpp

HEADERS += mainwindow.h \
    inputhandler.h \
    outputhandler.h \
    calculation.h \
    visualization.h

FORMS += mainwindow.ui