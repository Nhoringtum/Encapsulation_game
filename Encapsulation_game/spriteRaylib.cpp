#include "spriteRaylib.h"

SpriteRaylib::SpriteRaylib()
{
	draw_circle();
};

void SpriteRaylib::draw_circle()
{
	//fonctionne si on le met dans le windowRaylib.cpp
	BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawCircle(50, 50, 10.f, ORANGE);
		DrawRectangle(150, 150, 50, 50, ORANGE);
		DrawText("ahhhhhhhhh", 20, 20, 20, DARKBLUE);
	EndDrawing();
};

void SpriteRaylib::draw_wall()
{

};