/* Write a program in C++ to find the first 10 natural numbers.
Sample output:
The natural numbers are:
1 2 3 4 5 6 7 8 9 10*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i;
    cout << "The natural numbers are:"<<endl;
    for (i = 1; i <= 10; i++)
    {
        cout << i<< " ";
    }
    getch();
}