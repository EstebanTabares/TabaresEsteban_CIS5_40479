//slices of a pizza
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double diameter, radius,area,slices;
    cout<<"What is the diameter of the pizza? (in inches)"<<endl;
    cin>>diameter;
    radius=diameter/2;
    area= 3.1459*pow(radius,2.0); //area of the pizza
    slices= area/14.125; // area of the pizza divided by slice size.
    cout<<setprecision(2)<<"The pizza can be divided into "<<slices<<" slices";
    
    return 0;
}

