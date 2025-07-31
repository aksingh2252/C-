#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;

int main()
{
    int size, i;
    cout << "Enter size of array = ";
    cin >> size;
    int arr[size] = {};
    int firstmax =arr[0] , secondmax = arr[0];

    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
   

    for (i = 0; i < size; i++)
    {
        if (arr[i] > firstmax)
        {
            firstmax = arr[i];
        }
    }

    cout << "Largest Number is = " << firstmax << endl;
    for (i = 0; i < size; i++)
    {
        if (arr[i] > secondmax && arr[i] < firstmax)
        {
            secondmax = arr[i];
        }
    }

    cout << "Second largest Numbeer is = " << secondmax;

    getch();
    return 0;
}
