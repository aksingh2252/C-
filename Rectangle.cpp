/*Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
Implement member functions to calculate the rectangle's area and perimeter.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle {
    private:
    float length,width;

    public:
    float var(float l ,float b){
        length=l;
        width=b;
    }
    float Area(){
        return length*width;
    }
    float Perimeter(){
        return 2*(length+width);
    }
};
int main(){
    float length,breath;
    cout<<"Enter the Length = ";
    cin>>length;
    cout<<"Enter the Breath = ";
    cin>>breath;

    Rectangle obj;
    obj.var(length, breath);
   cout<<"Area of Rectangle = "<< obj.Area()<<endl;
   cout<<"Perimeter of Rectangle = "<<obj.Perimeter();
   getch();
} 
