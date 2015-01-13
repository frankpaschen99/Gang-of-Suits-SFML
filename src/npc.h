#ifndef NPC_H_INCLUDED
#define NPC_H_INCLUDED
#include <iostream>
#include <SFML/System.hpp>
#include <SFML/Graphics/View.hpp>
#include <SFML/Graphics.hpp>
using namespace std;

class npc {
public:
	npc(string _fileTexture);
	sf::Sprite getNpc();
private:
	sf::Sprite sprite;
	sf::Texture texture;
	string fileTexture;
};

#endif
