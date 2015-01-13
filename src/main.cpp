// GANG OF SUITS DEVELOPMENT MAIN.CPP
// CREATED STARDATE -308032.87671232875
// PROGRAMMED BY FRANK PASCHEN
// SOUND AND GRAPHICAL ENGINEER: JAYDON HOPPE
// USING SFML MULTIMEDIA LIBRARY V2.2

#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics/View.hpp>
#include <SFML/Graphics.hpp>
#include "level.h"
#include "player.h"
#include "ftp_manager.h"

using namespace std;

int main()
{
    Player p;
    sf::Sprite sprite;
    sf::Texture texture;
    p.setSprite(sprite);
    p.setTexture("resources/char.png");

    sf::RenderWindow window;
    bool resizeEnabled = false;
    if (!resizeEnabled)
        window.create(sf::VideoMode(800, 600), "Gang of Suits", sf::Style::Titlebar | sf::Style::Close);
    else
        window.create(sf::VideoMode(800, 600), "Gang of Suits", sf::Style::Default);
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(60); // Glorious PC Master Race!

    Level l;
    level_0 level_0;
    level_0.start(p);

    ftp ftp{false}; // Parameter: isFileTransferEnabled? false = use local files
    ftp.init();

	bool playing = false;
	while (window.isOpen())
    {
        if (!playing)
        {
            cout << "-----[GAMELOOP]-----\n";
            cout << "Game loop started successfully...\n";
            cout << "-----[GAMELOOP]-----\n\n";
            playing = true;
        }

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (playing)
        {
            window.clear(sf::Color::Black);
            //window.draw(level_0.getLayerOne()); // can walk
            //window.draw(level_0.getLayerTwo());   // can't walk
            window.draw(p.getSprite());
            window.display();
            p.move();
        }
    }
    return 0;
}
