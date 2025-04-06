#include <raylib.h>
#include "components/AnimationComponent.hpp"
#include "components/Component.hpp"
#include "game/GameObject.hpp"

using namespace sp;

AnimationComponent::AnimationComponent(GameObject &owner, Texture2D t, int framesSpeed, int rowsCount, int columnsCount)
	: Component(owner),
		texture(t),
		framesSpeed(framesSpeed),
		rowsCount(rowsCount),
		columnsCount(columnsCount)
{
	spriteSize = Vector2{(float)texture.width/columnsCount, (float)texture.height/rowsCount};
	frameRec = Rectangle{0.f, spriteSize.y * 1, spriteSize.x, spriteSize.y};
};

void AnimationComponent::update(float dt) {
	framesCounter++;
	if (framesCounter >= (60/framesSpeed)) {
		framesCounter = 0;
		currentFrame++;
		if (currentFrame > (columnsCount - 1)) currentFrame = 0;

		frameRec.x = (float)currentFrame * spriteSize.x;
	}

};

void AnimationComponent::draw() const {
	auto spritePosition = Vector2{owner.getPosition().x - spriteSize.x/2, owner.getPosition().y - spriteSize.y/2};
	DrawTextureRec(texture, frameRec, spritePosition, WHITE);
};
