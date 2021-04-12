#include "raymainwindow.h"

// constructor
RayMainWindow::RayMainWindow()
{
    m_fps = 60;
    m_width = 800;
    m_height = 450;
    m_title = "RayLibMainWindow";
}

// destructor
RayMainWindow::~RayMainWindow()
{
    CloseWindow();
}

// execute game loop
void RayMainWindow::show()
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
