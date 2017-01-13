//Miles per gallon
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double nGallons,miles;
    cout<<"How many gallons can your car hold? "<<endl;
    cin>>nGallons;
    cout<<"How many miles can your car drive on a full tank? "<<endl;
    cin>>miles;
    cout<<"The number of miles per gallon that your car uses is: "<< miles/nGallons;
    return 0;
}