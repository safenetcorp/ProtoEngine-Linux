#pragma once
#include <cstring>
#include <SFML/Graphics.hpp>


extern std::vector<sf::Text> texts;

/**
 * @brief [En] Rendering Text in window
 * 
 * @param text  [line with YOUR text]
 * @param x [En] X Position
 * @param y [En] Y Position
 */
void rendertext(const char text[], const unsigned int x, const unsigned int y);