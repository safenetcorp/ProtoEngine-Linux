echo Installing SFML!
sudo apt install libsfml-dev
echo Building...
g++ game.cxx \
    engine/render/music/music.cxx \
    engine/render/sprite/main/sprite_render.cxx \
    engine/render/sprite/input/input.cxx \
    engine/render/text/text_render.cxx \
    engine/render/window/window_render.cxx \
    -lsfml-audio -lsfml-system -lsfml-window -lsfml-graphics \
    -o build/Linux/game
if [ $? -eq 0 ]; then
    echo Complete Building Succefull!
else
    echo Building Complete with Error!
fi