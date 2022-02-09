#include "Triangle.h"
Triangle::Triangle(double a, double b, double c)
{
	Side1 = a;
	Side2 = b;
	Side3 = c;
	Area = 0;
	Perimeter = 0;
	Error = "ERROR: Cannot retrieve the triangle";
}
double Triangle::getArea()
{
	Area = Side1 * Side2 * 0.5;
	return Area;
}
double Triangle::getPerimeter()
{
	Perimeter = Side1 + Side2 + Side3;
	return Perimeter;
}
string Triangle::getErrorMessage()
{
	return Error;
}