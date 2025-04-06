#pragma once

#include "game/game_object.hpp"
#include <raylib.h>

namespace sp {

class Player : public GameObject {
  Vector2 position;
  Texture2D sprite;
  float speed;

  // animation
  int framesSpeed;
  int framesCounter;
  Rectangle frameRec;
  int currentFrame;

  void updateAnimation();

public:
  Player(Vector2 p, Texture2D i, float s);

  void update(float dt) override;
  void draw() const override;
};

} // namespace sp
