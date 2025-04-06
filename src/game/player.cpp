#include <raylib.h>
#include "game/Player.hpp"
#include "components/AnimationComponent.hpp"

using namespace sp;

Player::Player(Vector2 p, Texture2D i, float s)
	: position(p),
		speed(s),
		animationComponent(AnimationComponent(i, 10, 8, 6))
{
};

void Player::update(float dt) {
	animationComponent.update(dt);
}

void Player::draw() const {
	animationComponent.draw(position);
};
