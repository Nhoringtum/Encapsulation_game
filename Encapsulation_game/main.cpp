#define SDL_MAIN_HANDLED
#include <iostream>
#include <SDL2/SDL.h>
#include <raylib.h>
#include "includes.h"

// You shouldn't really use this statement, but it's fine for small programs
using namespace std;

// You must include the command line parameters for your main function to be recognized by SDL
int main(int argc, char** args)
{
	WindowSDL* myWinSDL = new WindowSDL();

	return 0;
}