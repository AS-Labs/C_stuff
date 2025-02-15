#include <raylib.h>
#include <raymath.h>

int main(){

    InitWindow(800, 600, "Window test");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(GRAY);
        EndDrawing();
    }
    CloseWindow();
    return 0;

}
