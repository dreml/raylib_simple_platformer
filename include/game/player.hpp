#pragma once

#include "components/AnimationComponent.hpp"
#include "game/GameObject.hpp"
#include <raylib.h>

namespace sp {

class Player : public GameObject {
private:
  AnimationComponent animationComponent;

  float speed;

public:
  Player(Vector2 p, Texture2D i, float s);

  void update(float dt) override;
  void draw() const override;
};

} // namespace sp
