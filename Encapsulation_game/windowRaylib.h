#ifndef __WINDOWRAYLIB_H__
#define __WINDOWRAYLIB_H__
#include "libManager.h"

class WindowRaylib
{
public:
	WindowRaylib();

	bool m_is_paused;

	void init_window(int w, int h, const char* win_name);
	void draw_fps();

	~WindowRaylib();
};

#endif