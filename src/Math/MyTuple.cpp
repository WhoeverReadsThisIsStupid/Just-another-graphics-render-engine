//---TUPLE-ClASS---//

#include "MyTuple.h"

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

Math::Tuple Math::Tuple::operator+(const Math::Tuple& t)
{
	return Math::Tuple(this->x + t.x, this->y + t.y, this->z + t.z);
}

Math::Tuple Math::Tuple::operator-(const Math::Tuple& t)
{
	return Math::Tuple(this->x - t.x, this->y - t.y, this->z - t.z);
}