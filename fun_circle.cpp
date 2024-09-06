// Write a C++ program to find diameter, circumference and area of circle using functions.
#include <iostream>
#include <conio.h>
using namespace std;
float diameter(float r)
{
    float diameter = 2 * r;
    return diameter;
}
float circumference(float c)
{

    float circumference = 2 * 3.14 * c;
    return circumference;
}

float area(float a)
{
    float area = 3.14 * a * a;
    return area;
}
int main()
{
    float radius;
    cout << "Enter the Radius of circle = ";
    cin >> radius;

    cout << endl<<"The Diameter of circle is = " << diameter(radius) << endl;
    cout << "The circumference of circle is  = " << circumference(radius) << endl;
    cout << "The area of circle is = " << area(radius);
    getch();
}