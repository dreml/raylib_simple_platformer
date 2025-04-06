#pragma once

#include "components/Component.hpp"
#include "game/GameObject.hpp"
#include <raylib.h>

namespace sp {

class AnimationComponent : public Component {
private:
  Texture2D texture;

  int framesSpeed;
  int currentFrame;
  Rectangle frameRec;
  int framesCounter;

  int rowsCount;
  int columnsCount;

  Vector2 spriteSize;

public:
  AnimationComponent(GameObject &owner, Texture2D t, int framesSpeed,
                     int rowsCount, int columnsCount);

  void update(float dt) override;
  void draw() const override;
};

} // namespace sp
