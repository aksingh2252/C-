/*Write a program in C++ to display n terms of natural numbers and their sum.
Sample Output:
Input a number of terms: 7
The natural numbers upto 7th terms are:
1 2 3 4 5 6 7
The sum of the natural numbers is: 28*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int num, i, sum = 0;

    cout << "Enter the last Number = ";
    cin >> num;
    cout << "The natural numbers upto " <<num<< " terms are:" << endl;
    for (i = 1; i <= num; i++)
    {
        sum += i;
        cout << i << " ";
    }
    cout << endl << "The sum of the natural numbers is:" << sum;
    getch();
}