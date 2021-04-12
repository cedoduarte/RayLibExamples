#include "raywindow.h"

// constructor
RayWindow::RayWindow()
{
    m_fps = 60;
    m_width = 800;
    m_height = 450;
    m_title = "RayLibMainWindow";
}

// destructor
RayWindow::~RayWindow()
{
    CloseWindow();
}

// execute game loop
void RayWindow::show()
{
    InitWindow(m_width, m_height, m_title.c_str());
    SetTargetFPS(m_fps);
    while (!WindowShouldClose())
    {
        update();
        BeginDrawing();
        draw();
        EndDrawing();
    }
}
