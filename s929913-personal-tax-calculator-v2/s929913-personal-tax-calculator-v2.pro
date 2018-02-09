#-------------------------------------------------
#
# Project created by QtCreator 2018-02-09T19:31:29
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = s929913-personal-tax-calculator-v2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        taxcalculator.cpp \
    taxcalculation.cpp \
    taxinformation.cpp \
    toptax.cpp \
    fortunetax.cpp \
    generaltax.cpp \
    socialtax.cpp \
    sumtaxes.cpp \
    minimumdeduction.cpp \
    worktraveldeduction.cpp \
    laboruniondeduction.cpp \
    bsudeduction.cpp

HEADERS += \
        taxcalculator.h \
    taxinformation.h \
    toptax.h \
    generaltax.h \
    socialtax.h \
    fortunetax.h \
    sumtaxes.h \
    minimumdeduction.h \
    worktraveldeduction.h \
    laboruniondeduction.h \
    bsudeduction.h \
    fortunetax.h \
    taxcalculation.h

FORMS += \
        taxcalculator.ui
