//Program to get sine, cosine and tangent of an input angle in radians.
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
   double angle;
    cout << "Please enter an angle in radians: "<<endl;
    cin >> angle;
    cout<<setprecision(4)<<fixed;
    cout << "The sine of the angle is: "<<sin(angle)<<endl;
    cout << "The tangent of the angle is: "<<tan(angle)<<endl;
    cout << "The cos of the angle is: "<<cos(angle)<<endl;
   return 0;
}

