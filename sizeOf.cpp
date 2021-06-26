#include <iostream>
using namespace std;

int main()
{
    cout<<"The size of char is "  <<sizeof(char)<<"\n";
    cout<<"The size of int is "   <<sizeof(int)<<"\n";
    cout<<"The size of float is " <<sizeof(float)<<"\n";
    cout<<"The size of double is "<<sizeof(double)<<"\n";

    float a,b,c;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    c = a*b;
    cout<<"The product of the two numbers is: "<<c;
    return 0;
}