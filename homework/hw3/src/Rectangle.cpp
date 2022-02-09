#include "Rectangle.h"
Rectangle::Rectangle(double a, double b)
{
	Side1 = a;
	Side2 = b;
	Area = 0;
	Perimeter = 0;
	Error = "ERROR: Cannot retrieve the rectangle";
}
double Rectangle::getArea()
{
	Area = (Side1 * Side2);
	return Area;

}
double Rectangle::getPerimeter()
{
	Perimeter = Side1 + Side2 + Side1 + Side2;
	return Perimeter;

}
string Rectangle::getErrorMessage()
{
	return Error;
}