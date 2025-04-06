#include "common/Constants.hpp"
#include "common/Types.hpp"
#include "game/Player.hpp"
#include <raylib.h>
#include <memory>
#include "game/Game.hpp"

using namespace sp;

Game::Game(ScreenDimensions sd)
	: screenDimensions(sd)
{
	auto playerSprite = LoadTexture("assets/player.png"); 
	player = std::make_unique<Player>(
		Vector2{screenDimensions.width/2, screenDimensions.height/2},
		playerSprite,
		constants::PLAYER_SPEED
	);
};

void Game::update(float dt) {
	player->update(dt);
};

void Game::draw() {
	player->draw();
};
