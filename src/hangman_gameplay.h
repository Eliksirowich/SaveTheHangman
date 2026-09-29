#pragma once

#include<raylib.h>

#include<iostream>

#include "button.hpp"

class hangman_gameplay
{
    public:

    button ButtonThemeHangman;

    Color white;

    Color black;

    Vector2 mousePosition;

    int typeOfHangmanTheme;

    bool isInitializedTexture = false;

    bool mousePressed;

    Image ImgButtonThemeHangman;

    hangman_gameplay();

    void InitHangmanGameplay();

    void Hangman_Draw();

    void Hangman_Update();

};