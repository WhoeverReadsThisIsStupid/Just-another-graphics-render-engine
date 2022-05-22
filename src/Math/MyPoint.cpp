//---POINT-CLASS---//

#include "MyPoint.h"

Math::Point::Point(const Math::Tuple& tuple)
{
	this->tuple = tuple;
}

Math::Point::Point(const long& x, const long& y, const long& z)
{
	this->tuple = Tuple(x, y, z);
}

Math::Point Math::Point::operator+(const Math::Vector& v)
{
	return this->tuple + v.tuple;
}

Math::Point Math::Point::operator-(const Math::Vector& v)
{
	return Point(this->tuple - v.tuple);
}

Math::Vector Math::Point::operator-(const Math::Point& p)
{
	return Math::Vector(this->tuple - p.tuple);
}