#include "Game.hpp"
#include <assert.h>

Game::Game(int width, int height, int fps, std::string title)
{
	assert(!GetWindowHandle());
	SetTargetFPS(fps);
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(width, height, title.c_str());

	Game::currentState = Game::GameState::LOGO;
	Game::currentScene = new LogoScene();
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
	Update(GetFrameTime());
	Draw();
	EndDrawing();
}

void Game::Update(float deltaTime)
{
	Game::currentScene->Update(deltaTime);
}

void Game::Draw()
{
	ClearBackground(BLACK);

	Game::currentScene->Render();
}
