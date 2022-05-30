#include "Vectors.h"
//TODO: Inlude Grafics API 


/// <summary>
/// Base constructor for three dimensional vector
/// </summary>
Math::Vector3D::Vector3D()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

/// <summary>
/// constructor for three dimensional vector
/// </summary>
/// <param name="x">X-Coordinate</param>
/// <param name="y">Y-Coordinate</param>
/// <param name="z">Z-Coordinate</param>
Math::Vector3D::Vector3D(const float& x, const float& y, const float& z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void Math::Vector3D::drawPoint()
{
	//TODO: Call to an graphics api to draw the point.
}

/// <summary>
/// Accesses the X-Value from this vector
/// </summary>
/// <returns>X-Value</returns>
inline float Math::Vector3D::X()
{
	return this->x;
}

/// <summary>
/// Accesses the Y-Value from this vector
/// </summary>
/// <returns>Y-Value</returns>
inline float Math::Vector3D::Y()
{
	return this->y;
}

/// <summary>
/// Accesses the Z-Value from this vector
/// </summary>
/// <returns>Z-Value</returns>
inline float Math::Vector3D::Z()
{
	return this->z;
}


/// <summary>
/// Adds a vector to this vector and returns the result as a new vector.
/// </summary>
/// <param name="vec">Vector you want to add.</param>
/// <returns>The result of the addition.</returns>
inline Math::Vector3D Math::Vector3D::operator+(const Math::Vector3D& vec)
{
	return Math::Vector3D(this->x + vec.x, this->y + vec.y, this->z + vec.z);
}

/// <summary>
/// Adds a vector to this vector.
/// </summary>
/// <param name="vec">Vector you want to add.</param>
inline void Math::Vector3D::operator+=(const Math::Vector3D& vec)
{
	*this = *this + vec;
}

/// <summary>
/// Subtracts a vector from this vector and returns the result as a new vector.
/// </summary>
/// <param name="vec">Vector you want to subtract.</param>
/// <returns>The result of the subtraction.</returns>
inline Math::Vector3D Math::Vector3D::operator-(const Math::Vector3D& vec)
{
	return Math::Vector3D(this->x - vec.x, this->y - vec.y, this->z - vec.z);
}

/// <summary>
/// Subtracts a vector from this vector.
/// </summary>
/// <param name="vec">Vector you want to subtract.</param>
inline void Math::Vector3D::operator-=(const Vector3D& vec)
{
	*this = *this - vec;
}

/// <summary>
/// Divides the vector by the divisor and returns the result as a new vector.
/// </summary>
/// <param name="divisor">Value you want to divide by.</param>
/// <returns>The result of the division.</returns>
inline Math::Vector3D Math::Vector3D::operator/(const float& divisor)
{
	return Math::Vector3D(this->x / divisor, this->y / divisor, this->z / divisor);
}

/// <summary>
/// Divides the vector by the divisor.
/// </summary>
/// <param name="divisor">Value you want to divide by.</param>
inline void Math::Vector3D::operator/=(const float& divisor)
{
	*this = *this / divisor;
}

/// <summary>
/// Multiplies the vector by the factor and returns the result as a new vector.
/// </summary>
/// <param name="factor">The factor you want to multiply by.</param>
/// <returns>The result of the multiplication.</returns>
inline Math::Vector3D Math::Vector3D::operator*(const float& factor)
{
	return Math::Vector3D(this->x * factor, this->y * factor, this->z * factor);
}

/// <summary>
/// Multiplies the vector by the factor.
/// </summary>
/// <param name="factor">The factor you want to multiply by.</param>
inline void Math::Vector3D::operator*=(const float& factor)
{
	*this = *this * factor;
}

