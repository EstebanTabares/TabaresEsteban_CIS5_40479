// Problem #18. Energy Drink Consumption.
#include <iostream>
using namespace std;

int main()
{
    int nSurveyed = 12467, nPeopleED, nPeopleCED;
    double eDrinks = 0.14;
    nPeopleED = nSurveyed * eDrinks;
    double citrusED = 0.64;
    nPeopleCED = nPeopleED * citrusED;
    cout << "The approximate number of customers in the survey who purchase one or more energy drinks per week is : " << nPeopleED << endl;
    cout << "The approximate number of customers in the survey who prefer citrus flavored energy drinks : " << nPeopleCED;
    return 0;
}

