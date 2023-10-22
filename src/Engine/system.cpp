
#include "Engine/system.h"

#include <ParserJsonFile.h>

string test(string name_config) {
    ParserJsonFile PJF;
    
    vector<string> list;
    string lang_menu, lang_config;


    PJF.read(SYS_CONFIG, "default", lang_menu);
    PJF.read(SYS_CONFIG, "config_lang", lang_config);
    PJF.read(lang_config, "list_config", list);
    
    for (const auto& t: list) {
        if (t == name_config) lang_menu += "/" + t;
    }

    return lang_menu;
}

// template <typename T> string type(T type_data) {

//     if (TYPE_INT(type_data))
//         return "int";
//     else if (TYPE_STRING(type_data))
//         return "str";
//     else if (TYPE_CHAR(type_data))
//         return "char";
//     else if (TYPE_VECTOR_STRING(type_data))
//         return "vector_str";
//     else if (TYPE_VECTOR_INT(type_data))
//         return "vector_int";
//     else
//         return "no type data";
// }

// bool comparingPathWithFile(string name_path, string name_file) {
//     int k = 0;
//     int num;

//     string nameFile;

//     FOR_PY(simbol, name_path) {
//         if ('/' == simbol) {
//             num = k;
//         }

//         k++;
//     }

//     for (size_t j = num + 1; j < name_path.size(); j++) {
//         nameFile += name_path[j];
//     }

//     return nameFile == name_file;
// }
