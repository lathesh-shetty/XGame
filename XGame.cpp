#include "raylib.h"
int main()
{
    //window initialisation
    int width = 800;
    int height = 450;
    InitWindow(width,height,"XGame");

    //Circle coordinates
    int circel_x = width/2;
    int cirlce_y = height/2;
    int circel_rad = 25;

    SetTargetFPS(60);

    //Axe coordinates
    int axe_x = 450;
    int axe_y = 70;
    int axe_l = 50;
    int axe_w = 50;

    int direction = 10;

    while (!WindowShouldClose())
    {
   
    BeginDrawing();
    ClearBackground(WHITE);
    axe_y += direction;

    
    DrawCircle(circel_x, cirlce_y, circel_rad, BLACK);
    DrawRectangle(axe_x, axe_y, axe_l, axe_w, RED);
    

    if(axe_y > height-axe_l|| axe_y < 0)
    {
        direction = -direction;
    }
    
    if (IsKeyDown(KEY_D) && circel_x < width-circel_rad)
    {
        circel_x++;
    }
    if (IsKeyDown(KEY_A) && circel_x > 0+circel_rad)
    {
        circel_x--;
    }
    EndDrawing();

  

    }
}