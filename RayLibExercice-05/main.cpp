#include <raylib.h>

int main()
{
    // initialization
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "example");
    int boxPositionY = screenHeight / 2 - 40;
    int scrollSpeed = 4; // scrolling speed in pixels
    SetTargetFPS(60); // the game runs at 60 fps

    // main game loop
    while (!WindowShouldClose()) // detects window close button or esc key
    {
        // update
        boxPositionY -= GetMouseWheelMove() * scrollSpeed;

        // draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangle(screenWidth / 2 - 40, boxPositionY, 80, 80, MAROON);
        DrawText("Use mouse wheel to move the cube up and down!", 10, 10, 20, GRAY);
        DrawText(TextFormat("Box position Y: %03i", boxPositionY), 10, 40, 20, LIGHTGRAY);
        EndDrawing();
    }

    // close window
    CloseWindow();

    return 0;
}
