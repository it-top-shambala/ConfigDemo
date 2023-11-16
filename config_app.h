#ifndef CONFIGDEMO_CONFIG_APP_H
#define CONFIGDEMO_CONFIG_APP_H

#include <fstream>
#include <string>
#include <vector>

#include "Parser.h"

using namespace std;

vector<string> GetConfig(string path = "config.cfg") {
    vector<string> result;

    ifstream file;
    file.open(path);

    string str;
    while (getline(file, str)) {
        result.push_back(str);
    }

    return result;
}

string FindValue(vector<string> config, string key) {
    char delimiter = '=';
    for (string item : config) {
        string k = Parser(&item, delimiter);
        string v = item;

        if (k == key) {
            return v;
        }
    }

    return "";
}

#endif //CONFIGDEMO_CONFIG_APP_H
