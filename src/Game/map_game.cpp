
#include "include/map_game.h"


Map* Map::pointerInit = nullptr;


void Map::field() {
    // for (size_t i = 1; i < mapField.size() - 1; i++) {
    //     for (size_t j = 1; j < mapField[i].size() - 1; j++) {
    //         mapField[i][j] = ' ';
    //         mvaddch(i, j, ' ');
    //     }
    // }
}

void Map::dungeon() {
    // for (int k = 6; k != mapField.size() - 8; k++) {
    //     for (int n = 20; n != mapField[k].size() - 50; n++) {
    //         mapField[k][n] = ' ';
    //         mvaddch(k, n, ' ');
    //     }
    // }
}

void Map::checkLocation(int location) {

    // FOR_SIZE_T(i, mapField.size()) {
    //     FOR_SIZE_T(j, mapField[i].size()) {
    //         mapField[i][j] = '#';
    //         mvaddch(i, j, '#');
    //     }
    // }

    if (location == 0) {
        field();
    } else if (location == 1) {
        dungeon();
    } else {
        field();
    }

}

Map* Map::getInit() {
    if (!pointerInit) {
        pointerInit = new Map();
    }

    return pointerInit;
}

Map::Map() {
    // mapField.resize(LENGHT_SCREEN_Y);
    // FOR_SIZE_T(i, mapField.size()) {
    //     mapField[i].resize(WIDTH_SCREEN_X);
    // }
}

Map::~Map() {}