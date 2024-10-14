#ifndef __LIBMANAGER_H__
#define __LIBMANAGER_H__
#include <SDL2/SDL.h>
#include <raylib.h>
#include <iostream>
#include <string>
#include "windowSDL.h"
#include "spriteSDL.h"
#include "windowRaylib.h"
#include "spriteRaylib.h"

enum LibType
{
	SDL,
	RAYLIB
};

class LibManager
{
public:
	
	LibType m_choosen_lib;

	LibManager(LibType choosen_lib);
	LibManager();
	~LibManager();
};

#endif
