#pragma once
#include <iostream>

namespace Math
{
	struct Tuple
	{
	public:
		//Variables//
		long x;
		long y;
		long z;

		//Constructors//
		Tuple();
		Tuple(const long& x, const long& y, const long& z);

		//Operators//
		Tuple operator+(const Tuple& t);
		Tuple operator-(const Tuple& t);
	};

	class Vector
	{
	public:
		//Variables//
		Tuple tuple;

		//Constructors//
		Vector();
		Vector(const Tuple& tuple);
		Vector(const long& x, const long& y, const long& z);

		//Operators//
		//Add vector to vector
		Vector operator+(const Vector& v);
		void operator+=(const Vector& v);

		//Subtract vector from vector
		Vector operator-(const Vector& v);
		void operator-=(const Vector& v);
	};

	class Point
	{
	public:
		//Variables//
		//x, y, z
		Tuple tuple;

		//Constructors//
		Point();
		Point(const Tuple& tuple);
		Point(const long& x, const long& y, const long& z);

		//Operators//
		//Add vector to point
		Point operator+(const Vector& v);
		void operator+=(const Vector& v);

		//Subtract vector from point
		Point operator-(const Vector& v);
		void operator-=(const Vector& v);

		//Subtract point from point
		Vector operator-(const Point& p);

		//Functions//
		void drawPoint();
	};
}
