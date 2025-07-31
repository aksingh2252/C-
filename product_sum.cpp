#include <iostream>
#include <conio.h>
using namespace std;
int sub(int num)
{

    int sum = 0, product = 1;
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + digit;
        product = product * digit;

        num = num / 10;
    }

    int ans = product - sum;

    return ans;
}

int main()
{
    int num;
    cout << "Enter the numbre = ";
    cin >> num;

    cout << "Different " << sub(num);

    getch();
    return 0;
}