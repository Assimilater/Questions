#-------------------------------------------------
#
# Project created by QtCreator 2015-05-15T10:18:47
#
#-------------------------------------------------

QT          += core gui
CONFIG      += c++14

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Questions
TEMPLATE = app

SOURCES += main.cpp\
    mainwindow.cpp \
    tablerow.cpp

HEADERS  += mainwindow.hpp \
    tablerow.hpp

FORMS    += mainwindow.ui \
    tablerow.ui
