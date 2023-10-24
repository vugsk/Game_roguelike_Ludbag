
#include "Game/menu.h"

const int MAIN_MENU_X = 50, MAIN_MENU_Y = 6; 

int main()
{
    setlocale(LC_CTYPE, "");

    initscr();
    Screen mainWin;
    mainWin.keypad(true);
    mainWin.echoOff();
    mainWin.setCurs(0);

    MAIN_X = mainWin.getX();
    MAIN_Y = mainWin.getY();

    //* TITLE
    ParserIniFile PIF;
    const string pathLangConfig = test(LOCALES_FILES[2]);

    string title, version, company;
    PIF.read(pathLangConfig, 
        "StartMenuGame.textTitle", title);
    PIF.read(pathLangConfig, 
        "StartMenuGame.textVersion", version);
    PIF.read(pathLangConfig, 
        "StartMenuGame.textCompany", company);

    vector<string> menu;
    PIF.read(pathLangConfig, "VectorTextMainMenu", menu);

    mainWin.print((MAIN_X/2)-(converterStringInWstring(title).size()/2)-2, 
                  (MAIN_Y/4)-2, title.c_str());
    mainWin.print(MAIN_X-converterStringInWstring(version).size(), 
                  MAIN_Y-1, version.c_str());
    mainWin.print(1, MAIN_Y-1, company.c_str());


    Menu mainMenu(mainWin, MAIN_MENU_X, MAIN_MENU_Y, 
        (mainWin.getX()/2)-(MAIN_MENU_X/2), 
        (mainWin.getY()/2)-(MAIN_MENU_Y/2));
    

    mainMenu.winMenu(menu);

    mainWin.clear();
    mainWin.refresh();
    return 0;
}
