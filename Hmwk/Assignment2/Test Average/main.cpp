//Test scores average
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double score1,score2,score3,score4,score5;
    cout << "What is your test score #1?\n";
    cin>>score1;
    cout << "What is your test score #2?\n";
    cin>>score2;
    cout << "What is your test score #3?\n";
    cin>>score3;
    cout << "What is your test score #4?\n";
    cin>>score4;
    cout << "What is your test score #5?\n";
    cin>>score5;
    double average = (score1+score2+score3+score4+score5)/5;
    cout<<"The average of the 5 scores is: "<<setprecision(1)<<showpoint<<fixed<<average;
    return 0;
}
  
