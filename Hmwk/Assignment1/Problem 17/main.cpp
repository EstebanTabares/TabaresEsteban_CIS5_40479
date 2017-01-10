// Problem #17. Stock Commission.
#include <iostream>
using namespace std;

int main()
{
    double shares = 600;
    double perShare = 21.77;
    double percentCom = 0.02;
    double stockAlone = shares * perShare;
    double commission = stockAlone * percentCom;
    cout << "The amount paid for the stock alone is: $" << stockAlone <<endl;
    cout << "The amount of the commission is: $" << commission <<endl;
    cout << "The total amount paid is: $" << commission + stockAlone;
    return 0;
}

