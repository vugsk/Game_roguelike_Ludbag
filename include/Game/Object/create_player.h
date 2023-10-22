
#pragma once
#ifndef _CREATE_PLAYER_H_
#define _CREATE_PLAYER_H_

#include "IPlayer.h"

// #include <CWT/create_win.h>
// #include <RWF/SettingNameTestFile.h>


class CreatePlayer {
private:
    static CreatePlayer* pointerInstance;

    const int MENU_X = 80;
    const int MENU_Y = 20;
    // const int MENU_BEGIN_X = (WIDTH_SCREEN_X/2)-(MENU_X/2);
    // const int MENU_BEGIN_Y = (LENGHT_SCREEN_Y/2)-(MENU_Y/2);;

    CreatePlayer(IPlayer*& player);

    // SettingNameClass SNC;
    // RIniFile *RIF;
    // CreateWin* win;

    int _errorNumber;

    void winCreatePlayer(IPlayer*& player);
    string createName();
    string createClassGenderSpeices(int num);

public:
    CreatePlayer(const CreatePlayer &) = delete;
    CreatePlayer(CreatePlayer &&) = delete;
    CreatePlayer &operator=(const CreatePlayer &) = delete;
    CreatePlayer &operator=(CreatePlayer &&) = delete;
    ~CreatePlayer();

    static CreatePlayer *getInstance(IPlayer *&player);

    int getErrorNumber() { return this->_errorNumber; }

};

#endif
