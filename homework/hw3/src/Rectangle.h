#pragma once
#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle: public Shape
{
public:
	double Side1;
	double Side2;
	double Area;
	double Perimeter;
	string Error;
	
	Rectangle();
	Rectangle(double, double);

	double getArea();
	double getPerimeter();
	string getErrorMessage();
};
#endif RECTANGLE_H_

