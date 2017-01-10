// Problem #8. Total Purchase.
#include <iostream>
using namespace std;

int main()
{
    const double TAX = 0.6;//Sales tax
    double PItem1 = 12.95;
    cout << "Price of item 1 = $" << PItem1<<endl;
    double PItem2 = 24.95;
    cout << "Price of item 2 = $" << PItem2<<endl;
    double PItem3 = 6.95;
    cout << "Price of item 3 = $" << PItem3<<endl;
    double PItem4 = 14.95;
    cout << "Price of item 4 = $" << PItem4<<endl;
    double PItem5 = 3.95;
    cout << "Price of item 5 = $" << PItem5<<endl;
    double subT = PItem1 + PItem2 + PItem3 + PItem4 + PItem5;// summ of item prices
    cout << "Subtotal of the sale =  $" << subT<<endl;
    double sTax = TAX*subT;//multiplication of tax* the summ of item prices
    cout << "The amount of taxes is: $" << sTax <<endl;
    cout << "The total is: $" << sTax+subT;
    return 0;
}

