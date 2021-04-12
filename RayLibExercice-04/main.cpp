#include <raylib.h>

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "example");

    Vector2 ballPosition
    {
        -100.0f,
        -100.0f
    };
    Color ballColor = DARKBLUE;
    SetTargetFPS(60);

    // main game loop
    while (!WindowShouldClose())
    {
        // update
        ballPosition = GetMousePosition();

        if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            ballColor = MAROON;
        }
        else if (IsMouseButtonPressed(MOUSE_MIDDLE_BUTTON))
        {
            ballColor = LIME;
        }
        else if (IsMouseButtonPressed(MOUSE_RIGHT_BUTTON))
        {
            ballColor = DARKBLUE;
        }

        // draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircleV(ballPosition, 40, ballColor);
        DrawText("move ball whit mouse and click mouse button to change color", 10, 10, 20, DARKGRAY);
        EndDrawing();
    }

    // close window
    CloseWindow();
    return 0;
}
