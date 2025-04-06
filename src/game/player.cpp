#include <raylib.h>
#include "game/Player.hpp"
#include "components/AnimationComponent.hpp"

using namespace sp;

Player::Player(Vector2 p, Texture2D i, float s)
	: speed(s),
		animationComponent(AnimationComponent(*this, i, 10, 8, 6))
{
	position = p;
};

void Player::update(float dt) {
	animationComponent.update(dt);
}

void Player::draw() const {
	animationComponent.draw();
};
