#ifndef LEVEL_H_INCLUDED
#define LEVEL_H_INCLUDED

#include <iostream>
#include <fstream>
#include "player.h"
#include "level_0.h"

using namespace std;

class Level {
public:
    Level();
    void init();
    void load(int _levelID);
    void unload();
    bool check(int _levelID);
    string getFileName();
    Level idToLevel(int _levelID);
private:
    int levelID = 0;
    ifstream stream;
    vector<string> fileNames{/*"level_0"*/};
};
#endif
