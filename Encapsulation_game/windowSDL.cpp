#include "windowSDL.h"

WindowSDL::WindowSDL()
{
	init_sdl();
	init_window();
	start_frame();
	update_window();
	end_frame();
	draw_fps();
	//pause();
};

int WindowSDL::init_sdl()
{
	// Initialize SDL. SDL_Init will return -1 if it fails.
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		std::cout << "Error initializing SDL: " << SDL_GetError() << std::endl;
		system("pause");
		// End the program
		return 1;
	}
	return 0;
};

int WindowSDL::init_window()
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
	return 0;
};

void WindowSDL::update_window()
{
	SDL_UpdateWindowSurface(m_window);
};

void WindowSDL::draw_fps()
{
	float elapsed = (m_end - m_start) / (float)SDL_GetPerformanceFrequency();
	std::cout << "Current FPS: " << std::to_string(1.0f / elapsed) << std::endl;
};

void WindowSDL::start_frame()
{
	m_start = SDL_GetPerformanceCounter();
};

void WindowSDL::end_frame()
{
	m_end = SDL_GetPerformanceCounter();
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