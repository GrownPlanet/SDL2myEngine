#include "renderTexture.h"

void Render(float x, float y, float width, float height, SDL_Texture* texture, SDL_Renderer* renderer)
{
	SDL_Rect source;
	source.x = 0;
	source.y = 0;
	source.w = width;
	source.h = height;

	SDL_Rect destination;
	destination.x = x;
	destination.y = y;
	destination.w = width;
	destination.h = height;

	SDL_RenderCopy(renderer, texture, &source, &destination);
}

void RenderV(Vector2 position, Vector2 size, SDL_Texture* texture, SDL_Renderer* renderer)
{
	SDL_Rect source;
	source.x = 0;
	source.y = 0;
	source.w = size.x;
	source.h = size.y;

	SDL_Rect destination; 
	destination.x = position.x;
	destination.y = position.y;
	destination.w = size.x;
	destination.h = size.y;

	SDL_RenderCopy(renderer, texture, &source, &destination);
}

void RenderRect(Rectangle rect, SDL_Texture* texture, SDL_Renderer* renderer)
{
	SDL_Rect source;
	source.x = 0;
	source.y = 0;
	source.w = rect.width;
	source.h = rect.height;

	SDL_Rect destination;
	destination.x = rect.x;
	destination.y = rect.y;
	destination.w = rect.width;
	destination.h = rect.height;

	SDL_RenderCopy(renderer, texture, &source, &destination);
}