#pragma once

#include "MyVector.h"

namespace Math
{
	class Point
	{
	public:
		//x, y, z
		Tuple tuple;

		//Constructors
		Point(const Tuple& tuple);
		Point(const long& x, const long& y, const long& z);


		//Add vector to point
		Point operator+(const Vector& v);

		//Subtract vector from point
		Point operator-(const Vector& v);

		//Subtract point from point
		Vector operator-(const Point& p);
	};
}

