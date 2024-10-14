#include "spriteSDL.h"

SpriteSDL::SpriteSDL()
{
	int number_of_circle = 15;
	//draw_wall();
	/*for (int i = 0; i < number_of_circle; i++)
		draw_circle();*/
};

/*
int SpriteSDL::init_surface()
{
	// Get the surface from the window
	m_win_surface = SDL_GetWindowSurface(m_window);

	// Make sure getting the surface succeeded
	if (!m_win_surface)
	{
		std::cout << "Error getting surface: " << SDL_GetError() << std::endl;
		system("pause");
		// End the program
		return 1;
	}

	SDL_FillRect(m_win_surface, NULL, SDL_MapRGB(m_win_surface->format, 255, 255, 255));
	return 0;
};
*/

/*
void SpriteSDL::draw_circle(float x, float y, float ray)
{
	//utiliser (x - h)² + (y - k)² = r² pour tracer le cercle et (x - h)² + (y - k)² - r² = 0
	// pour colorier le cercle
	for (int i = 0; i < )
};
*/

/*
void SpriteSDL::draw_wall()
{
	SDL_Rect r;
	r.x = 150;
	r.y = 25;        //Les int à randomiser 
	r.h = 75;
	r.w = 120;
	SDL_RenderFillRect(m_renderer, &r);
};
*/

/*
int SpriteSDL::touch_window()
{
	//check si les coord d'un point touche les paroies de la fenêtre d'affichage
};
*/

//Take side of collider : v for vertical, h for horizontal
void SpriteSDL::bounce(char side)
{
	if (side == 'v')
		m_vect.setXY(m_vect.m_x, -m_vect.m_y);
	if (side == 'h')
		m_vect.setXY(-m_vect.m_x, m_vect.m_y);
};