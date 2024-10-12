#ifndef __SPRITESDL_H__
#define __SPRITESDL_H__
#include "renderManager.h"

class SpriteSDL : RenderManager
{
public:
	SpriteSDL();

	void draw_circle();
	void draw_wall();
	virtual void move() = 0;
};

#endif