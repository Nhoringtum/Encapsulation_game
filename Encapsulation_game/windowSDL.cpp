#include "windowSDL.h"

WindowSDL::WindowSDL()
{
	initSDL();
	initWindow();
	initSurface();
	updateWindow();
	pause();
};

int WindowSDL::initSDL()
{
	// Initialize SDL. SDL_Init will return -1 if it fails.
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		std::cout << "Error initializing SDL: " << SDL_GetError() << std::endl;
		system("pause");
		// End the program
		return 1;
	}
};

int WindowSDL::initWindow()
{
	// Create our window
	m_window = SDL_CreateWindow("Example", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, SDL_WINDOW_SHOWN);
	
	// Make sure creating the window succeeded
	if (!m_window)
	{
		std::cout << "Error creating window: " << SDL_GetError() << std::endl;
		system("pause");
		// End the program
		return 1;
	}
};

int WindowSDL::initSurface()
{
	// Get the surface from the window
	m_winSurface = SDL_GetWindowSurface(m_window);

	// Make sure getting the surface succeeded
	if (!m_winSurface)
	{
		std::cout << "Error getting surface: " << SDL_GetError() << std::endl;
		system("pause");
		// End the program
		return 1;
	}

	SDL_FillRect(m_winSurface, NULL, SDL_MapRGB(m_winSurface->format, 255, 255, 255));
}

void WindowSDL::updateWindow()
{
	SDL_UpdateWindowSurface(m_window);
};

void WindowSDL::pause()
{
	// Wait
	system("pause");
}

WindowSDL::~WindowSDL()
{
	SDL_DestroyWindow(m_window);
	SDL_Quit();
};