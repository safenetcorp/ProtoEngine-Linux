mkdir -p build/linux
g++ game.cxx \
    engine/render/sprite/main/sprite_render.cxx \
    engine/render/text/text_render.cxx \
    engine/render/window/window_render.cxx \
    engine/render/sprite/input/input.cxx \
    -lsfml-graphics -lsfml-window -lsfml-system \
    -o build/linux/game