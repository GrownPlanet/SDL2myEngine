#include <iostream>

#include <SDL2/SDL.h>
#include <SDL2/SDL_IMAGE.h>

#include "myEngine.h"

int main(int argc, char* argv[])	
{
	SDL_Init(SDL_INIT_EVERYTHING);

	const int windowHeight = 800;
	const int windowWidth = 450;

	SDL_Window* window = SDL_CreateWindow("Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, windowHeight, windowWidth, SDL_WINDOW_SHOWN);
	
	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

	
	;

	SDL_Texture* texture1 = loadTexture(renderer, "res/texture1.png");

	Vector2 location = {10, 100};
	Vector2 size = {75, 75};

	bool running = true;

	while (running)
	{
		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT) // check if the window was closed
			{
				running = false; // closing the window
			}
		}

		Render(0, 0, 50, 50, texture1, renderer);

		SDL_RenderClear(renderer); // clearing the screan

		RenderV(location, size, texture1, renderer);

		SDL_RenderPresent(renderer); // rendering the current screen
	}

	return 0;
}