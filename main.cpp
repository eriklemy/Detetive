#include <iostream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>

const int WIDTH = 1080, HEIGHT = 720;

// void drawText(SDL_Surface *screen, char *string, int size, int x, int y, SDL_Color fgC, SDL_Color bgC)
// {
// 	// Remember to call TTF_Init(), TTF_Quit(), before/after using this function.
// 	TTF_Font *font = TTF_OpenFont("arial.ttf", size);
// 	if (!font)
// 	{
// 		printf("[ERROR] TTF_OpenFont() Failed with: %s\n", TTF_GetError());
// 		exit(2);
// 	}
// 	TTF_SetFontStyle(font, TTF_STYLE_BOLD);
// 	// SDL_Surface* textSurface = TTF_RenderText_Solid(font, string, fgC);
// 	SDL_Surface *textSurface = TTF_RenderText_Shaded(font, string, fgC, bgC);
// 	SDL_Rect textLocation = {x, y, 0, 0};
// 	SDL_BlitSurface(textSurface, NULL, screen, &textLocation);
// 	SDL_FreeSurface(textSurface);
// 	TTF_CloseFont(font);
// 	// printf("Oh My Goodness, an error : %s\n", TTF_GetError()); return 1;
// }

int main(int argc, char *argv[])
{
	SDL_Surface *imageSurface = NULL;
	SDL_Surface *windowSurface = NULL;

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window *window = SDL_CreateWindow("Detetive - RPLM", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);
	windowSurface = SDL_GetWindowSurface(window);

	// Check that the window was successfully created
	if (NULL == window)
	{
		// In the case that the window could not be made...
		std::cout << "Could not create window: " << SDL_GetError() << std::endl;
		return 1;
	}

	if (!(IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG))
	{
		std::cout << "Could not create window: " << IMG_GetError() << std::endl;
		return 1;
	}

	SDL_Event windowEvent;

	imageSurface = IMG_Load("menu.jpeg");

	if (NULL == imageSurface)
	{
		std::cout << "SDL could not load image! SDL Error: " << SDL_GetError() << std::endl;
	}

	// if (TTF_Init() == -1)
	// {
	// 	printf("[ERROR] TTF_Init() Failed with: %s\n", TTF_GetError());
	// 	exit(2);
	// }
	while (true)
	{
		if (SDL_PollEvent(&windowEvent))
		{
			if (SDL_QUIT == windowEvent.type)
			{
				break;
			}
		}

		SDL_BlitSurface(imageSurface, NULL, windowSurface, NULL);

		SDL_UpdateWindowSurface(window);
		// -----------------------------------------------------
		// Draw the Text
		// -----------------------------------------------------
		// SDL_Color fgC1 = {0xff, 0xff, 0xff}, bgC1 = {0x00, 0x00, 0xa0};							  // white text on blue background
		// SDL_Color fgC2 = {0x00, 0x00, 0x00}, bgC2 = {0xff, 0x00, 0xff};							  // black text on magenta background
		// drawText(windowSurface, (char *)"Hello World! @ (x=50, y=100)", 18, 50, 100, fgC1, bgC1); // 18 pt @ (x=100,y=150)
		// drawText(windowSurface, (char *)"arial.ttf 	@ (x=200, y=150)", 16, 200, 150, fgC2, bgC2);  // 16 pt @ (x=100,y=150)
		// SDL_UpdateWindowSurface(window);
		// TTF_Quit();

		// SDL_Delay(3000); // Wait 3 seconds
	}

	SDL_FreeSurface(imageSurface);
	SDL_FreeSurface(windowSurface);

	imageSurface = NULL;
	windowSurface = NULL;

	SDL_DestroyWindow(window);
	SDL_Quit();

	return EXIT_SUCCESS;
}