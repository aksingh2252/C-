#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;
int main()
{
    // vector<string> car = {"volvo", "BMW", "Ford"};
    //  cout << car[0] << endl;

    // cout << car.front() << endl;
    // cout << car.back() << endl;

    // cout << car.at(1) << endl;

    // car.push_back("Tesla");
    // cout << car.back();

    vector<int> num;
    int size;
    int element;
    cout << "Enter the Size of Vector = ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element = ";
        cin >> element;
        num.push_back(element);
    }

    // for (int i = 0; i < size; i++)
    // {

    //     cout << num.at(i) << endl;
    // }

    for (int val : num)
    {
        cout << val << endl;
    }
    getch();
    return 0;
}