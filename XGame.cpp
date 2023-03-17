#include "raylib.h"
int main()
{
    int width = 1080;
    int height = 920;
    InitWindow(width,height,"Test");

    while (!WindowShouldClose())
    {
   
    BeginDrawing();
    ClearBackground(RED);
    DrawCircle(500,500,20,BLUE);
    EndDrawing();
    }
}