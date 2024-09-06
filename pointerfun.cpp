#include <iostream>
#include <conio.h>
using namespace std;
void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{

    int x, y;
    cout << "Enter the value of X = ";
    cin >> x;
    cout << "Enter the value of y = ";
    cin >> y;

    cout << "The value of x is " << x << " and the value of y is " << y << endl;

    swappointer(&x, &y);
    cout << "The value of x is " << x << " and the value of y is " << y;

    getch();
    return 0;
}
