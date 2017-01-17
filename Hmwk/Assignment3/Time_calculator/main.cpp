//Time Calculator
#include <iostream>

using namespace std;

int main(){
	int seconds;
	cout<< "Enter the number of seconds: ";
	cin >>seconds;
	if (seconds>=86400)
		cout<<"The number of days in that many seconds is "<<seconds/86400;
	else if (seconds>=3600)
		cout<<"The number of hours in that many seconds is "<<seconds/3600;
	else if (seconds>=60)
		cout<<"The number of minutes in that many seconds is "<<seconds/60;
	else
		cout<<"The number of seconds is less than 60, therefore it is not a valid option";
}
