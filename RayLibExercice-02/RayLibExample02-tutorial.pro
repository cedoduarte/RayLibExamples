QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

SOURCES += \
    main.cpp

HEADERS +=

FORMS +=

LIBS += -LC:/raylib/raylib/projects/VS2019/bin/x64/Release.DLL
LIBS += -lraylib
INCLUDEPATH += C:/raylib/raylib/src
DEPENDPATH += C:/raylib/raylib/src
