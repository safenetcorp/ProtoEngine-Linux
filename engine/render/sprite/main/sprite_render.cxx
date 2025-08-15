#include <SFML/Graphics.hpp>
#include "sprite_header.hpp"
#include "../input/input.hpp"
#include <iostream>

sf::Texture texture;
std::vector<SpriteData> sprites;
sf::Sprite sprite;

void rendersprites(const char sppath[], const unsigned int posx, const unsigned int posy, bool movable) {
    if (!texture.loadFromFile(sppath)) return;

    SpriteData data;
    data.sprite.setTexture(texture);
    data.sprite.setPosition(posx, posy);
    
    data.movable = movable;

    sprites.push_back(data);

}