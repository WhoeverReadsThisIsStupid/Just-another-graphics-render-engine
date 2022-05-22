#pragma once

#include "MyTuple.h"

namespace Math 
{
	class Vector
	{
	public:
		//x, y, z
		Tuple tuple;

		//Constructors
		Vector(const Tuple& tuple);
		Vector(const long& x, const long& y, const long& z);

		//Add vector to vector
		Vector operator+(const Vector& v);

		//Subtract vector from vector
		Vector operator-(const Vector& v);
	};
}
