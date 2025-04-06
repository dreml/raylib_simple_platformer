#pragma once

#include "common/types.hpp"
#include "game/player.hpp"
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
