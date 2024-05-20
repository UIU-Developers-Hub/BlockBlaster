#include <SDL.h>
#include <stdio.h>
#include "/opt/homebrew/Cellar/raylib/5.0/include/raylib.h"

#define WIDTH 800
#define HEIGHT 600
#define SPEED 0.2f;

typedef struct
{
    Vector2 pos;
    Vector2 size;
} Entity;

Entity init_entity(float x, float y, float width, float height)
{
    Entity entity = {
        .pos = {
            .x = x,
            .y = y,
        },

        .size = {.x = width, .y = height}};

    return entity;
}

bool check_collision(Entity e1, Entity e2)
{
   if((e1.pos.x) <= (e2.pos.x + e2.size.x) && 
        (e1.pos.x + e1.size.x) >= e2.pos.x && 
        (e1.pos.y) <= (e2.pos.y + e2.size.y) && 
        ((e1.pos.y + e1.size.y) >= e2.pos.y)) {
        return true;
    }

    return false;
}

int main()
{

    InitWindow(WIDTH, HEIGHT, "Breakout");

    Entity player = init_entity(WIDTH / 2, HEIGHT - (HEIGHT / 10), 100, 20);
    Entity ball = init_entity(WIDTH / 2, HEIGHT / 2, 10, 20);

    while (!WindowShouldClose())
    {

        if (IsKeyDown(KEY_LEFT))
        {
            player.pos.x -= SPEED;
        }

        if (IsKeyDown(KEY_RIGHT))
        {
            player.pos.x += SPEED;
        }

        ball.pos.y += SPEED;

        if (check_collision(player, ball))
        {

            DrawText("Game Over", WIDTH / 2, HEIGHT / 2, 20, RED);

            return 1;
        }

        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawRectangleV(player.pos, player.size, BLACK);
        DrawRectangleV(ball.pos, ball.size, BLACK);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}