#include <SFML/Graphics.hpp>
#include "../../all.hpp"

sf::Text t;

void renderwindow(const unsigned int w, const unsigned int h) {
    sf::RenderWindow window(sf::VideoMode(w, h), "PROTOENGINE");

    sf::Clock clock;
    float fpsTimer = 0.f;
    unsigned int fpsCounter = 0;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                system("echo exit...");
                window.close();
            }
        }

        float deltaTime = clock.restart().asSeconds();
        fpsCounter++;
        fpsTimer += deltaTime;
        if (fpsTimer >= 1.f) {
            window.setTitle("PROTOENGINE | FPS: " + std::to_string(fpsCounter));
            fpsCounter = 0;
            fpsTimer = 0.f;
        }

        movesprites(0.5f);

        window.clear();
        for (auto &sp : sprites) {
            window.draw(sp.sprite);
        }

        for (auto &txt : texts) {
            window.draw(txt);
        }

        window.display();
    }
}