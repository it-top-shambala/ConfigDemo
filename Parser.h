#ifndef CONFIGDEMO_PARSER_H
#define CONFIGDEMO_PARSER_H

#include <string>

using namespace std;

string Parser(string* str, char delimiter) {
    auto position = str->find(delimiter);
    auto result = str->substr(0, position);
    *str = str->substr(position + 1);

    return result;
}

#endif //CONFIGDEMO_PARSER_H
