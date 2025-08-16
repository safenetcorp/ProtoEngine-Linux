/*
    Im So sorry guys but.. I need to cut all linux stuff in my project. Because
    im cant support this system, im tired of errors...
    

    Sorry! If you can support linux to my project, Please make a normal .sh file of Makefile (NOT CMAKE!)
*/
#include "engine/all.hpp"

int main() {
    rendersprites("texture\\sprite.png", 400, 400, true);
    rendertext("Hello From PROTOENGINE!", 400, 300);
    rendertext("Its Simple Game!", 400, 200);
    renderwindow(800, 600);
    return 0;
}