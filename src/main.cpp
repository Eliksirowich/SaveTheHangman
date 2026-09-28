#if defined(_WIN32) && defined(NDEBUG)
    #pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#endif

#include<raylib.h>

#include<iostream>

#include<random>

#include "hangman_gameplay.h"

#include "hangman_gameplay.cpp"

using namespace std;

int main()
{
    hangman_gameplay Game_Hangman;

    Game_Hangman.InitHangmanGameplay();
    
    SetTargetFPS(60);

    while(WindowShouldClose() == false)
    {
        BeginDrawing();


        EndDrawing();
    }

    CloseWindow();

    return 0;
}

