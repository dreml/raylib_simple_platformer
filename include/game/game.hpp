#pragma once

#include "common/types.hpp"

namespace sp {

class Game {
  ScreenDimensions screenDimensions;

public:
  Game(ScreenDimensions screenDimensions);

  void update(float dt);
  void draw();
};

} // namespace sp
