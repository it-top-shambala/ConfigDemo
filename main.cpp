#include <iostream>
#include <string>
#include <vector>

#include "config_app.h"

using namespace std;

int main() {
    vector<string> config = GetConfig("D:\\Programming\\ConfigDemo\\config.cfg");
    for (string item : config) {
        cout << item << endl;
    }
    string input = FindValue(config, "input_path");
    if (input.empty()) {
        cout << "Bad key";
    } else {
        cout << input << endl;
    }

    string bad = FindValue(config, "main");
    if (bad.empty()) {
        cout << "Bad key";
    } else {
        cout << bad << endl;
    }

    return 0;
}
