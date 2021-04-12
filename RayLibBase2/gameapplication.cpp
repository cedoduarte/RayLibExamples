#include "gameapplication.h"

GameApplication *GameApplication::s_globalInstance = nullptr;

void GameApplication::initialize()
{
    s_globalInstance = new GameApplication;
}

void GameApplication::exec()
{
    s_globalInstance->m_window->show();
}

void GameApplication::release()
{
    delete s_globalInstance;
}

GameApplication::GameApplication()
{
    m_window = new GameWindow;
}

GameApplication::~GameApplication()
{
    delete m_window;
}
