#ifndef __SPRITESDL_H__
#define __SPRITESDL_H__
#include "libManager.h"
#include "customVector2.h"

class SpriteSDL
{
public:
	CustomVector2 m_vect; //coord à randomiser
	SpriteSDL();

	//int init_surface();
	//void draw_circle();
	//void draw_wall();
	//int touch_window();
	void bounce(char side);
	//virtual void move() = 0;
};

#endif