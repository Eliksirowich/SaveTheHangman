#include "hangman_gameplay.h"

#include "button.hpp"

#include<raylib.h>

#include<iostream>

using namespace std;


hangman_gameplay::hangman_gameplay()
{
    typeOfHangmanTheme=1;
}

void hangman_gameplay::InitHangmanGameplay()
{
    InitWindow(1200,1200,"Hangman");

    white={230, 230, 230, 255};

    black={30, 30, 30, 255};

    SetWindowTitle(GetWorkingDirectory());
    


}

void hangman_gameplay::Hangman_Draw()
{
    

    if (typeOfHangmanTheme==1)
    {   
        ClearBackground(white);

        BeginBlendMode(BLEND_ALPHA);

        ButtonThemeHangman.Draw();

        EndBlendMode();
        
    }
    else
    {
        ClearBackground(black);

        BeginBlendMode(BLEND_ALPHA);

        ButtonThemeHangman.Draw();

        EndBlendMode();
    }
    
    
}

void hangman_gameplay::Hangman_Update()
{
    mousePosition=GetMousePosition();

    mousePressed= IsMouseButtonPressed(MOUSE_BUTTON_LEFT);

    if (!isInitializedTexture)
    {
        ButtonThemeHangman.Init("Graphics/sun.png", {1080.0f, 20.0f}, 0.08f);

        isInitializedTexture=true;
    }

    if (ButtonThemeHangman.isPressed(mousePosition, mousePressed))
    {
       if (typeOfHangmanTheme==1)
       {
         ButtonThemeHangman.Init("Graphics/moon.png", {1080.0f, 20.0f}, 0.08f);

         typeOfHangmanTheme=0;
       }
       else
       {
         ButtonThemeHangman.Init("Graphics/sun.png", {1080.0f, 20.0f}, 0.08f);
         typeOfHangmanTheme=1;
       }
       
    }
    

    
    
}

