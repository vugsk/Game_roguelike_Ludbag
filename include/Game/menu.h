
#pragma once

#include "Engine/system.h"
#include <ParserIniFile.h>
#include <MainWindow.h>

class Menu {
public:
    /**
     * @brief Конструктор Menu
     * 
     * @param win
     * @param x 
     * @param y 
     * @param width - расположение по x
     * @param height - расположение по y
     */
    Menu(
        Screen win, 
        const int x,     const int y, 
        const int width, const int height
    );

    ~Menu();

    void printText(stringxy_c textСoordinatesSystem);
    void printText(vstringxy_c vecKeyСoordinatesSystem);
    void headerMenu(const string text);
    void winMenu(const vector<string> vecMenu);
    void close();

private:
    Screen* menu;
    ParserIniFile PIF;

    int x, y;


};

