#include "level_0.h"

// Can walk on layer 1, cannot walk on layer 2

level_0::level_0() {}

void level_0::start(Player& player)
{
    string fileTexture = "resources/level_0_walk.png";
    string fileTexture2 = "resources/level_0_nowalk.png";
    cout << "Level 0 Initialized!\n";
    // Everything that happens in the level will be coded here.

    if (!levelTex.loadFromFile(fileTexture))
        cout << "Error loading file: " << fileTexture << '\n';
    else
        levelSprite.setTexture(levelTex);
    if (!levelTex_2.loadFromFile(fileTexture2))
        cout << "Error loading file: " << fileTexture2 << '\n';
    else
        levelSprite_2.setTexture(levelTex_2);

    player.setPosition(sf::Vector2f(45, 40));
}
sf::Sprite level_0::getLayerOne()
{
    return levelSprite;
}
sf::Sprite level_0::getLayerTwo()
{
    return levelSprite_2;
}
