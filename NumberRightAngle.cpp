/*
Write a program in C++ to display the pattern like right angle triangle with number.
Sample Output:
Input number of rows: 5
1
12
123
1234
12345
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
            cout << j ;
        }
        cout << endl;
    }
    getch();
}