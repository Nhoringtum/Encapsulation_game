#include "windowRaylib.h"

WindowRaylib::WindowRaylib()
{
	init_window(1080, 720, "Casse-brique");
	/*
	while (!WindowShouldClose())
	{
		//if (IsKeyPressed(KEY_ESCAPE))
		draw_fps();
		ClearBackground(RAYWHITE);	
	}
	*/
};

void WindowRaylib::init_window(int w, int h, const char* win_name)
{
	InitWindow(w, h, win_name);
	SetConfigFlags(FLAG_VSYNC_HINT); //synchro les FPS au GPU
	SetTargetFPS(60);
};

void WindowRaylib::draw_fps()
{
	BeginDrawing();
	DrawFPS(0, 0);
	EndDrawing();
};

WindowRaylib::~WindowRaylib()
{
	CloseWindow();
}
