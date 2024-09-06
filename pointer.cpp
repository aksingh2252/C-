#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;
    cout << "Enter the Number = ";
    cin >> a;
    cout << "The value of a  = " << a << endl; //printing the value of A
    cout << "The address of a  = " << &a << endl; //printing the address of A

    int *b = &a;
    cout << "The address of A usingh pointer  = " << b << endl; //printing the address of A  using pointer 
    cout << "The value at  A  using poniter  B  = " << *b << endl<<endl; //printing the value of A using pointer

    int **c = &b;
    cout << "The address of b  = " << *c << endl; //printing the address of A  using pointer
    cout<<"The address of pointer b  store at pointer c = "<<c;//printing the address of pointer B  using pointer another Poniter 


    getch();
}