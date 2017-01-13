//Stadium seating profit
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double Atickets,Btickets,Ctickets;
    cout<<"How many Class A tickets were sold? "<<endl;
    cin>>Atickets;
    cout<<"How many Class B tickets were sold? "<<endl;
    cin>>Btickets;
    cout<<"How many Class C tickets were sold? "<<endl;
    cin>>Ctickets;
    cout<<fixed<<setprecision(2);
    cout<<"The total income generated is: $" <<Atickets*15+Btickets*12+Ctickets*9;
    return 0;
}