QT -= core
QT -= gui

CONFIG += c++14

TARGET = TridiagonalMatrixAlgorithm
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    TridiagonalMatrixAlgorithm.cpp

LIBS += -larmadillo -LC:\Development\armadillo\bin
DEPENDPATH += C:\Development\armadillo\include
INCLUDEPATH += C:\Development\armadillo\include

HEADERS += \
    TridiagonalMatrixAlgorithm.h
