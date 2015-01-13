#ifndef LEVEL_0_H_INCLUDED
#define LEVEL_0_H_INCLUDED
#include "level.h"
#include "player.h"
#include "npc.h"

using namespace std;

class level_0 {
public:
    level_0();
    void start(Player& player);
    sf::Sprite getLayerOne();
    sf::Sprite getLayerTwo();
private:
    sf::Sprite levelSprite;
    sf::Texture levelTex;

    sf::Sprite levelSprite_2;
    sf::Texture levelTex_2;
};
#endif
