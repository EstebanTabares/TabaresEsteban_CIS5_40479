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
void celsius(float);
float presentValue(float,float,float);
float pORloss(float,float,float,float,float);
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
                cout<<"Problem 1.\n"<<"Markup\n";
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
                cout<<"Problem 2.\n"<<"Winning Division\n";
               
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
                    
                 cout<<"Problem 3.\n"<<"Safest driving area\n";
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
                cout<<"Problem 4.\n"<<"Falling Distance\n";
                //execution of program#4. FALLING DISTANCE
                
                float time;
                cout<<"Please enter the time to calculate the distance that travels in free fall.\n";
                cin>>time;
                
                cout<<"The distance in meters is "<<fallingDistance(time)<<endl;
                for(int i=1;i<=10;i++)
                    cout<<endl<<"The distance in meters is: "<<fallingDistance(i);
                
                
                 cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 5:{
                cout<<"Problem 5.\n"<<"Kinetic Energy\n";
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
                cout<<"Problem 6.\n"<<"Celsius temperature table\n";
                
                for(float fahr=1;fahr<=20;fahr++){
                
                celsius(fahr);
                cout<<endl;
                }
               cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 7:{
                cout<<"Problem 7.\n"<<"Coing Toss\n";
                int times;
                cout<<"enter the number of times that you wish to flip the coin\n";
                cin>>times;
                coinToss(times);
               cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 8:{
                cout<<"Problem 8.\n"<<"Present Value\n";
                float fvalue, aIR,n;
                cout<<"Please enter the future value you wish to have.\n";
                cin>>fvalue;
                cout<<"\nPlease enter the Annual Interest Rate(e.g. 3 or 8).\n";
                cin>>aIR;
                cout<<"\nplease enter the amount of years you are willing to let the money in.\n";
                cin>>n;
                cout<<presentValue(fvalue,aIR,n);
                
                        
              cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 9:{
                cout<<"Problem 9.\n"<<"isPrime function\n";
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
                cout<<"Problem 10.\n"<<"Stock profit\n";
                float NS,SP,SC,PP,PC;
                cout<<"\nHow many shares do you have? \n";
                cin>>NS ;
                cout<<"\nWhat was the purchase price per share"
                        "? \n";
                cin>>PP ;
                cout<<"\nWhat was the purchase commission paid? \n";
                cin>>PC ;
                cout<<"\nWhat was the sale price per share? \n";
                cin>>SP;
                cout<<"\nWhat was the sales commission paid?\n";
                cin>>SC;
                if(pORloss(NS,SP,SC,PP,PC)<0)
                    cout<<"You had a loss of $"<<pORloss(NS,SP,SC,PP,PC);
                if(pORloss(NS,SP,SC,PP,PC)>0)
                    cout<<"You had a profit of $"<<pORloss(NS,SP,SC,PP,PC);
                if(pORloss(NS,SP,SC,PP,PC)==0)
                    cout<<"You didn't make a profit nor loss";
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
        cout<<"The number is not valid, please enter a positive number\n";
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
        cout<<"The number is not valid, please enter a positive number\n";
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
    int i=1;
    while(i<=times){//this function does output a random number but not every time in the loop???
        unsigned seed=time(0);
        srand(seed);
        toss=rand()%2 +1;
        if(toss==1)
            cout<<"\nheads";
        if(toss==2)
            cout<<"\ntails";
        i++;
     
    }
}
void celsius(float fahr){
    
        float celsius=(5.0/9.0)*(fahr-32);
        cout<<celsius;
    
}
float presentValue(float fValue,float aIR,float n){
    float pValue= fValue/(pow((1+(aIR/100)),n));
    return pValue;
}
float pORloss(float NS,float SP,float SC,float PP,float PC){
    int profit= ((NS*SP)-SC)-((NS*PP)+PC);
    return profit;
}