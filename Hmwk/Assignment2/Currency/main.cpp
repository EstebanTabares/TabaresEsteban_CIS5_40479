//Currency
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    const double euros_per_dollar = 0.94;
    const double yen_per_dollar = 115.02;
    double dollars;
    cout << "Enter the amount of dollar you wish to convert to Euros and Japanese Yen \n";
    cin >> dollars;
    cout<< fixed<<setprecision(2);
    cout << "The equivalence to $"<<dollars<<" in Euros is: "<<dollars*euros_per_dollar<<endl;
    cout << "The equivalence to $"<<dollars<<" in Japanese Yen is: "<<dollars*yen_per_dollar<<endl;
    return 0;
}
  
