#!/bin/bash
set -e  # скрипт остановится при первой же ошибке

GREEN="\033[0;32m"
RED="\033[0;31m"
YELLOW="\033[1;33m"
NC="\033[0m" # сброс цвета

start_time=$(date +%s)

echo -e "${YELLOW}Installing SFML...${NC}"
sudo apt install -y libsfml-dev

echo -e "${YELLOW}Building project...${NC}"
if g++ game.cxx \
    engine/render/music/music.cxx \
    engine/render/sprite/main/sprite_render.cxx \
    engine/render/sprite/input/input.cxx \
    engine/render/text/text_render.cxx \
    engine/render/window/window_render.cxx \
    -lsfml-audio -lsfml-system -lsfml-window -lsfml-graphics \
    -o build/Linux/game; then
    echo -e "${GREEN}✅ Build completed successfully!${NC}"
else
    echo -e "${RED}❌ Build failed!${NC}"
    exit 1
fi

end_time=$(date +%s)
elapsed=$((end_time - start_time))
echo -e "${YELLOW}Build time: ${elapsed} seconds.${NC}"