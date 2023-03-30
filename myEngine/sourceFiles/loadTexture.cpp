#include "loadTexture.h"

#include <iostream>

SDL_Texture* loadTexture(SDL_Renderer* renderer, const char* filePath)
{
	SDL_Texture* texture = NULL;
	texture = IMG_LoadTexture(renderer, filePath);

	if (texture == NULL)
		std::cout << "failed to load texture. ERROR: " << SDL_GetError() << std::endl;

	return texture;
}