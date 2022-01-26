#include "Game.hpp"

int main(void)
{
    Game game(1280, 720, 60, "RescapeRoom | 0.0.1 InDev");

    while (!game.GameShouldClose()) {
        game.Tick();
    }

    return 0;
}