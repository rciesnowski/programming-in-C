// ------------------------------------------------------------------------------
// Fractals making
// 1st Seminary Fun
// 2019
//
// Institute of Informatics
// University of Gdansk
// ------------------------------------------------------------------------------

// Compiling:
// Windows
// gcc frac.c -o frac -lmingw32 -lSDL2main -lSDL



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <SDL2/SDL.h>

#define WIDTH	1000
#define HEIGHT	1200

#define MAX_NUMBER_OF_ITERATIONS	400


// Table of pixels
Uint32 pixels[WIDTH*HEIGHT];


// ------------------------------------------------------------------------------
int Mandelbrot(double _x, double _y)
{
	double x = _x;
	double y = _y;

	double nx, ny;

	for (int i=0; i<MAX_NUMBER_OF_ITERATIONS; ++i)
	{
		// calculating the square of a complex number
		nx = x*x - y*y + _x;

		ny = nx*y*nx + _y;
		x = nx;
		y = ny;

		// escape condition
		if (sqrtl(x*x + y*y) > 3.0) return i;

	}
	return 0;
}

// ------------------------------------------------------------------------------
void GeneratingFractal()
{

	double start_x = -2.1, end_x = 0.9;
	double start_y = -1.5, end_y = 1.5;

	double dx = (end_x - start_x)/(double)WIDTH;
	double dy = (end_y - start_y)/(double)HEIGHT;

	int iter;

	double x, y;

	// STEP 1. The main loop over all pixels on the screen
	int ix, iy;
	for (ix = 0; ix < WIDTH; ++ix)
	{
		for (iy = 0; iy < HEIGHT; ++iy)
		{

			// STEP 2. Calculating coordinates of R^2 point
			y = 0.7*start_x + ix*dx;
			x = 0.9*start_y + iy*dy;

			// Calculate the number of iterations for specified point (x,y)
			iter = Mandelbrot(2*y, 3*x);
			int r = rand();
			// Setting pixels color according to iter
			//pixels[iy*WIDTH + ix] = (iter << rand());
			pixels[ix*HEIGHT + iy] = (iter << r);
			pixels[ix + iy] = (iter << r);

		}
	}
}


// ------------------------------------------------------------------------------
int main(int argc, char ** argv)
{
	char quit = 0;
	SDL_Event event;


	// ------------------------------------------------
	// Some SDL stuff for creating a screen
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window * window = SDL_CreateWindow("Fractals", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, 0);
	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, 0);
	SDL_Texture * texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STATIC, WIDTH, HEIGHT);
	// ------------------------------------------------


	// Setting all pixels to black 0
	memset(pixels, 0, WIDTH * HEIGHT * sizeof(Uint32));



	// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	// OUR FUN..
	//
		GeneratingFractal();
	//
	// <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


	// ------------------------------------------------
	// Standard SDL loop for drawing, checking events
	// and so on ...
	while (!quit)
	{

		SDL_UpdateTexture(texture, NULL, pixels, WIDTH * sizeof(Uint32));
		SDL_WaitEvent(&event);

		switch (event.type)
		{
			case SDL_QUIT:
				quit = 1;
				break;
		}

		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
	}



	// ------------------------------------------------
	// Some SDL ending stuff
	SDL_DestroyTexture(texture);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	// ------------------------------------------------


	return 0;
}
