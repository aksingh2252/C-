/* Write a C++ program to implement a class called Circle that has private member variables for radius.
Include member functions to calculate the circle's area and circumference. */

#include <iostream>
#include <conio.h>
using namespace std;
class Circle
{
private:
    float radius;

public:
    float cl(int r)
    {
        radius = r;
    }

    float area()
    {
        float ar = 3.14 * radius * radius;
        return ar;
    }

    float circumference()
    {
        float cr = 2 * 3.14 * radius;
        return cr;
    }
};

int main()
{
    float r;
    cout << "Enter the Radius = ";
    cin >> r;

    Circle obj;
    obj.cl(r);
    cout << "Area of Circle = " << obj.area();
    cout << "circumference =  " << obj.circumference();

    getch();
}