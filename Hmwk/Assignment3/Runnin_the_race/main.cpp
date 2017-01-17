//Running the Race
#include <iostream>
#include <string>

using namespace std;

int main(){
	string name1, name2, name3;
	double time1, time2, time3;
	cout<<"Enter the name of the first runner: ";
	cin>>name1;
	cout<<"How much time did it took for him to finish the race? ";
	cin>>time1;
	cout<<"\nEnter the name of the second runner: ";
	cin>>name2;
	cout<<"How much time did it took for him to finish the race? ";
	cin>>time2;
	cout<<"\nEnter the name of the third runner: ";
	cin>>name3;
	cout<<"How much time did it took for him to finish the race? ";
	cin>>time3;
	if (time1 >= 0 && time2 >= 0 && time3 >= 0)
	{
		if (time1 < time2 && time1 < time3)
		{
			if (time2 < time3)
				cout<<name1<<" came in first, "<<name2<<" came in second and "<<name3<<" came in third";
			else
				cout<<name1<<" came in first, "<<name3<<" came in second and "<<name2<<" came in third";
		}
		
		if (time2 < time3 && time2 < time1)
		{
			if (time3 < time1)
				cout<<name2<<" came in first, "<<name3<<" came in second and "<<name1<<" came in third";
			else
				cout<<name2<<" came in first, "<<name1<<" came in second and "<<name3<<" came in third";
		}
		
		if (time3 < time2 && time3 < time1)
		{
			if (time2 < time1)
				cout<<name3<<" came in first, "<<name2<<" came in second and "<<name1<<" came in third";
			else
				cout<<name3<<" came in first, "<<name1<<" came in second and "<<name2<<" came in third";
		}
		
		if (time1 == time2 || time2 == time3 || time1 == time3)
			cout<<"It is not possible to determine the first place, because at least two of the runners had the same time";
	}
	else
		cout<<"It is not possible to determine the first place, because at least one of the runners had a negative time";
	return 0;
}
