#include "LogoScene.hpp"
#include <raylib.h>

Texture2D lixolotl;
float i = 0.0f;

LogoScene::LogoScene()
{
	lixolotl = LoadTexture("resources/lixolotl.png");
}

LogoScene::~LogoScene() noexcept
{
	UnloadTexture(lixolotl);
}

void LogoScene::Update(float deltaTime)
{
	if (!(i >= 255)) 
	{
		i = i + 60.0f * deltaTime;
	}
}

void LogoScene::Render()
{
	DrawTexture(lixolotl, GetScreenWidth() / 2 - lixolotl.width / 2, GetScreenHeight() / 2 - lixolotl.height / 2, Color{ 255, 255, 255, (unsigned char)i });
}
