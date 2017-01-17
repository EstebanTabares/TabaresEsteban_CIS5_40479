//Body Mass Index
#include <iostream>

using namespace std;

int main(){
	double height, weight;
	cout << "Enter your height (in inches): ";
	cin >> height;
	cout << "Enter your weight (in pounds): ";
	cin >> weight;
	double BMI = weight*703/(height*height);
	cout<< "Your body mass index is "<<BMI<<", ";
	if (BMI >= 18.5 and BMI <= 25)
		cout<<"your weight is optimal";
	if (BMI < 18.5)
		cout<<"you are considered underweight";
	if (BMI > 25)
		cout<<"you are considered overweight";
	
	return 0;
}
