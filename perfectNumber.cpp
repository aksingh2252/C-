/* Write a program in C++ to find the perfect numbers between 1 and 500.
The perfect numbers between 1 to 500 are:
6
28
496*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int start, i, j, sum = 0, last;
    cout << "Enter the Starting Number = ";
    cin >> start;
    cout << "Enter the last Number ";
    cin >> last;
    cout << endl<<"The perfect numbers between " << start << " to " << last << " are:" << endl;
    for (i = start; i <= last; i++)
    {
        sum = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
            cout << sum << endl;
    }
    getch();
}