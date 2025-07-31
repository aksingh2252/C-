#include <iostream>
#include <conio.h>
#include <algorithm>
#include <array>
using namespace std;
int main()
{
    int i;
    int arr[] = {10, 50, 4, 19, 96, 2,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Minimum Element is = " << min << endl;
    cout << n;

    getch();
    return 0;
}