#include <raylib.h>
#include "grid.h"
#include "colors.h"

int main()
{
    InitWindow(300, 600, "Custom Tetris");
    SetTargetFPS(60);

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(darkBlue);

        EndDrawing();
    }

    CloseWindow();
    return 0;
}