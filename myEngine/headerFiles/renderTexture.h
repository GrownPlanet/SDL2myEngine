#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_IMAGE.h>

#include "Vector2.h"
#include "Rectangle.h"

void Render(float x, float y, float width, float height, SDL_Texture* texture, SDL_Renderer* renderer);
void RenderV(Vector2 position, Vector2 size, SDL_Texture* texture, SDL_Renderer* renderer);
void RenderRect(Rectangle rect, SDL_Texture* texture, SDL_Renderer* renderer);