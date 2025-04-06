#include <raylib.h>
#include "common/Types.hpp"
#include "common/Constants.hpp"
#include "game/Game.hpp"

int main(void) {
	float screenWidth = sp::constants::WINDOW_WIDTH;
	float screenHeight = sp::constants::WINDOW_HEIGHT;

	SetConfigFlags(FLAG_MSAA_4X_HINT);

	InitWindow(screenWidth, screenHeight, "Simple Platformer");
	InitAudioDevice();

	SetTargetFPS(60);

	sp::Game game(sp::ScreenDimensions{screenWidth, screenHeight});

	while (!WindowShouldClose()) {
		game.update(GetFrameTime());

		BeginDrawing();

		ClearBackground(RAYWHITE);

		game.draw();

		EndDrawing();
	}

	CloseAudioDevice();
	CloseWindow();

	return 0;
}
