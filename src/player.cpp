#include "player.h"

Player::Player() {}

void Player::setPosition(sf::Vector2f _position)
{
    sprite.setPosition(_position);
}
void Player::setSprite(sf::Sprite _sprite)
{
    sprite = _sprite;
}
void Player::setTexture(string fileLocation)
{
    if (!texture.loadFromFile(fileLocation))
    {
        cout << "Error! Could not find file " << fileLocation << "!\n";
    }
    else
    {
        sprite.setTexture(texture);
    }
}
void Player::setTexture(string fileLocation, sf::Vector2f position)
{
    if (!texture.loadFromFile(fileLocation))
    {
        cout << "Error! Could not find file " << fileLocation << "!\n";
    }
    else
    {
        sprite.setTexture(texture);
        sprite.setPosition(sf::Vector2f(position.x, position.y));
    }
}

sf::Sprite Player::getSprite()
{
    return sprite;
}
void Player::freeze()
{
    cout << "Frozen state toggled!\n";
    if (!isFrozen)
        isFrozen = true;
    else
        isFrozen = false;
}
// Handle keyboard input and player animation
void Player::move()
{
if (!isFrozen)
    {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                sprite.move(-1.f, 1.f);
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                sprite.move(-1.f, -1.f);
            }
            else
            {
                sprite.move(-1.f, 0.f);
            }
        }
        // D, DS, DW
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
            {
                sprite.move(1.f, 1.f);
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
            {
                sprite.move(1.f, -1.f);
            }
            else
            {
                sprite.move(1.f, 0.f);
            }
        }
        // S
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            sprite.move(0.f, 1.f);
        }
        // W
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            sprite.move(0.f, -1.f);
        }
        else {}
    }
}
