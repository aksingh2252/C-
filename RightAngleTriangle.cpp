/*
Write a program in C++ to display a pattern like a right angle triangle using an asterisk.
Sample Output:
Input number of rows: 5
*
**
***
****
*****
 */
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, num;
    cout << "Enter the Row = ";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    getch();
}