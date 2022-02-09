#pragma once

#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>

using namespace std;
class Shape
{
protected:
	string myname;

public:
	Shape();
	Shape(string);

	string getShape();
	void setShape(string);
};
#endif SHAPE_H_

