//Average rainfall
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string month1, month2, month3;
    double rain1, rain2, rain3;
    cout << "What is the month #1?\n";
    cin>>month1;
    cout << "What is the month #2?\n";
    cin>>month2;
    cout << "What is the month #3?\n";
    cin>>month3;
    cout<< "What is the amount of rain (in inches) that fell in " <<month1<<"?\n";
    cin >> rain1;
    cout<< "What is the amount of rain (in inches) that fell in " <<month2<<"?\n";
    cin >> rain2;
    cout<< "What is the amount of rain (in inches) that fell in " <<month3<<"?\n";
    cin >> rain3;
    cout<< "The average rainfall for "<<month1<<", "<<month2<<" and "<<month3<<" is "<<(rain1 + rain2 + rain3)/3<< " inches";
    
    
    return 0;
}
  
