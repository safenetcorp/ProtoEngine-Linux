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

/**
 * @brief [En] Rendering A Sprite!
 * 
 * @param sppath [En] Path\\To\\Your\\Sprite.png
 * @param posx [En] X Position
 * @param posy [En] Y Position
 */
void rendersprites(const char sppath[], unsigned int posx, unsigned int posy, bool movable);