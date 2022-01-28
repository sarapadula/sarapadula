#include <iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{

    fstream myFile;
    fstream newFile;
    double a, b, c;
    string shape;
    myFile.open("shapes.txt", ios::in);//read
    int property;

    if (!myFile.is_open())
    {
        cout << "It failed" << endl;
        return 0;
    }
    while (!myFile.eof())
    {
        myFile >> shape;
        if (shape == "Rectangle")
        {
            myFile >> a >> b;
            cout << "Type 1 if you would like the area of the rectangle, type 2 if you would like its perimeter." << endl;
            cin >> property;
            if (property == 1)
            {
                double rarea;
                rarea = (a * b);
                newFile.open("output.txt", ios::app); //append mode
                if (newFile.is_open())
                {
                    newFile << shape << " Area: " << rarea << endl;
                    newFile.close();
                }


            }
            else if (property == 2)
            {
                double rper;
                rper = a + b;
                newFile.open("output.txt", ios::app); //append mode
                if (newFile.is_open())
                {
                    newFile << shape << " Perimeter: " << rper << endl;
                    newFile.close();
                }
            }
            else
            {
                cout << "Not Valid Entry" << endl;
            }

        }
        else if (shape == "Triangle")
        {
            myFile >> a >> b >> c;
            cout << "Type 1 if you would like the area of the triangle, type 2 if you would like its perimeter." << endl;
            cin >> property;
            if (property == 1)
            {
                double area;
                area = .5 * (a * b);
                newFile.open("output.txt", ios::app); //append mode
                if (newFile.is_open())
                {
                    newFile << shape << " Area: " << area << endl;
                    newFile.close();
                }

            }
            else if (property == 2)
            {
                double per;
                per = a + b + c;
                newFile.open("output.txt", ios::app); //append mode
                if (newFile.is_open())
                {
                    newFile << shape << " Perimeter: " << per << endl;
                    newFile.close();
                }
            }
            else
            {
                cout << "Not Valid Entry" << endl;
            }

        }
        else if (shape == "Circle")
        {
            myFile >> a;
            cout << "Type 1 if you would like the area of the circle, type 2 if you would like its circle." << endl;
            cin >> property;
            if (property == 1)
            {
                double oarea;
                oarea = 2 * 3.14 * a;
                newFile.open("output.txt", ios::app); //append mode
                if (newFile.is_open())
                {
                    newFile << shape << " Area: " << oarea << endl;
                    newFile.close();
                }

            }
            else if (property == 2)
            {
                double oper;
                oper = 3.14 * (a * a);
                newFile.open("output.txt", ios::app); //append mode
                if (newFile.is_open())
                {
                    newFile << shape << " Perimeter: " << oper << endl;
                    newFile.close();
                }
            }
            else
            {
                cout << "Not Valid Entry" << endl;
            }
        }

    }
    myFile.close();



    system("pause>0");

}