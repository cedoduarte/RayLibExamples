# march 6th 2021
# RayLib base project

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    raymainwindow.cpp

# RayLib library linking
LIBS += -LC:/raylib/raylib/projects/VS2019/bin/x64/Release.DLL
LIBS += -lraylib

# RayLib library headers
INCLUDEPATH += C:/raylib/raylib/src
DEPENDPATH += C:/raylib/raylib/src

HEADERS += \
    mainwindow.h \
    raymainwindow.h
