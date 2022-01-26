#pragma once
#include <string>
#include <raylib.h>

class Game
{
public:
    Game(int width, int height, int fps, std::string title);
    Game(const Game& other) = delete;
    Game& operator=(const Game& other) = delete;
    ~Game() noexcept;

    bool GameShouldClose() const;

    void Tick();

    enum class GameState { LOGO = 0, TITLE, GAMEPLAY, ENDING };
private:
    Texture2D lixolotl;
    GameState currentState;
    void Update();
    void Draw(float deltaTime);
};