#include <raylib.h>
#include <raymath.h>


int main(void) {
    const int WindowWidth = 800;
    const int WindowHeight = 600;

    InitWindow(WindowWidth, WindowHeight, "Shit window test");


    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(BLUE);
        DrawText("Shit text here, \n SNAAAAKE", 190, 200,20, RAYWHITE);

        EndDrawing();
    }

    CloseWindow();
    return 0;

}



//int main(){
//
//    Vector2 p = {100, 100};
//    //Vector2 v = {300, 300};
//    InitWindow(800, 600, "Window test");
//    SetTargetFPS(60);
//    while (!WindowShouldClose()) {
//        //float dt = GetFrameTime();
//        BeginDrawing();
//        ClearBackground(GetColor(0x181818FF));
//        //v -= p/2;
//        //p += v * dt;
//        //ClearBackground(GRAY);
//        DrawCircleV(p, 69, RED);
//        EndDrawing();
//    }
//    CloseWindow();
//    return 0;
//
//}

