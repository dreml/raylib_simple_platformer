#pragma once

#include <raylib.h>

namespace sp {

class GameObject {
protected:
  Vector2 position;

public:
  Vector2 getPosition() const { return position; };

  virtual void update(float dt) = 0;
  virtual void draw() const = 0;
};

} // namespace sp
