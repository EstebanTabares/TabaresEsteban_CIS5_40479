//Mass and Weight
#include <iostream>

using namespace std;

int main(){
	double mass, weight;
	cout<<"Enter an object mass (in kilograms): ";
	cin >> mass;
	weight = mass * 9.8;
	cout<<"The weight of the object is "<<weight<<" newtons";
	if (weight > 1000)
		cout<<", it is too heavy";
	else if (weight < 10)
		cout<<", it is too light";
	
	return 0;
}
