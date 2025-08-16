#include <SFML/Audio.hpp>

static sf::Music music;

void start_music(const char mpath[128], bool looped) {
    if (!music.openFromFile(mpath)) return;
    if (!looped) {
        music.play();
    } else {
        music.setLoop(true);
        music.play();
    }
} 