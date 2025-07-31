#include <iostream>
#include <conio.h>
using namespace std;

void reversearray(int arr[], int s)
{
    int start = 0;
    int end = 4;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int s = 5;
    reversearray(arr ,s);
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    getch();
    return 0;
}