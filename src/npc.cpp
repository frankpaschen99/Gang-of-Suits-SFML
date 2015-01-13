#include "npc.h"

npc::npc(string _fileTexture)
{
	if (!texture.loadFromFile(fileTexture))
		cout << "Error loading " << fileTexture << '\n';
	else
		sprite.setTexture(texture);
}

sf::Sprite npc::getNpc()
{
	return sprite;
}
