#pragma once

namespace sp {

class GameObject {
public:
  virtual void update(float dt) = 0;
  virtual void draw() const = 0;
};

} // namespace sp
