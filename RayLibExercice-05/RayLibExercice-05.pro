TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp

LIBS += -LC:/raylib/raylib/projects/VS2019/bin/x64/Release.DLL
LIBS += -lraylib
INCLUDEPATH += C:/raylib/raylib/src
DEPENDPATH += C:/raylib/raylib/src
