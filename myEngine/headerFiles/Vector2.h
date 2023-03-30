#pragma once

struct Vector2
{
	Vector2(float x, float y) : x(x), y(y) {}

	float x;
	float y;
};

bool checkCollisionVector2(Vector2 location1, Vector2 size1, Vector2 location2, Vector2 size2);