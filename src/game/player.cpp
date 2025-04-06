#include <process.h>
#include <raylib.h>
#include "game/player.hpp"

using namespace sp;

Player::Player(Vector2 p, Texture2D i, float s)
	: position(p),
		sprite(i),
		speed(s)
{
	framesSpeed = 10;
	frameRec = Rectangle{.0f, .0f, (float)sprite.width/6, (float)sprite.height/8};
};

void Player::update(float dt) {
	updateAnimation();
}

void Player::draw() const {
	auto spritePosition = Vector2{position.x - 96, position.y - 96};
	DrawTextureRec(sprite, frameRec, spritePosition, WHITE);
};

void Player::updateAnimation() {
	framesCounter++;
	if (framesCounter >= (60/framesSpeed)) {
		framesCounter = 0;
		currentFrame++;
		if (currentFrame > 5) currentFrame = 0;

		frameRec.x = (float)currentFrame * (float)sprite.width/6;
	}

}
