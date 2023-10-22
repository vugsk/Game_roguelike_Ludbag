
#include "Game/Object/create_player.h"

CreatePlayer* CreatePlayer::pointerInstance = nullptr;


string CreatePlayer::createName() {

    const int LEN_NAME = 12;

    int result = 0;
    bool error;
    char inputeName[LEN_NAME]= " ";

    // win->clearWin(21, 1, win->getX()-1, win->getY()-1);
    // echo();

    // string textName = RIF->readStr("CreateMenu.textName");
    // string textInputName = RIF->readStr("CreateMenu.textInputName");
    // string errorNameNotInput = RIF->readStr("ErrorInputName.errorNameNotInput");
    // string errorNameNotLenght = RIF->readStr("ErrorInputName.errorNameNotLenght");


    do {
        // win->printStr(40, (win->getY()/2)-3, textName + ' ' + inputeName);
        // win->printStr(40, (win->getY()/2)-2, textInputName);
        // win->scanStr(40, (win->getY()/2)-1, inputeName);

        // FOR_INT(i, LEN_NAME) {
        //     FOR_SIZE_T(j, CODE_KEYS.size()) {
        //         if (inputeName[i] == CODE_KEYS[j].first 
        //             || inputeName[i] == CODE_KEYS[j].second) {

        //             result++;
            
        //         }
        //     }
        // }

        // if (result && result <= 3) {
        //     win->printStr(40, (win->getY()/2)-4, "\t\t");
        //     win->printStr(40, (win->getY()/2)-1, "\t\t");
            
        //     if (result) {
        //         win->printStr(40, (win->getY()/2)-4, errorNameNotInput);
        //     } else if (result <= 3) {
        //         win->printStr(40, (win->getY()/2)-4, errorNameNotLenght);
        //     }

        //     result = 0;
        //     error = true;
        // } else {
        //     error = false;
        // }

        // if (!error) {
        //     noecho();
        //     win->clearWin(21, 1, win->getX()-1, win->getY()-1);
            
        //     #ifdef WIN32
        //         box(win->getWin(), 0, 0);
        //     #endif

        //     return inputeName;
        // }

    } while (true);

}

string CreatePlayer::createClassGenderSpeices(int num) {
    // vector_str vector;

    // if (num == 1) {
    //     vector = RIF->readVectorStr("VectorGenderMF");
    // } else if (num == 2) {
    //     vector = RIF->readVectorStr("VectorSpecies");
    // } else if (num == 3) {
    //     vector = RIF->readVectorStr("VectorClass");
    // }

    // win->clearWin(21, 1, win->getX()-1, win->getY()-1);

    // do {
    //     win->textSelection(vector, 40, (win->getY()/2)-(vector.size()/2));

    //     win->wsOrAdButton(vector.size());

    //     if (win->getChoice() == ENTER) {
    //         win->clearWin(21, 1, win->getX()-1, win->getY()-1);

    //         return vector[win->getHighlight()];
    //     }
    
    // } while(true);
}

void CreatePlayer::winCreatePlayer(IPlayer *&player) {
    // win = new CreateWin(MENU_X, MENU_Y, MENU_BEGIN_X, MENU_BEGIN_Y);

    // RIF = new RIniFile(SNC.getPathFile("Player", false));

    // vector_str textMenuCreatePlayer = RIF->readVectorStr("VectorTextMenuCreatePlayer");

    // do {
    //     win->drawWall(20, 20);

    //     win->textSelection(textMenuCreatePlayer, 5, 
    //         (win->getY()/2)-(textMenuCreatePlayer.size()/2));


    //     win->wsOrAdButton(textMenuCreatePlayer.size());

    //     if (win->getChoice() == ENTER) {
    //         if (win->getHighlight() == 0) {
    //             player->setName(createName());
    //         } else if (win->getHighlight() == 1) {
    //             player->setGender(createClassGenderSpeices(1));
    //         } else if (win->getHighlight() == 2) {
    //             player->setSpecies(createClassGenderSpeices(2));
    //         } else if (win->getHighlight() == 3) {
    //             player->setClass(createClassGenderSpeices(3));
    //         } else {
    //             if (player->getName().empty() 
    //                 || player->getGender().empty() 
    //                 || player->getSpecies().empty() 
    //                 || player->getClass().empty()) {
                    
    //                 win->printStr(3, 3, "Error: no input!");
                
    //             } else {
    //                 break;
    //             }
    //         }
    //     }

    // } while (true);

}



CreatePlayer* CreatePlayer::getInstance(IPlayer*& player) {
    if (!pointerInstance) {
        pointerInstance = new CreatePlayer(player);
    }

    return pointerInstance;
}

CreatePlayer::CreatePlayer(IPlayer*& player) { 
    winCreatePlayer(player); 

    // RWJsonFile *RWJF = new RWJsonFile(SNC.getPathFile("Player"));

    // player->setHp(RWJF->readInt("BasePlayer.hp"));
    // player->setDmg(RWJF->readInt("BasePlayer.dmg"));
    // player->setMP(RWJF->readInt("BasePlayer.mp"));
    // player->setLvl(RWJF->readInt("BasePlayer.lvl"));
    // player->setExp(RWJF->readInt("BasePlayer.exp"));
    // player->setProtection(RWJF->readInt("BasePlayer.protection"));
    // player->setPower(RWJF->readInt("BasePlayer.power"));
    // player->setTitle("No data");
    // player->setStrong(RWJF->readInt("BasePlayer.strong"));

    // delete RWJF;
}

CreatePlayer::~CreatePlayer() { 
    // delete win; 
    // delete RIF; 
}

