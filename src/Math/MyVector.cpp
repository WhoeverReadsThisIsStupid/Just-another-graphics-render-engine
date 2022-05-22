//---VECTOR-CLASS---//

#include "MyVector.h"


Math::Vector::Vector(const Tuple& tuple)
{
	this->tuple = tuple;
}

Math::Vector::Vector(const long& x, const long& y, const long& z)
{
	this->tuple = Tuple(x, y, z);
}

Math::Vector Math::Vector::operator+(const Vector& v)
{
	return Vector(this->tuple + v.tuple);
}

Math::Vector Math::Vector::operator-(const Vector& v)
{
	return Vector(this->tuple - v.tuple);
}