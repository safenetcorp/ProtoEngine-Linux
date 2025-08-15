# PROTOENGINE

**PROTOENGINE** is a simple 2D game engine built with **C++** and **SFML**, designed for quick prototyping of sprite-based games.


---

## ✨ Features

- Sprite rendering with position control  
- Movable sprites using keyboard input  
- Text rendering  
- FPS counter in the window title  
- Window icon support  

---

## 📦 Dependencies

Before building **PROTOENGINE**, make sure you have the following installed:

- **C++17 or newer** (tested with GCC, MinGW, and Clang)
- [SFML 2.5+](https://www.sfml-dev.org/download.php)  
  - Modules: `system`, `window`, `graphics` (audio optional)

---

## 📂 Project Structure
ProtoEngine/
    build/
        linux/
        win/
            game.exe <-- Main Game
    engine/ <-- Main Engine Folder
        fonts/
            <=Fonts=>
        render/
            sprite/
                main/ <-- For Rendering Sprites
                input/ <-- For Moving
            text/
                text_render.cxx
                text_header.hpp
            window/
                window_render.cxx <-- Main Render File
                window_header.hpp
            all.hpp <-- Header for all headers
        build.bat <-- Builder For Windows(Need SFML and G++)
        build.sh <-- Builder For Unix-Systems(Need SFML and G++)
        game.cxx <-- Main File For Build
