#include <raylib.h>
#include "components/AnimationComponent.hpp"

using namespace sp;

AnimationComponent::AnimationComponent(Texture2D t, int framesSpeed, int rowsCount, int columnsCount)
	: texture(t),
		framesSpeed(framesSpeed),
		rowsCount(rowsCount),
		columnsCount(columnsCount)
{
	spriteSize = Vector2{(float)texture.width/columnsCount, (float)texture.height/rowsCount};
	frameRec = Rectangle{0.f, 192.f, spriteSize.x, spriteSize.y};
};

void AnimationComponent::update(float dt) {
	framesCounter++;
	if (framesCounter >= (60/framesSpeed)) {
		framesCounter = 0;
		currentFrame++;
		if (currentFrame > (columnsCount- 1)) currentFrame = 0;

		frameRec.x = (float)currentFrame * spriteSize.x;
	}

};

void AnimationComponent::draw(Vector2 position) const {
	auto spritePosition = Vector2{position.x - spriteSize.x/2, position.y - spriteSize.y/2};
	DrawTextureRec(texture, frameRec, spritePosition, WHITE);
};
