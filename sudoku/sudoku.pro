#-------------------------------------------------
#
# Project created by QtCreator 2013-05-31T21:17:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = sudoku
TEMPLATE = app


SOURCES += main.cpp\
    jugador.cpp \
    MenuInicial.cpp \
    tablero.cpp

HEADERS  += \
    jugador.h \
    MenuInicial.h \
    tablero.h

FORMS    += \
    MenuInicial.ui \
    tablero.ui

OTHER_FILES +=

RESOURCES += \
    ImgPrincipal.qrc
