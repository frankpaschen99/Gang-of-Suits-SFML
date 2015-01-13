#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Graphics/View.hpp>
#include <SFML/Graphics.hpp>

using namespace std;

class Player {
public:
    Player();
    sf::Sprite getSprite();
    void setTexture(string fileLocation);
    void setTexture(string fileLocation, sf::Vector2f position);
    void setPosition(sf::Vector2f _position);
    void setSprite(sf::Sprite _sprite);
    void freeze();
    void move();
private:
    sf::Sprite sprite;
    sf::Texture texture;
    bool isFrozen = false;
};

#endif
