/*Write a C++ program to create a class called Car that has private member variables for company, model, and year.
 Implement member functions to get and set these variables.*/
#include <iostream>
#include <conio.h>
using namespace std;
class car
{
private:
    string company, model;
    int year;

public:
    void detail(string company, string model, int year)
    {
        company = company;
        model = model;
        year = year;
    }
};
int main()
{
    string companyname, modlename;
    int launchyear;
    cout << "Enter The Company Name = ";
    getline(cin,companyname) ;
    cout << "Enter the Model Name = ";
    cin >> modlename;
    cout << "Enter The Year = ";
    cin >> launchyear;

    car obj;
    obj.detail(companyname, modlename, launchyear);
    cout<<"Company = "<<companyname<<endl <<"Model = "<<modlename <<endl <<"Year = " <<launchyear;
    getch();
}