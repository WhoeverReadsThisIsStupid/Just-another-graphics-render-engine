//MyVector.h - Definition for the MyVector class


namespace MyVector 
{
	struct Tuple
	{
	private:
		long x;
		long y;
		long z;
	public:
		Tuple(const long& x, const long& y, const long& z);
		Tuple operator+(const Tuple& t);
		Tuple operator-(const Tuple& t);
		long getValue(const char& axis);
	};

	class Point
	{
	private:
		//x, y, z
		Tuple tuple;
	public:
		//Constructors
		Point(const Tuple& tuple);
		Point(const long& x, const long& y, const long& z);

		//AddVectorToPoint
		Point operator+(const Vector& v);

		//SubtractVectorFromPoint
		Point operator-(const Vector& v);

		//SubtractPointFromPoint
		Vector operator-(const Point& p);
	};

	class Vector
	{
	private:
		//x, y, z
		Tuple tuple;
	public:
		//Constructors
		Vector(const Tuple& tuple);
		Vector(const long& x, const long& y, const long& z);

		//AddVectorToVector
		Vector operator+(const Vector& v);

		//SubtractVectorFromVector
		Vector operator-(const Vector& v);
	};
}
