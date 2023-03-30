#include "Vector2.h"

bool checkCollisionVector2(Vector2 location1, Vector2 size1, Vector2 location2, Vector2 size2)
{
	if (((location1.x > location2.x && location1.x < location2.x + size2.x) ||
		(location1.x + size1.x > location2.x && location1.x + size1.x < location2.x + size2.x)) &&
		((location1.y > location2.y && location1.y < location2.y + size2.y) ||
			(location1.y + size1.y > location2.y && location1.y + size1.y < location2.y + size2.y)))
	{
		return true;
	}
	return false;
}