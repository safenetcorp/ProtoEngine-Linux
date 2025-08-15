// sprite_header.hpp
#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

struct SpriteData {
    sf::Sprite sprite;
    bool movable;
};

extern sf::Texture texture;
extern std::vector<SpriteData> sprites;

void rendersprites(const char sppath[], unsigned int posx, unsigned int posy, bool movable);