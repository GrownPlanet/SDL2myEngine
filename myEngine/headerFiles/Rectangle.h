#pragma once

struct Rectangle {
	Rectangle(float x, float y, float width, float height) : x(x), y(y), width(width), height(height) {}
	float x;
	float y;
	float width;
	float height; 
};

bool checkCollisionVector2(Rectangle rect1, Rectangle rect2);