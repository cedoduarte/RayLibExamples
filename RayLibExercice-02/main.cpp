#include <raylib.h>
#include <vector>

static const int WIDTH = 900;
static const int HEIGHT = 600;

int main()
{
    float dx = 400;
    float rotation = 0.0f;
    float timer = 0.0f;
    int sides = 0;

    InitWindow(WIDTH, HEIGHT, "Example");
    SetTargetFPS(60);

    // game loop
    while (!WindowShouldClose())
    {
        // update
        rotation += 0.5f;

        std::vector<Vector2> vertices
        {
            { dx + 30, 0 },
            { dx + 0, 100 },
            { dx + 100, 120 },
            { dx + 120, 50 },
            { dx + 80, 20 }
        };

        timer += GetFrameTime();
        if (timer > 0.2f)
        {
            timer = 0.0f;
            sides += 1;
        }

        // drawing
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangle(100, 100, 100, 300, RED);
        DrawRectangleV({ 300, 200 }, { 100, 30 }, BLUE);
        DrawRectangleRec({ 200, 200, 100, 100 }, GREEN);
        DrawRectanglePro({ 200, 200, 100, 100 }, { 50, 50 }, rotation, YELLOW);
        DrawCircle(400, 300, 64, ORANGE);
        DrawTriangle({ 50, 0 }, { 0, 100 }, { 100, 100 }, BROWN);
        DrawRectangleLines(200, 100, 100, 100, BLACK);
        DrawRectangleLinesEx({ 300, 100, 100, 100 }, 10, BLACK);
        DrawTriangleFan(vertices.data(), vertices.size(), BLUE);
        // DrawPolyEx() -> DrawTrianglesFan()
        // DrawPolyExLines() -> DrawLineStrip()
        DrawPoly({ 700, 300 }, sides % 12, 200, 0.0, BLUE);
        EndDrawing();
    }

    // close window
    CloseWindow();
    return 0;
}
