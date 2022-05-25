//---TUPLE-ClASS---//

#include "Cartesian3D.h"

//---TUPLE---//

//Constructors//
Math::Tuple::Tuple()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Math::Tuple::Tuple(const long& x, const long& y, const long& z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

//Operators//
Math::Tuple Math::Tuple::operator+(const Math::Tuple& t)
{
	return Math::Tuple(this->x + t.x, this->y + t.y, this->z + t.z);
}

Math::Tuple Math::Tuple::operator-(const Math::Tuple& t)
{
	return Math::Tuple(this->x - t.x, this->y - t.y, this->z - t.z);
}


//---POINT---//

//Constructors//
Math::Point::Point()
{
	this->tuple = Tuple();
}

Math::Point::Point(const Math::Tuple& tuple)
{
	this->tuple = tuple;
}

Math::Point::Point(const long& x, const long& y, const long& z)
{
	this->tuple = Tuple(x, y, z);
}

//Operators//
Math::Point Math::Point::operator+(const Math::Vector& v)
{
	return this->tuple + v.tuple;
}

void Math::Point::operator+=(const Math::Vector& v)
{
	*this = *this + v;
}

Math::Point Math::Point::operator-(const Math::Vector& v)
{
	return Point(this->tuple - v.tuple);
}

void Math::Point::operator-=(const Math::Vector& v)
{
	*this = *this - v;
}

Math::Vector Math::Point::operator-(const Math::Point& p)
{
	return Math::Vector(this->tuple - p.tuple);
}

//Functions//

void Math::Point::drawPoint()
{
	std::cout << this->tuple.x << this->tuple.y << this->tuple.z << std::endl;
}



//---VECTOR---//

//Constructors//
Math::Vector::Vector()
{
	this->tuple = Tuple();
}

Math::Vector::Vector(const Tuple& tuple)
{
	this->tuple = tuple;
}

Math::Vector::Vector(const long& x, const long& y, const long& z)
{
	this->tuple = Tuple(x, y, z);
}

//Operators//
Math::Vector Math::Vector::operator+(const Vector& v)
{
	return Vector(this->tuple + v.tuple);
}

void Math::Vector::operator+=(const Vector& v)
{
	*this = *this + v;
}

Math::Vector Math::Vector::operator-(const Vector& v)
{
	return Vector(this->tuple - v.tuple);
}

void Math::Vector::operator-=(const Vector& v)
{
	*this = *this - v;
}