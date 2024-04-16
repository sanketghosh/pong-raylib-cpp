#include <raylib.h>
#include <iostream>

using namespace std;

int main()
{

    const int window_height = 800;
    const int window_width = 1280;

    InitWindow(window_width, window_height, "raylib [core] example - basic window");
    SetTargetFPS(60);

    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        // ClearBackground(RAYWHITE);
        // DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        DrawCircle(190, 200, 20, GREEN);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}