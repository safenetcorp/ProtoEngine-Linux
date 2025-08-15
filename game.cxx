#include "engine/all.hpp"

int main() {
    char unixpath[64] = "/mnt/c/GWSDL/engine/sprites/sprite.png";
    char winpath[64] = "C:\\GWSDL\\engine\\sprites\\sprite.png";
    #ifdef __linux__
        rendersprites(unixpath, 400, 400, true);
    #else
        rendersprites(winpath, 400, 400, true);
    #endif
    rendertext("Hello From PROTOENGINE!", 400, 300);
    rendertext("Its Simple Game!", 400, 200);
    renderwindow(800, 600);
    return 0;
}