// keyboard input example

#include <raylib.h>

int main()
{
    // initialization
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "example");
    Vector2 ballPosition
    {
        screenWidth / 2.0f,
        screenHeight / 2.0f
    };
    SetTargetFPS(60); // set our game to run at 60 frames per second

    // main game loop
    while (!WindowShouldClose())
    {
        // detect window close button or esc key
        // update
        if (IsKeyDown(KEY_RIGHT))
        {
            ballPosition.x += 2.0f;
        }
        if (IsKeyDown(KEY_LEFT))
        {
            ballPosition.x -= 2.0f;
        }
        if (IsKeyDown(KEY_UP))
        {
            ballPosition.y -= 2.0f;
        }
        if (IsKeyDown(KEY_DOWN))
        {
            ballPosition.y += 2.0f;
        }

        // draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("move the ball with arrow keys", 10, 10, 20, DARKGRAY);
        DrawCircleV(ballPosition, 50, MAROON);
        EndDrawing();
    }

    // close window
    CloseWindow();
    return 0;
}
