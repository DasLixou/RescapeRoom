#include "Game.hpp"
#include <raylib.h>
#include <assert.h>

Game::Game(int width, int height, int fps, std::string title)
{
	assert(!GetWindowHandle());
	SetTargetFPS(fps);
	InitWindow(width, height, title.c_str());
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

void Game::Draw(float deltaTime)
{
	ClearBackground(RAYWHITE);
}
