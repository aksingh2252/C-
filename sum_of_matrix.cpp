#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the size of Row = ";
    cin >> row;
    cout << "Enter the size of columns = ";
    cin >> col;

    int mat1[row][col], mat2[row][col], mat_sum[row][col];

    //  Taking input first martix value
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat1[i][j];
        }
    }

    //  Taking input second martix value
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> mat2[i][j];
        }
    }

    // Displaying the first matrix
    cout << "value of second matrix = " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    // Displaying the second matrix
    cout << "value of second matrix = " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    // Adding  of martix

   
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            mat_sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Displaying the sum matrix
    cout << "The sum of the two matrices is:" << endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cout << mat_sum[i][j] << " ";
        }
        cout << endl;
    }
    getch();
    return 0;
}