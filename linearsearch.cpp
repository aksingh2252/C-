#include <iostream>
#include <conio.h>
using namespace std;
int find(int arr[], int traget)
{
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == traget)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 8, 9, 6, 5, 7};
    int traget = 5;

    cout << "Element at index " << find(arr, traget);

    getch();
    return 0;
}