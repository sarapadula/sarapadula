#pragma once
#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"
class Circle
{
public:
	double Side1;
	double Area;
	double Perimeter;
	string Error;

	Circle();
	Circle(double);

	double getArea();
	double getPerimeter();
	string getErrorMessage();
};
#endif CIRCLE_H_
