
#include "Game/menu.h"
#include "Engine/system.h"

void Menu::printText(stringxy_c textСoordinatesSystem)
{ 
    menu->print(
        textСoordinatesSystem.first.first, 
        textСoordinatesSystem.first.second, 
        textСoordinatesSystem.second.c_str()
    );
}

void Menu::printText(vstringxy_c vecKeyСoordinatesSystem) 
{
    for (int i = 0; vecKeyСoordinatesSystem.size(); i++)
    {
        printText(vecKeyСoordinatesSystem[i]);
    }
}

void Menu::headerMenu(const string text)
{
    stringxy_c _text = {
        {(this->x/2)-(text.size()/2), 0},
        text
    };

    printText(_text);
    menu->getChar();
}

void Menu::winMenu(const vector<string> vecMenu)
{
    do {
        menu->textSelection(vecMenu, (x/2)-5, (y/2)-(vecMenu.size()/2));
        menu->wsOrAdButton(vecMenu.size());

        if (menu->getChoice() == ENTER)
        {
            break;
        }

    } while(true);
}

void Menu::close() 
{ 
    menu->clear();
    menu->refresh();
    menu->close();
}

Menu::Menu(Screen win, int_c x, int_c y, int_c width, int_c height)
    : menu(win.createWindow(x, y, width, height)), x(x), y(y)
{
    menu->box(0, 0);
    menu->keypad(true);
}

Menu::~Menu()
{
    close();
}
