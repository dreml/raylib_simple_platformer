#pragma once

#include "game/GameObject.hpp"

namespace sp {

class Component {
protected:
  GameObject &owner;

  Component(GameObject &owner) : owner(owner) {};

public:
  virtual void update(float dt) = 0;
  virtual void draw() const = 0;
};

} // namespace sp
