#include "gamewindow.h"

// constructor
GameWindow::GameWindow()
{
    setTitle("Game");
    setFPS(60);
    setWidth(600);
    setHeight(600);

    m_boxPositionY = height() / 2 - 40;
    m_scrollSpeed = 4;
}

// destructor
GameWindow::~GameWindow()
{
    // nothing todo here
}

// update items
void GameWindow::update()
{
    m_boxPositionY -= GetMouseWheelMove() * m_scrollSpeed;
}

// draw items
void GameWindow::draw()
{
    ClearBackground(RAYWHITE);
    DrawRectangle(width() / 2 - 40, m_boxPositionY, 80, 80, MAROON);
    DrawText("Use mouse wheel to move the cube up and down!", 10, 10, 20, GRAY);
    DrawText(TextFormat("Box position Y: %03i", m_boxPositionY), 10, 40, 20, LIGHTGRAY);
}
