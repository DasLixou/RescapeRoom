#include "Game.hpp"
#include <raylib.h>
#include <assert.h>

Game::Game(int width, int height, std::string title)
{
	assert(!GetWindowHandle());
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
	Draw();
	EndDrawing();
}

void Game::Update()
{
}

void Game::Draw()
{
	ClearBackground(RAYWHITE);
}