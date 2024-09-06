// Write a C++ program to find the largest element of a given array of integers.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[5] = {2, 59, 5, 85, 6};
    int i, largest = 0, second = 0;

    for (i = 0; i < 5; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "The largest element in the array is: " << largest << endl;
    getch();
    return 0;
}