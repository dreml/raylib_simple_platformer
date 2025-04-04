#include "common/types.hpp"
#include "raylib.h"
#include "common/constants.hpp"
#include "game/game.hpp"

int main(void) {
	float screenWidth = sp::constants::WINDOW_WIDTH;
	float screenHeight = sp::constants::WINDOW_HEIGHT;

	InitWindow(screenWidth, screenHeight, "Simple Platformer");
	InitAudioDevice();

	SetTargetFPS(60);

	sp::Game game(sp::ScreenDimensions{screenWidth, screenHeight});

	while (!WindowShouldClose()) {
		game.update(GetFrameTime());

		BeginDrawing();

		ClearBackground(WHITE);

		game.draw();

		EndDrawing();
	}

	CloseAudioDevice();
	CloseWindow();

	return 0;
}
