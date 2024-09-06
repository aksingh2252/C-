#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, x, y;
    cout << "Enter the of Row = ";
    cin >> x;
    cout << "Enter the of columns = ";
    cin >> y;

    // Declaring the 2D array
    int arr[x][y];

    // Taking input for the elements of the array
    cout << "Enter the Value of Array = " << endl
         << endl;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    // Displaying the elements of the array

    cout << "Printing the value of Array: " << endl;
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    getch();
}