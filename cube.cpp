/*
    Write a C++ program to find cube of any number using function.

    Write a C++ program to find diameter, circumference and area of circle using functions.

    Write a C++ program to check whether a number is even or odd using functions.

    Write a C++ program to find maximum and minimum between two numbers using functions.

    Write a C++ program to check a number is prime, perfect number or not.

    Write a C++ program to find all prime numbers between given interval using functions.
*/
#include <iostream>
#include <conio.h>
using namespace std;

class cube
{
private:
    int num;

public:
    int cube_any_number(int n)
    {
        return n * n * n;
    }
};

int main()
{
    int num;
    cout << "Enter the Number = ";
    cin >> num;
    cube obj;
     cout<<"The Cube of a Number is = "<<obj.cube_any_number(num);

     getch();
}