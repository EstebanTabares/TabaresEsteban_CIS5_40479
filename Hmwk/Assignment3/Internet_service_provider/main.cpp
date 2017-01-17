//Internet service provider #2
#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;
int main()
{ 
    string packInput;
    double hoursInput;
    cout<<"Enter the amount of hours used in a month(less than 744 hours)\n";
    cin>>hoursInput;
    double 
    aux1=(10*9.95)+((hoursInput-10)*2),//auxiliary formula.
    aux2=(20*14.95)+((hoursInput-20)*1);
    if (hoursInput<=744)
    {
    cout<<"Please enter your package(ex: A,B,C)\n   *use capital letters*\n";
    cin>> packInput;
    
    
        if (packInput=="A")
        {
            if(hoursInput<=10)
                cout<<"Your total amount due is: $"<<hoursInput*9.95;
            else
            {
                cout<<"Your total amount due is: $"<<(10*9.95)+((hoursInput-10)*2)<<endl;//aux1 formula
                if(aux1>aux2)
                    cout<<"You would've saved $"<<aux1-aux2<<" if you had Package B";
                if(aux1>19.95)
                    cout<<" and $"<<aux1-19.95<<" if you had Package C"<<endl;
            }
             
                //if(aux>
            
        }
        else if (packInput=="B")
        {
             if(hoursInput<=20)
                cout<<"Your total amount due is: $"<<hoursInput*14.95;
            else
            {
                cout<<"Your total amount due is: $"<<(20*14.95)+((hoursInput-20)*1);//aux2 formula
             if(aux2>19.95)
                 cout<<"\nYou would've saved $"<<aux2-19.95<<" if you had Package C"<<endl;
            }
        }
        else if (packInput =="C")
        {
              if(hoursInput>=0)
                cout<<"Your total amount due is: $19.95";
        }
        else 
            cout<<"\nYou did not enter a valid package, make sure you are capitalizing and using only the letters: A, B or C. ";
    }
    else
        cout<<"\nYou didn't enter a valid number of hours, the maximum number of hours in a month is 744, please enter a smaller number the next time..";
    return 0;
}
    

