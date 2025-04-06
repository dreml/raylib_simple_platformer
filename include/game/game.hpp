#pragma once

#include "common/Types.hpp"
#include "game/Player.hpp"
#include <memory>

namespace sp {

class Game {
  ScreenDimensions screenDimensions;
  std::unique_ptr<Player> player;

public:
  Game(ScreenDimensions screenDimensions);

  void update(float dt);
  void draw();
};

} // namespace sp
