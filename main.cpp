#include <raylib.h>

int main() {
	SetConfigFlags(FLAG_WINDOW_UNDECORATED | FLAG_WINDOW_TRANSPARENT);
	InitWindow(64, 64, nullptr);
	Texture pet = LoadTexture("Sprite-0001.png");
	while(!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLANK);
		DrawTexture(pet, 0, 0, RAYWHITE);
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
