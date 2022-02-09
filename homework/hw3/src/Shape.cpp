#include "Shape.h"
#include <fstream>
#include <iostream>

Shape::Shape()
{
	myname = "Shape:default-name";
}

Shape::Shape(string n)
{
	myname = n;
}

void Shape::setShape(string n)
{
	myname = n;
}

string Shape::getShape()
{
	return myname;
}
