# -------------------------------------------------
# Project created by QtCreator 2010-01-24T21:46:28
# -------------------------------------------------
QT += network
QT -= gui
TARGET = MailTest
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app
SOURCES += main.cpp \
    mailsender.cpp
INCLUDEPATH += ../../libs/raknet-3.7171/
LIBS += ../../libs/raknet-3.7171/libraknet.a
HEADERS += mailsender.h
