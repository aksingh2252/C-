#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, n;
    int num;
    cout << "Enter the of Size = ";
    cin >> n;
    int arr[n];

    cout << "Enter the Value of Array = " << endl
         << endl;
    for (j = 0; j < 5; j++)
    {
        cin >> arr[j];
    }

    cout << "Printing the value of Array: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "The value at " << i << " index is = " << arr[i] << endl;
    }
    getch();
}