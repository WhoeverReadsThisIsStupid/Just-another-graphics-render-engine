#pragma once
namespace Math
{
	class Vector3D
	{
	private:
		//Variables//
		float x;
		float y;
		float z;
	public:
		//Constructors//
		Vector3D();
		Vector3D(const float& x, const float& y, const float& z);

		//Operators//
		
		//Make a new vector
		inline Vector3D operator new(const float& x, const float& y, const float& z);

		//Add vector to vector
		inline Vector3D operator+(const Vector3D& vec);
		inline void operator+=(const Vector3D& vec);

		//Subtract vector from vector
		inline Vector3D operator-(const Vector3D& vec);
		inline void operator-=(const Vector3D& vec);

		//Divide vector
		inline Vector3D operator/(const float& divisor);
		inline void operator/=(const float& divisor);

		//Multiply vector
		inline Vector3D operator*(const float& factor);
		inline void operator*=(const float& factor);

		//Functions//
		//Draw a 3 dimensional point
		void drawPoint();

		//Read access to x
		inline float X();

		//Read access to y
		inline float Y();

		//Read access to z
		inline float Z();
	};
}
