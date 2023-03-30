#include "Rectangle.h"

bool checkCollisionVector2(Rectangle rect1, Rectangle rect2)
{
	if (((rect1.x > rect2.x && rect1.x < rect2.x + rect2.x) ||
		(rect1.x + rect1.x > rect2.x && rect1.x + rect1.x < rect2.x + rect2.x)) &&
		((rect1.y > rect2.y && rect1.y < rect2.y + rect2.y) ||
		(rect1.y + rect1.y > rect2.y && rect1.y + rect1.y < rect2.y + rect2.y)))
	{
		return true;
	}
	return false;
}