#pragma once

namespace Math
{
	struct Tuple
	{
	public:
		long x;
		long y;
		long z;
		Tuple();
		Tuple(const long& x, const long& y, const long& z);
		Tuple operator+(const Tuple& t);
		Tuple operator-(const Tuple& t);
	};
}