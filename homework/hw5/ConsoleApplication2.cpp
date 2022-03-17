
#include <time.h>
#include <iostream>
#include <iomanip> 
#include<fstream>
#include<vector>
#include<string>
#include <cstring>
#include <algorithm>
#include <windows.h>
#include <mmsystem.h>
#include<stdio.h>
#include <cstdio>
#include <regex>

using namespace std;


int main()
{
    clock_t start;
    clock_t end;
    start = clock();
    int size;
   
    
    cout << "********Welcome to Factorial Fun!*******" << endl;
    cout << "Would you like the factorial of 1 number or the combination of 2 numbers? Enter 1 or 2. " << endl;
    cin >> size;
    if (size == 1)
    {
        int numbers[1]{};
        for (int i = 0; i < size; i++)
        {
            int dat;
            cout << "Enter data: " << endl;
            cin >> dat;
            numbers[i] = dat;


        }
        int factorial = 1;
        for (int i = 1; i <= numbers[0]; i++) {
            factorial = factorial * i;
        }

        cout << numbers[0] << "!=" << factorial << endl;

        end = clock();

        // Calculating total time taken by the program.
        double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
        cout << "Time taken by program is : " << fixed
            << time_taken << setprecision(5);
        cout << " sec " << endl;


        return 0;

    }
    else if (size == 2)
    {
        int numbers[2]{};
        for (int i = 0; i < size; i++)
        {
            int dat;
            cout << "Enter data: " << endl;
            cin >> dat;
            numbers[i] = dat;
        }

        int factorial = 1;
        for (int i = 1; i <= numbers[0]; i++) {
            factorial = factorial * i;
        }
        int combination = 1;
        for (int i = 1; i <= numbers[1]; i++) {
            combination = combination * i;
        }
        int subtraction = numbers[0] - numbers[1];
        int one = 1;
        for (int i = 1; i <= subtraction; i++) {
            one = one * i;
        }
        int c = factorial / (combination * one);


        cout << c << endl;

        end = clock();

        // Calculating total time taken by the program.
        double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
        cout << "Time taken by program is : " << fixed
            << time_taken << setprecision(5);
        cout << " sec " << endl;


        return 0;
    }
    else
    {
        cout << "That is not valid";
        return 0;
    }
  

}


