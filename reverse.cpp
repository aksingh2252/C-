#include <iostream>
#include <conio.h>
using namespace std;
void arrayreverse(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    arrayreverse(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    getch();
    return 0;
}