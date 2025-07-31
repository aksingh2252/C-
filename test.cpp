#include <iostream>
#include <conio.h>
using namespace std;
// 0= not prime // 1= prime
bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int n;
    cout << "enter Num ";
    cin >> n;

    if (isprime(n))
    {
        cout << "is PRime";
    }
    else
    {
        cout << "Not Prime";
    }

    getch();
    return 0;
}