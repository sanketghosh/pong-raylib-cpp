#include <raylib.h>
#include <iostream>

using namespace std;

// main function
int main()
{
    const int screen_height = 800;
    const int screen_width = 1600;

    const int paddle_height = 180;
    const int paddle_width = 30;

    InitWindow(screen_width, screen_height, "Raylib example basic window");
    SetTargetFPS(60);

    while (WindowShouldClose() == false)
    {
        BeginDrawing();

        DrawCircle(screen_width / 2, screen_height / 2, 20, GREEN);

        DrawRectangle(10, screen_height / 2 - paddle_height / 2, 25, 160, WHITE);
        DrawRectangle(screen_width - 35, screen_height / 2 - paddle_height / 2, 25, 160, WHITE);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}