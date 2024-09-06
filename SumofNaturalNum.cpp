/* Write a program in C++ to find the sum of the first 10 natural numbers.
Sample Output:
Find the first 10 natural numbers:
---------------------------------------
The natural numbers are:
1 2 3 4 5 6 7 8 9 10
The sum of first 10 natural numbers: 55*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, sum = 0;
    cout<<"The natural numbers are:";
    for (i = 1; i <= 10; i++)
    {
        sum += i;
        cout << i << " ";
    }
    cout<< endl<<"The sum of first 10 natural numbers: " << sum;
    getch();
}