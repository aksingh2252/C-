#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int mat1[2][2] = {{1, 2}, {3, 4}};
    int mat2[2][2] = {{1, 2}, {3, 4}};
    int sum[2][2];
    int i, j;

    cout << "value of first matrix : " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << mat1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "value of second matrix : " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << mat2[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    cout << "value of sum matrix : " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    getch();
    return 0;
}