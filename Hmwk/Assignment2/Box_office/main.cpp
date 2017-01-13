//program to calculate gross and net profit of a movie theater.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    double aTickets, cTickets;
    string movieName;
    cout << "What is the name of the movie? \n";
    getline (cin, movieName);
    cout << "How many tickets to adults were sold? \n";
    cin >> aTickets;
    cout << "How many tickets to children were sold? \n";
    cin >> cTickets;
    double gProfit = aTickets * 6.00 + cTickets * 3.00;
    double nProfit = gProfit *0.2;
    double amountPaid = gProfit - nProfit;
    cout << left<<setw(50)<<"Movie Name: "<<right<<"'"<<movieName<<"'"<<endl;
    cout<<left<<setw(50)<<"Adult Tickets Sold: "<<aTickets<<endl;
    cout<<left<<setw(50)<<"Children Tickets Sold: "<<cTickets<<endl;
    cout<<left<<setw(50)<<"Gross Box Office Profit: "<<"$"<<gProfit<<endl;
    cout<<left<<setw(50)<<"Net Box Office Profit: "<<"$"<<nProfit<<endl;
    cout<<left<<setw(50)<<"Amount paid to distributor: "<<"$"<<amountPaid<<endl;
    return 0;
}

