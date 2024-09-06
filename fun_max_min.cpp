// Write a C++ program to find maximum and minimum between two numbers using functions.
#include <iostream>
#include <conio.h>
using namespace std;

int max_min(int a, int b)
{
    if (a > b)
    {
        cout << "Maximun Number is " << a << endl;
        cout << "Minimum Number is " << b;
    }
    else
    {
        cout << "Maximun Number is " << b << endl;
        cout << "Minimum Number is " << a;
        
    }
}
int main()
{
    int x, y;
    cout << "Enter the first Number = ";
    cin >> x;
    cout << "Enter the second Number ";
    cin >> y;
    max_min(x, y);
    getch();
    return 0;
}