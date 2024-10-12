#ifndef __RENDERMANAGER_H__
#define __RENDERMANAGER_H__
#include <string>

class RenderManager
{
public:
	//RenderManager(std::string m_argv);
	RenderManager();

	virtual void init_raylib_sprite();
	virtual void init_sdl_sprite();
};

#endif