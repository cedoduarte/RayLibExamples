# march 6th 2021
# MyGame

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

# RayLib library linking
LIBS += -LC:/raylib/raylib/projects/VS2019/bin/x64/Release.DLL
LIBS += -lraylib

# RayLib library headers
INCLUDEPATH += C:/raylib/raylib/src
DEPENDPATH += C:/raylib/raylib/src

SOURCES += \
    gameapplication.cpp \
    gamewindow.cpp \
    main.cpp \
    raywindow.cpp

HEADERS += \
    gameapplication.h \
    gamewindow.h \
    raywindow.h
