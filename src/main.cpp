
#include <ConverterTyptData.h>
#include <MainWindow.h>
#include <ParserIniFile.h>
#include <string>

#include "Engine/system.h"

int main() {
    setlocale(LC_CTYPE, "");
    
    ParserIniFile PIF;
    const string pathLangConfig = test("Interface.ini");
    
    
    initscr();
    Screen mainWin;

    MAIN_X = mainWin.getX();
    MAIN_Y = mainWin.getY();

    mainWin.keypad(true);
    mainWin.echoOff();
    mainWin.setCurs(0);


    //* TITLE
    string title, version, company;

    PIF.read(pathLangConfig, "StartMenuGame.textTitle", title);
    PIF.read(pathLangConfig, "StartMenuGame.textVersion", version);
    PIF.read(pathLangConfig, "StartMenuGame.textCompany", company);

    mainWin.print((MAIN_X/2)-(converterStringInWstring(title).size()/2)-2, (MAIN_Y/4)-2, title.c_str());
    mainWin.print(MAIN_X-converterStringInWstring(version).size(), MAIN_Y-1, version.c_str());
    mainWin.print(1, MAIN_Y-1, company.c_str());
    

    //* MAIN MENU
    
    vector<string> menu;
    PIF.read(pathLangConfig, "VectorTextMainMenu", menu);
    
    const int menu_x = 45, menu_y = 7;
    Screen* menuWin = mainWin.createWindow(menu_x, menu_y, (MAIN_X/2)-(menu_x/2), (MAIN_Y/2)-(menu_y/2));
    menuWin->box(0, 0);
    menuWin->keypad(true);

    do {
        
        menuWin->textSelection(menu, (menu_x/2)-5, (menu_y/2)-(menu.size()/2));
        menuWin->wsOrAdButton(menu.size());

        if (menuWin->getChoice() == ENTER) {
            break;
        }

    } while(true);


    return 0;
}

