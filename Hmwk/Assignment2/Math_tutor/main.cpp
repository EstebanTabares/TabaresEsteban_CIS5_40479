//Math tutor program
#include <cmath>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
   
    unsigned seed= time(0);
    srand(seed);
    int x=1+rand()%998,y=1+rand()%998;
    cout<<endl<<"Solve the sum in a piece of paper. Whenever you have the answer, \npress ENTER to see the solution.\n";
    cout<<fixed<<setw(10);
    cout<<x<<endl<<setw(7)<<"+"<<setw(3)<<y<<endl<<setw(10)<<"-------";
   
    cin.get();
    cout<<setw(10)<<x+y;
   
    return 0;
}

