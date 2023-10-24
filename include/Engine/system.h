
#pragma once

#include <string>
#include <vector>

#define DEBUG true
#define SYS_CONFIG "Setting_game"

typedef const char* string_c;

typedef       std::pair<std::pair<int, int>, std::string> stringxy;
typedef const stringxy                                    stringxy_c;

typedef       std::vector<stringxy> vstringxy;
typedef const vstringxy             vstringxy_c;

static const std::vector<string_c> LOCALES_FILES {
    "Build.ini",
    "Error.ini",
    "Interface.ini", 
    "Mob.ini", 
    "Player.ini", 
    "Subject.ini"
};

static int MAIN_X, MAIN_Y;

std::string test(string_c name_config); 

// template <typename T> string type(T type_data);
// bool comparingPathWithFile(string name_path, string name_file);
