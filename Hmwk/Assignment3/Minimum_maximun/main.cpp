//minimum/maximun program
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    cout<<"This program will calculate the larger of 2 numbers.\n";
    double num1,num2;
    cout<<"Please enter a number\n";
    cin>>num1;
    cout<<"Please enter a second number\n";
    cin>>num2;
    if(num1>num2)
        cout<<"The number "<<num1<<" is larger than "<<num2<<endl;
    else if(num2>num1)
        cout<<"The number "<<num2<<" is larger than "<<num1<<endl;
    else
        cout<<"The numbers are equal";
    return 0;
}

