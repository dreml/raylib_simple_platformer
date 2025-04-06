#pragma once

#include <raylib.h>
namespace sp {

class AnimationComponent {
  Texture2D texture;

  int framesSpeed;
  int currentFrame;
  Rectangle frameRec;
  int framesCounter;

  int rowsCount;
  int columnsCount;

  Vector2 spriteSize;

public:
  AnimationComponent(Texture2D t, int framesSpeed, int rowsCount,
                     int columnsCount);

  void update(float dt);
  void draw(Vector2 position) const;
};

} // namespace sp
