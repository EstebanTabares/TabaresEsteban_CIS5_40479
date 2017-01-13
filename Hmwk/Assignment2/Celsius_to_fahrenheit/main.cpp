//Celsius to Fahrenheit
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    double celsius, fahr;
    cout << "What is the temperature that you want to convert from Celsius to Fahrenheit?\n";
    cin>>celsius;
    fahr = 9*celsius/5 + 32;
    cout << "The Fahrenheit temperature is " << fahr;
    
    
    return 0;
}
  
