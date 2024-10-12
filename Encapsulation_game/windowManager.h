#ifndef __WINDOWMANAGER_H__
#define __WINDOWMANAGER_H__
#include <string>
#include <SDL2/SDL.h>
#include <raylib.h>

class WindowManager
{
public:
	WindowManager();

	virtual void init_raylib_window();
	virtual void init_sdl_window();
};

#endif