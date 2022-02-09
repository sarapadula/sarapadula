
#include<fstream>
#include <iostream>
using namespace std;
#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

int main()
{
    fstream myFile;
    fstream newFile;
    string string;
    double a, b, c;
    myFile.open("shapes.txt", ios::in);
    int property;
    newFile.open("output.txt", ios::app);
    if (!myFile.is_open())
    {
        cout << "It Failed" << endl;
    }
    while (!myFile.eof())
    {
        myFile >> string;
        Shape shape(string);
        if (shape.getShape() == "rectangle")
        {
            myFile >> a >> b;
            cout << "Type 1 if you would like the area of the rectangle, type 2 if you would like its perimeter." << endl;
            cin >> property;
            if (property == 1)
            {
                Rectangle rectangle(a, b);
               
                if (newFile.is_open())
                {
                    newFile << shape.getShape() << " AREA: " << rectangle.getArea() << endl;
                }
                cout << shape.getShape() << " AREA: " << rectangle.getArea() << endl;

            }
            else if (property == 2)
            {
                Rectangle rectangle(a, b);
               
                if (newFile.is_open())
                {
                    newFile << shape.getShape() << " PERIMETER: " << rectangle.getPerimeter() << endl;
                }
                else
                {
                    cout << rectangle.getErrorMessage() << endl;
                }
                cout << shape.getShape() << " PERIMETER: " << rectangle.getPerimeter() << endl;
            }
        }
        else if (shape.getShape() == "triangle")
        {
            myFile >> a >> b >> c;
            cout << "Type 1 if you would like the area of the triangle, type 2 if you would like its perimeter." << endl;
            cin >> property;
            if (property == 1)
            {
                Triangle triangle(a, b, c);
                
                if (newFile.is_open())
                {
                    newFile << shape.getShape() << " AREA: " << triangle.getArea() << endl;
                }
                cout << shape.getShape() << " AREA: " << triangle.getArea() << endl;

            }
            else if (property == 2)
            {
                Triangle triangle(a, b, c);
                
                if (newFile.is_open())
                {
                    newFile << shape.getShape() << " PERIMETER: " << triangle.getPerimeter() << endl;
                }
                else
                {
                    cout << triangle.getErrorMessage() << endl;
                }
                cout << shape.getShape() << " PERIMETER: " << triangle.getPerimeter() << endl;
            }
        }
        else if (shape.getShape() == "circle")
        {
            myFile >> a;
            cout << "Type 1 if you would like the area of the circle, type 2 if you would like its perimeter." << endl;
            cin >> property;
            if (property == 1)
            {
                Circle circle(a);
                
                if (newFile.is_open())
                {
                    newFile << shape.getShape() << " AREA: " << circle.getArea() << endl;
                }
                cout << shape.getShape() << " AREA: " << circle.getArea() << endl;

            }
            else if (property == 2)
            {
                Circle circle(a);
                
                if (newFile.is_open())
                {
                    newFile << shape.getShape() << " PERIMETER: " << circle.getPerimeter() << endl;
                }
                else
                {
                    cout << circle.getErrorMessage() << endl;
                }
                cout << shape.getShape() << " PERIMTER: " << circle.getPerimeter() << endl;
            }
        }
        else
        {
            cout << "Not valid entry";
        }
        continue;
    }



    return 0;
}


