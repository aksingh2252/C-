//HackerRank Question  to add and difference the value using pointer

#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

void swappointer(int *a, int *b)
{
    int sum = *a + *b;

    int sub = abs(*a - *b);
    *b = sub;
    *a = sum;
}
int main()
{

    int a, b;
    cout << "Enter the value of a = ";
    cin >> a;
    cout << "Enter the value of b = ";
    cin >> b;

    // cout << "The value of x is " << x << " and the value of y is " << y << endl;

    swappointer(&a, &b);

    cout << a << endl
         << b;

    getch();
    return 0;
}
