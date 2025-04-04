#include "common/types.hpp"
#include "raylib.h"
#include "game/game.hpp"

using namespace sp;

Game::Game(ScreenDimensions sd)
	: screenDimensions(sd)
{};

void Game::update(float dt) {

};

void Game::draw() {
	DrawCircle(screenDimensions.width/2, screenDimensions.height/2, 20, BLACK);
};
