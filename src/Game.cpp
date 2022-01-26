#include "Game.hpp"
#include <assert.h>

Game::Game(int width, int height, int fps, std::string title)
{
	assert(!GetWindowHandle());
	SetTargetFPS(fps);
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(width, height, title.c_str());

	Game::lixolotl = LoadTexture("resources/lixolotl.png");
	Game::currentState = Game::GameState::LOGO;
}

Game::~Game() noexcept
{
	assert(GetWindowHandle());
	CloseWindow();
}

bool Game::GameShouldClose() const
{
	return WindowShouldClose();
}

void Game::Tick()
{
	BeginDrawing();
	Update();
	Draw(GetFrameTime());
	EndDrawing();
}

void Game::Update()
{
}

float i = 0;
void Game::Draw(float deltaTime)
{
	ClearBackground(BLACK);

	switch (Game::currentState)
	{
	case Game::GameState::LOGO:
		if (i >= 255) { Game::currentState = Game::GameState::TITLE; }
		DrawTexture(Game::lixolotl, GetScreenWidth() / 2 - Game::lixolotl.width / 2, GetScreenHeight() / 2 - Game::lixolotl.height / 2, Color{255, 255, 255, (unsigned char)i});
		i = i + 60.0f * deltaTime;
		break;
	default:
		break;
	}
}
