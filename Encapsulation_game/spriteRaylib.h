#ifndef __SPRITERAYLIB_H__
#define __SPRITERAYLIB_H__
#include "renderManager.h"

class SpriteRaylib : RenderManager
{
public:
	SpriteRaylib();

	//vector for move ?

	void draw_circle();
	void draw_wall();
	virtual void move() = 0;
};

#endif