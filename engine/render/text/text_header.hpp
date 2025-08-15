#pragma once
#include <cstring>
#include <SFML/Graphics.hpp>


extern std::vector<sf::Text> texts;

/**
 * @brief Отрисовывает текст в окне
 * 
 * @param text  Строка с текстом
 * @param w   Ширина окна
 * @param h   Высота окна
 */
void rendertext(const char text[], const unsigned int w, const unsigned int h);