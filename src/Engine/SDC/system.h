
#pragma once
#ifndef _SYSTEM_H_
#define _SYSTEM_H_

#include <iostream>
#include <list>
#include <random>
#include <typeinfo>
#include <functional>

using namespace std;

#define DEBUG true

typedef vector<int> vector_int;
typedef vector<string> vector_str;

#define FOR(typeData, a, size) for (typeData a = 0; a < size; a++)

#define FOR_INT(a, size) FOR(int, a, size)
#define FOR_INT_ONE(a, size, row_one) FOR_INT(a, size) row_one

#define FOR_SIZE_T(a, size) FOR(size_t, a, size)
#define FOR_SIZE_T_ONE(a, size, row_one) FOR_SIZE_T(a, size) row_one

#define FOR_PY(name, list) for (const auto &name : list)
#define FOR_PY_ONE(name, list, row_one) FOR_PY(name, list) row_one

#define NUMBER(num) (int)num
#define NUMBER_CHAR(ch) atoi(ch)

#define TYPE_INT(typeData) (typeid(typeData) == typeid(int))
#define TYPE_STRING(typeData) (typeid(typeData) == typeid(string))
#define TYPE_VECTOR_STRING(typeData) (typeid(typeData) == typeid(vector_str))
#define TYPE_CHAR(typeData) (typeid(typeData) == typeid(char))
#define TYPE_VECTOR_INT(typeData) (typeid(typeData) == typeid(vector_int))

/**
 * @brief TYPE
 * 
 * @param type_data 
 * @return string 
 * 
 * Type data:
 * 1. str
 * 2. int
 * 3. char
 * 4. vector_str
 * 5. vector_int
 *
 */
template <typename T> string type(T type_data);


bool comparingPathWithFile(string name_path, string name_file);

#endif
