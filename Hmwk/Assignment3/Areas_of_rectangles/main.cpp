//Areas of rectangles
#include <iostream>

using namespace std;

int main(){
	double length1, length2, width1, width2;
	cout<<"Enter the length of the first rectangle: ";
	cin >> length1;
	cout<<"Enter the width of the first rectangle: ";
	cin >> width1;
	cout<<"Enter the length of the second rectangle: ";
	cin >> length2;
	cout<<"Enter the width of the second rectangle: ";
	cin >> width2;
	double area1, area2;
	area1 = length1*width1;
	area2 = length2*width2;
	area1 > area2? 
	cout<<"The area of the first rectangle is greater than the second one" : 
	cout<<"The area of the second rectangle is greater than the first one";
	
	
	return 0;
}
