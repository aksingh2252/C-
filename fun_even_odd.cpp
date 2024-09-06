// Write a C++ program to check whether a number is even or odd using functions.
#include <iostream>
#include <conio.h>
using namespace std;
void even_odd(int n)
{
    if (n % 2 == 0)
    {
        cout << "Number is Even  ";
    }
    else
    {
        cout << "Number is odd";
    }
}
int main()
{
    int num;
    cout << "Enter the number = ";
    cin >> num;
    even_odd(num);
    getch();
    return 0;
}