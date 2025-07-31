#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int num, n, rem, rev = 0;
    cout << "Enter the Number = ";
    cin >> num;
    n = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }

    if (n == rev)
    {
        cout << "Palindrome Number = ";
    }
    else
    {
        cout << "Not Palindrome Number ";
    }
    getch();
    return 0;
}