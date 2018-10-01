#include <SFML/Graphics.hpp>
#include <iostream>

#include "assets.h"

int main() {
    sf::Window win(sf::VideoMode(1024, 1024), "Stealth game");

    while (win.isOpen()) {
        sf::Event ev;
        win.pollEvent(ev);
        if (ev.type == sf::Event::Closed) {
            win.close();
        }
    }

    return EXIT_SUCCESS;
}