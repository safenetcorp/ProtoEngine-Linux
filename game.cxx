#include "engine/all.hpp"

int main() {
    rendersprites("texture/sprite.png", 400, 400, true);
    rendertext("Hello From PROTOENGINE!", 400, 300);
    rendertext("Its Simple Game!", 400, 200);
    start_music("music/test.ogg", true);
    renderwindow(800, 600);
    return 0;
}