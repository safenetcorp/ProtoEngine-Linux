// input.cxx
#include "../main/sprite_header.hpp"
#include "input.hpp"

void movesprites(float speed) {
    for (auto &data : sprites) {
        if (data.movable) {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) data.sprite.move(0.f, -speed);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) data.sprite.move(0.f, speed);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) data.sprite.move(-speed, 0.f);
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) data.sprite.move(speed, 0.f);
        }
    }
}
