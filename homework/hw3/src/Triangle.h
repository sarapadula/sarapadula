#pragma once

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "Shape.h"
class Triangle
{
public:
	double Side1;
	double Side2;
	double Side3;
	double Area;
	double Perimeter;
	string Error;

	Triangle();
	Triangle(double, double, double);

	double getArea();
	double getPerimeter();
	string getErrorMessage();

};
#endif TRIANGLE_H_

