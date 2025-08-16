#include <SFML/Graphics.hpp>
#include "text_header.hpp"

std::vector<sf::Text> texts;

void rendertext(const char text[], const unsigned int x, const unsigned int y) {
    static sf::Font f;

    if (f.getInfo().family.empty()) {
        if (!f.loadFromFile("fonts/arial/ARIAL.TTF")) return;
    }

    sf::Text t;
    t.setFont(f);
    t.setString(text);
    t.setCharacterSize(30);
    t.setFillColor(sf::Color::White);

    sf::FloatRect bounds = t.getLocalBounds();
    t.setOrigin(bounds.width / 2, bounds.height / 2);
    t.setPosition(x / 2, y / 2);

    texts.push_back(t);
}