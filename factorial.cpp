#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r)
{

    int num = factorial(n);
    int dem = factorial(r) * factorial(n - r);
    int ans = num / dem;
    return ans;
}
int main()
{

    int n, r;
    cout << "enter Num ";
    cin >> n >> r;
    cout << "factorial is = " << ncr(n, r);
    getch();
    return 0;
}