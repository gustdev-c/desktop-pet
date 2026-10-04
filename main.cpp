#include <raylib.h>
#include <raymath.h>

int main() {
	SetConfigFlags(FLAG_WINDOW_UNDECORATED | FLAG_WINDOW_TRANSPARENT);
	InitWindow(64, 64, nullptr);
	Texture pet = LoadTexture("Sprite-0001.png");
	while(!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(BLANK);
		DrawTexture(pet, 0, 0, RAYWHITE);

		if(IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
			Vector2 newPos = Vector2Add(GetMousePosition(), GetWindowPosition());
			SetWindowPosition(newPos.x, newPos.y);
		}
		EndDrawing();
	}

	CloseWindow();
	return 0;
}
