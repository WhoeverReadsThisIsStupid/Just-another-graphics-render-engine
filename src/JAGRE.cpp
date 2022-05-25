// JAGRE.cpp: Startingpoint of this Engine

#include "JAGRE.h"

int main()
{
	std::cout << "Hello JAGRE." << std::endl;
	Math::Point point1 = Math::Point(1,2,1);
	Math::Point point2 = Math::Point(0, 4, 4);
	Math::Vector vector1 = Math::Vector(2, 0, 0);

	Math::Vector vector2;

	point1.drawPoint();
	point2.drawPoint();

	vector2 = point1 - point2;
	vector1 += vector2;

	point1 += vector1;
	point1.drawPoint();

	point2 -= vector2;
	point2.drawPoint();

	return 0;
}
