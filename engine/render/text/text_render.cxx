#include <SFML/Graphics.hpp>
#include "text_header.hpp"

std::vector<sf::Text> texts;

void rendertext(const char text[], const unsigned int w, const unsigned int h) {
    static sf::Font f;

    if (f.getInfo().family.empty()) {
        #ifdef _WIN32
            if (!f.loadFromFile("C:\\Windows\\Fonts\\ARIAL.TTF")) return;
        #elif __linux__
            if (!f.loadFromFile("engine/fonts/arial/ARIAL.TTF")) return;
        #endif
    }

    sf::Text t;
    t.setFont(f);
    t.setString(text);
    t.setCharacterSize(30);
    t.setFillColor(sf::Color::White);

    sf::FloatRect bounds = t.getLocalBounds();
    t.setOrigin(bounds.width / 2, bounds.height / 2);
    t.setPosition(w / 2, h / 2);

    texts.push_back(t);
}