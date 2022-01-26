#include "raylib.h"

int main(void)
{
    InitWindow(1280, 720, "RescapeRoom | 0.0.1 InDev");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}