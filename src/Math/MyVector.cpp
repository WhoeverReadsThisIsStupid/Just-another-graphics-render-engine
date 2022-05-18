//Vector class that does some super amazing math

#include "MyVector.h"

MyVector::Tuple::Tuple(const long& x, const long& y, const long& z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

MyVector::Point::Point(const MyVector::Tuple& tuple)
{
	this->tuple = tuple;
}