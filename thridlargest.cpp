// 2. Write a C++ program to find the largest three elements in an array.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[5] = {2, 59, 5, 85, 60};
    int i, largest = 0, second = 0, third = 0;

    for (i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "The largest element in the array is: " << largest << endl;

    for (i = 0; i < 5; i++)
    {
        if (arr[i] > second && arr[i] < largest)
        {
            second = arr[i];
        }
    }

    cout << "The Second largest element in the array is: " << second << endl;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > third && arr[i] < second && arr[i] < largest)
        {
            third = arr[i];
        }
    }
        cout << "The third largest element in the array is: " << third << endl;


    getch();
    return 0;
}