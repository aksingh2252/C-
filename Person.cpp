/*Write a C++ program to create a class called Person that has private member variables for name, age and country.
 Implement member functions to set and get the values of these variables.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Person{
    private:
    string Name;
    int Age;
    string Country;

    public:
    void detail( string n , int a , string c ){
        Name = n;
        Age = a;
        Country = c;
    }
};
int main(){
   string Name ,Country;
   int Age;
    cout<<"Enter Your Name = ";
    getline(cin , Name);

    cout<<"Enter Your Age = ";
    cin>>Age;
    cout<<"Enter Your Country = ";
    cin>>Country;

    Person obj;
    obj.detail(Name,Age,Country);
    cout<<endl<<"Name = "<<Name <<endl;
    cout<<"Age = "<<Age <<endl;
    cout<<"Counrty = "<<Country;
    getch();
}