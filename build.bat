@echo off
REM 
if not exist build\win mkdir build\win

REM
g++ game.cxx ^
    engine\render\sprite\main\sprite_render.cxx ^
    engine\render\sprite\input\input.cxx ^
    engine\render\text\text_render.cxx ^
    engine\render\music\music.cxx ^
    engine\render\window\window_render.cxx ^
    -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio ^
    -o build\win\game.exe