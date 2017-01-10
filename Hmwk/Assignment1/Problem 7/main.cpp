// Problem #7. Ocean Levels.
#include <iostream>
using namespace std;

int main()
{
    const double LEVINC = 1.5;//ocean increment rate constant
    double inc5 = LEVINC * 5;
    cout << "This is the ocean rise in 5 years= " << inc5 <<endl;
    double inc7 = LEVINC * 7;
    cout << "This is the ocean rise in 7 years= " << inc7 <<endl;
    double inc10 = LEVINC * 10;
    cout << "This is the ocean rise in 10 years= " << inc10 <<endl;
    return 0;
}

