
#include "system.h"

template <typename T> string type(T type_data) {

    if (TYPE_INT(type_data))
        return "int";
    else if (TYPE_STRING(type_data))
        return "str";
    else if (TYPE_CHAR(type_data))
        return "char";
    else if (TYPE_VECTOR_STRING(type_data))
        return "vector_str";
    else if (TYPE_VECTOR_INT(type_data))
        return "vector_int";
    else
        return "no type data";
}

bool comparingPathWithFile(string name_path, string name_file) {
    int k = 0;
    int num;

    string nameFile;

    FOR_PY(simbol, name_path) {
        if ('/' == simbol) {
            num = k;
        }

        k++;
    }

    for (size_t j = num + 1; j < name_path.size(); j++) {
        nameFile += name_path[j];
    }

    return nameFile == name_file;
}
