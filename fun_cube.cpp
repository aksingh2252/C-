// Write a C++ program to find cube of any number using function. 
#include <iostream>
#include <conio.h>
using namespace std;

int cube_of_number(int n)
{
    return n * n * n;
}
int main()
{
    int num;
    cout << "Enter the NUbmer = ";
    cin >> num;
    cout << "Cube of " << num << " is = " << cube_of_number(num);
    getch();
}