#ifndef __WINDOWSDL_H__
#define __WINDOWSDL_H__
#include "libManager.h"

class WindowSDL
{
public:
	WindowSDL();
	Uint64 m_start;
	Uint64 m_end;

	SDL_Window* m_window;

	int init_sdl();
	int init_window();
	void update_window();
	void draw_fps();
	void start_frame();
	void end_frame();
	void pause();

	~WindowSDL();
};

#endif