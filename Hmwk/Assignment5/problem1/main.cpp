#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <time.h>
#include <stdio.h>

using namespace std;

void calculateRetail(float,float);//for problem#1
double getSales(string);//getSales and findHighest is for problem#2
void findHighest(float m[4], string names[4]);
void findLowest(int m[5], string cityRegions[5]);
int getNumAccidents(string);
bool isPrime(int x);
bool already(string v[], string name, int n); //n is the length of the vector
float fallingDistance(float);
static float gravity= 9.8;
int coinToss(int);
float kineticEnergy(float,float);
int main(){
   
   
    int op;//option
//menu
    do{
        cout<<"Homework Assignment #5\n\n";
        cout<<"0. End the program\n";
        cout<<"1. Problem 1\n";
        cout<<"2. Problem 2\n";
        cout<<"3. Problem 3\n";
        cout<<"4. Problem 4\n";
        cout<<"5. Problem 5\n";
        cout<<"6. Problem 6\n";
        cout<<"7. Problem 7\n";
        cout<<"8. Problem 8\n";
        cout<<"9. Problem 9\n";
        cout<<"10. Problem 10\n";
        cout<<"Type an option\n";

        cin>>op;
        switch(op){
            case 0://when the input is 0, the program finishes
                cout<<"\nThe program has finished"<<endl;
                break;

            case 1:{//execution of program #1
                float wCost;
                float markUp;
                cout<<"What is the wholesale cost?(positive numbers)\n";
                cin>>wCost;
                cout<<"\nWhat is the markup percentage?(positive percentage) \n";
                cin>>markUp;
                if(wCost>0&&markUp>0)
                calculateRetail(wCost,markUp);
                else
                    cout<<"\nPlease enter positive numbers only.\n";


                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();////pause the system, waiting for users input to continue.
                break;
            }

            case 2:{
                //execution of program#2 
               
                 float m[4];
                 string divNames[4];
                    string divisionName;
                     for(int i=0;i<=3;i++){
                        cout<<"\nEnter the name of your company division(northeast,southeast,northwest or southwest)\n";
                        cin>>divisionName;

                        if (already(divNames, divisionName, 4)){
                          m[i]=getSales(divisionName);
                          divNames[i] = divisionName;  
                        }
                        else{
                          cout<<"\n\nYou already entered that division, please type another one the next time\n";
                          cout<<"Press enter to coninue";
                          cin.ignore();
                          cin.get();
                          i--;
                          }
                        
                        
                        if (m[i]==-1)
                            i--;
                        
                         }
             
                findHighest(m, divNames);

                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }

            case 3:{

                      int m[5];
                 string cityRegions[5];
                    string region;
                     for(int i=0;i<=4;i++){
                        cout<<"\nEnter the city region(north, east, south,west or central)\n";
                        cin>>region;//

                        if (already(cityRegions, region, 5)){
                          m[i]= getNumAccidents(region);
                          cityRegions[i] = region;
                        }
                        else{
                          cout<<"\n\nYou already entered that region, please type another one the next time\n";
                          cout<<"Press enter to coninue";
                          cin.ignore();
                          cin.get();
                          i--;
                        }


                        if (m[i]==0)
                            i--;
                      
                    }
                    
             
                findLowest(m, cityRegions);

                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
        

     
            case 4:{
                /*Falling Distance
When an object is falling because of gravity, the following formula can be used to
determine the distance the object falls in a speci c time period:
d = 1
2 gt2
The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t
is the amount of time, in seconds, that the object has been falling.
Write a function named fallingDistance that accepts an object s falling time (in
seconds) as an argument. The function should return the distance, in meters, that the
object has fallen during that time interval. Write a program that demonstrates the
function by calling it in a loop that passes the values 1 through 10 as arguments, and
displays the return value
                 */
                float time;
                cout<<"Please enter the time to calculate the distance that travels in free fall.\n";
                cin>>time;
                
                cout<<fallingDistance(time)<<endl;
                for(int i=1;i<=10;i++)
                    cout<<endl<<"The distance in meters is: "<<fallingDistance(i);
                
                
                 cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 5:{
                /*6. Kinetic Energy SIMILAR TO LAST ONE
In physics, an object that is in motion is said to have kinetic energy. The following formula
can be used to determine a moving object s kinetic energy:
KE = 1
2 mv2
The variables in the formula are as follows: KE is the kinetic energy, m is the object s
mass in kilograms, and v is the object s velocity, in meters per second.
Write a function named kineticEnergy that accepts an object s mass (in kilograms)
and velocity (in meters per second) as arguments. The function should return the
amount of kinetic energy that the object has. Demonstrate the function by calling it in
a program that asks the user to enter values for mass and velocity. */
                float mass, velocity;
                cout<<"Please enter the mass of the object(in kg)\n";
                cin>>mass;
                cout<<"\nPlease enter the velocity of the object(in m/s)\n";
                cin>>velocity;
                cout<<"The kinetic energy in joules is: "<<kineticEnergy(mass,velocity);
                
                
                
                 cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 6:{
                /*. 7. Celsius Temperature Table RELATIVELY SIMILAR TO LAST ONES
The formula for converting a temperature from Fahrenheit to Celsius is
where F is the Fahrenheit temperature and C is the Celsius temperature. Write a function
named celsius that accepts a Fahrenheit temperature as an argument. The function
should return the temperature, converted to Celsius. Demonstrate the function by
calling it in a loop that displays a table of the Fahrenheit temperatures 0 through 20
and their Celsius equivalents.*/
               cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 7:{
                int times;
                cout<<"enter the number of times that you wish to flip the coin\n";
                cin>>times;
                coinToss(times);
                
                /*8. Coin Toss
Write a function named coinToss that simulates the tossing of a coin. When you
call the function, it should generate a random number in the range of 1 through 2. If
the random number is 1, the function should display heads. If the random number
is 2, the function should display tails. Demonstrate the function in a program
that asks the user how many times the coin should be tossed, and then simulates the
tossing of the coin that number of times.*/
               cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 8:{
                /*9. Present Value
Suppose you want to deposit a certain amount of money into a savings account, and
then leave it alone to draw interest for the next 10 years. At the end of 10 years you
would like to have $10,000 in the account. How much do you need to deposit today
to make that happen? You can use the following formula, which is known as the
present value formula, to nd out:
The terms in the formula are as follows:
* P is the present value, or the amount that you need to deposit today.
* F is the future value that you want in the account. (In this case, F is $10,000.)
* r is the annual interest rate.
* n is the number of years that you plan to let the money sit in the account.
Write a program that has a function named presentValue that performs this calculation.
The function should accept the future value, annual interest rate, and number of
years as arguments. It should return the present value, which is the amount that you
need to deposit today. Demonstrate the function in a p*/
              cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 9:{
                /*21. isPrime Function
A prime number is a number that is only evenly divisible by itself and 1. For example,
the number 5 is prime because it can only be evenly divided by 1 and 5. The number
6, however, is not prime because it can be divided evenly by 1, 2, 3, and 6.
Write a function name isPrime, which takes an integer as an argument and returns
true if the argument is a prime number, or false otherwise. Demonstrate the function
in a complete program*/
                cout<<"Type an integer to determine if it is prime: ";
                int x;
                cin>>x;
                isPrime(x)? cout<<"This number is prime!!" : cout<<"This number is NOT prime";


                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 10:{
                /*19. Stock Pro t
The pro t from the sale of a stock can be calculated as follows:
Pro t = ((NS * SP) SC) ((NS * PP) + PC)
where NS is the number of shares, SP is the sale price per share, SC is the sale commission
paid, PP is the purchase price per share, and PC is the purchase commission paid.
If the calculation yields a positive value, then the sale of the stock resulted in a pro t.
If the calculation yields a negative number, then the sale resulted in a loss.
Write a function that accepts as arguments the number of shares, the purchase price
per share, the purchase commission paid, the sale price per share, and the sale commission
paid. The function should return the pro t (or loss) from the sale of stock.
Demonstrate the function in a program that asks the user to enter the necessary data
and displays the amount of the profit or loss*/
                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }

        }

    }
    while(op != 0);//when the option is not 0, do all the process, when it is 0 skip it.


    return 0;

            }
            
void calculateRetail(float x, float y){
    int  rPrice;
    float markUpPer= y/100;
    rPrice= x+(x*markUpPer);
    cout<<"The retail price is $"<<rPrice;
}
double getSales(string divName){
    
    float salesFigure;
   
    if((divName=="northeast"||divName=="southeast")||(divName=="northwest"||divName=="southwest")){
         cout<<"Please enter your division's quaterly sales figure: \n";
    cin>>salesFigure;
    while(salesFigure<0){
        cout<<"The number is not valit, please enter a positive number\n";
        cin>>salesFigure;
        
    }
    return salesFigure;
    }

    else{
        cout<<"you didn't enter a valid division name";
    return -1;
    }
}
int getNumAccidents(string regions){
    
    int accidentNumber ;
   
    if((regions=="north"||regions=="south")||(regions=="east"||regions=="west"||regions=="central")){
         cout<<"Please enter the number of accidents: \n";
    cin>>accidentNumber;
     while(accidentNumber<0){
        cout<<"The number is not valit, please enter a positive number\n";
        cin>>accidentNumber;
     }
    return accidentNumber;
    }

    else{
        cout<<"you didn't enter a valid region";
    return 0;
    }
        
    
    
    
}
void findHighest(float m[4], string names[4]){
    float temp=0.0;
    int temp1=0;
    for(int i=0;i<=3;i++){
        if(m[i]>temp){
        temp=m[i];
        temp1=i;
        }
    }
    
    cout<<"The biggest number is: "<<temp<<endl;
  
    cout<<names[temp1];
    
}
void findLowest(int m[5], string names[5]){
    int temp=10000000;
    int temp1=0;
    for(int i=0;i<=4;i++){
        if(m[i]<temp){
        temp=m[i];
        temp1=i;
        }
    }
    
    cout<<"The lowest number is: "<<temp<<endl;
  
    cout<<names[temp1];
    
}

bool already(string v[], string name, int n){ //n is the length of the vector
    bool x = true;
    for (int i = 0; i < n; i++){
      if(v[i] == name)
        x = false;
    }
    return x;

  }

float fallingDistance(float time){
    float distance=((1.0/2.0)*gravity*pow(time,2));
    return distance;    
    
}

float kineticEnergy(float mass,float velocity){
    float energy;
    energy=(1.0/2.0)*mass*pow(velocity,2);
    return energy;
}

bool isPrime(int x){
    int cont=0;
    int divisor=1;
    if (x>1){
      while (cont<2){
        if (x%divisor==0){
          divisor++;
          cont++;}
        else {divisor++;}
        }
    }
    if (x!=0&&divisor==(x+1))
      return true;
    else
      return false;
}          
int coinToss(int times){
    int toss;
    for(int i=1;i<=times;i++){
    srand(time(NULL));
        toss=rand ()%10 - 7;
        if(toss==1)
            cout<<"\nheads";
        if(toss==2)
            cout<<"\ntails";
        else
            cout<<toss<<times;
    }
}
    
