#ifndef __WINDOWSDL_H__
#define __WINDOWSDL_H__
#include "windowManager.h"
#include <iostream>
#include <SDL2/SDL.h>

class WindowSDL : WindowManager
{
public:
	WindowSDL();
	// Pointers to our window and surface
	SDL_Surface* m_winSurface = NULL;
	SDL_Window* m_window = NULL;

	int initSDL();
	int initWindow();
	int initSurface();
	void updateWindow();
	void pause();

	~WindowSDL();
};

#endif