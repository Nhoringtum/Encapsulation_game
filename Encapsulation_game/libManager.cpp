#include "libManager.h"

LibManager::LibManager(LibType choosen_lib) : m_choosen_lib(choosen_lib)
{
	if (m_choosen_lib == 0)
	{
		//SpriteSDL* m_win_surface = new SpriteSDL();
		WindowSDL* m_window = new WindowSDL();
		//SDL_Renderer* m_renderer = NULL;
	}
	else
	{
		WindowRaylib* m_window = new WindowRaylib();
		SpriteRaylib* m_sprite = new SpriteRaylib();
	}
};

LibManager::LibManager() : m_choosen_lib(RAYLIB)
{
	WindowRaylib* m_window = new WindowRaylib();
	SpriteRaylib* m_sprite = new SpriteRaylib();
};

LibManager::~LibManager(){};