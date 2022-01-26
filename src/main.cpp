#include "raylib.h"

int main(void)
{
    InitWindow(1280, 720, "RescapeRoom | 0.0.1 InDev");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 0, 0, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}