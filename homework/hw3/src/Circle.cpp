#include "Circle.h"
Circle::Circle(double a)
{
	Side1 = a;
	Area = 0;
	Perimeter = 0;
	Error = "ERROR: Cannot retrieve the circle";
}
double Circle::getArea()
{
	Area = Side1 * 2 * 3.14;
	return Area;
}
double Circle::getPerimeter()
{
	Perimeter = 3.14 * (Side1 * Side1);
	return Perimeter;
}
string Circle::getErrorMessage()
{
	return Error;
}
