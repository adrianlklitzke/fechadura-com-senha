QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = SerialPort
TEMPLATE = app

SOURCES += \
    dunumerickeypushbutton.cpp \
    main.cpp \
    mainwindow.cpp \
    numpadlogindialog.cpp \
    Widget.cpp

HEADERS += \
    dunumerickeypushbutton.h \
    mainwindow.h \
    numpadlogindialog.h \
    Widget.h

FORMS += \
    mainwindow.ui \
    numpadlogindialog.ui \
    Widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


QMAKE_CXXFLAGS += -std=gnu++14

DEFINES -= MY_DEBUG
