#include "level.h"

Level::Level()
{
	init();
	load(0);
}

void Level::init()
{
	cout << "-----[LEVEL]-----\n";
    cout << "Level::init() is detecting level files...\n";

    /*for (int i = 0; i < fileNames.size(); ++i)
    {
        stream.open("levels/" + fileNames[i] + ".txt");

        if (!stream) {
            cout << "File not found! " << fileNames[i] << ".txt!\n";
            stream.close();
        } else {
            cout << "File found: " << fileNames[i] << ".txt\n";
            stream.close();
        }
    }*/
}
void Level::load(int _levelID)
{
	char terminator = '/';

    stream.open("levels/" + fileNames[_levelID] + ".txt");

    string id, bgTexture;
    sf::Vector2f spawnPos;
    vector<string> npcName;
    vector<string> npcTexture;
    string music;
    vector<sf::Vector2f> npcPosition;
    string _npcName, _npcTexture;
    sf::Vector2f _npcPosition;

    stream >> id >> bgTexture >> spawnPos.x >> spawnPos.y >> music;

    char ch;
    while (stream>>ch && ch!=terminator)
    {
        stream>>_npcName;
        cout << "Created NPC from file: " << _npcName << '\n';
        stream>>_npcTexture;
        stream>>_npcPosition.x;
        stream>>_npcPosition.y;
        npcName.push_back("n" + _npcName);
        npcTexture.push_back(_npcTexture);
        npcPosition.push_back(sf::Vector2f(_npcPosition.x, _npcPosition.y));
    }
    cout << "-----[LEVEL]-----\n\n";
}
