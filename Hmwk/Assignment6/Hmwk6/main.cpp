#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

void highest(double num[12], int,string name[12]);
void lowest(double num[12],int,string name[12]);
void findHighest(string n[5], int v[5]);
void findLowest(string n[5], int v[5]);
void printSauces(string n[5], int v[5]);
void GradeBook(string n[5], char c[5], double v[5][4], bool flag);
void compare(char answers[20], char userAns[20][2]);
void aveFood(double zoo[3][7]);
void leastFood(double zoo[3][7]);
void greatestFood(double zoo[3][7]);

int main(){
   
   
    int op;//option
//menu
    do{
        cout<<"Homework Assignment #6\n\n";
        cout<<"0. End the program\n";
        cout<<"1. Problem 1\n";
        cout<<"2. Problem 2\n";
        cout<<"3. Problem 3\n";
        cout<<"4. Problem 4\n";
        cout<<"5. Problem 5\n";
        cout<<"6. Problem 6\n";
        cout<<"7. Problem 7\n";
        cout<<"Type an option\n";

        cin>>op;
        switch(op){
            case 0://when the input is 0, the program finishes
                cout<<"\nThe program has finished"<<endl;
                break;

            case 1:{
                //Chips and salsa
                string sauces[5] = {"mild", "medium", "sweet", "hot", "zesty"};
                int jars[5];
                int i = 0;
                int input;
                while (i < 5){
                    cout<<"Enter the number of jars sold for "<<sauces[i]<<" salsa: ";
                    cin>>input;
                    if (input >= 0){
                        jars[i] = input;
                        i++;
                    }
                    else
                        cout<<"\nPlease enter a valid number";
                }
                printSauces(sauces, jars);

                int sum = 0;
                for (i = 0; i < 5; i++){
                    sum+=jars[i];
                }

                cout<<"\nThe total number of sales is: "<<sum;
                findHighest(sauces, jars);
                findLowest(sauces, jars);

                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }

            case 2:{
                //Grade Book
                string names[5]; //Students
                char grades[5]; //Letter grades
                double ts[5][4];//Test scores
                bool flag = false;//If flag = false, lowest scores are not displayed on screen
                GradeBook(names, grades, ts, flag);


                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }

            case 3:{
                //Grade Book Modification
                string names[5]; //Students
                char grades[5]; //Letter grades
                double ts[5][4];//Test scores
                bool flag = true;//If flag = true, lowest scores are  displayed on screen
                GradeBook(names, grades, ts, flag);


                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
        

     
            case 4:{
                //Driver's License Exam
                char answers[20] = {'B','D','A','A','C','A','B','A','C','D','B','C','D','A','D','C','C','B','D','A'};
                char userAns[20][2];

                int i = 0;
                char input;
                cout<<"Use capital letters only\n\n";
                while (i < 20){
                    cout<<"\nEnter the answer for question number "<<i+1<<": ";
                    cin>>input;
                    if (input == 'A' || input == 'B' || input == 'C' || input == 'D'){
                        userAns[i][0] = input;
                        i++;
                    }
                    else
                        cout<<"\nPlease enter a valid character";
                }

                compare(answers, userAns);
                
                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 5:{
                 // PROGRAM #1
                double num[10];
                int i=0;
                int size=10;
                string notNeeded[12];
                notNeeded[0]="..";
                cout<<"Please enter 10 different numbers.\n";
                while(i<=9){
                    cin>>num[i];
                    i++;
                }
                highest(num,size,notNeeded);
                lowest(num,size,notNeeded);
                
                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 6:{
                //PROGRAM #2
                double rainFall[12];
                string months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
                int i=0;//counter
                int size=12;
                int input;//temp(to validate)
                while(i<size){
                     cout<<"Please enter the amount of rain fall per month(commencing with January, February and so forth). \n";
                     cin>>input;
                     if(input>=0){
                         rainFall[i]=input;
                         i++;
                     }
                     else
                         cout<<"please enter a valid number\n";
                     
                }   
                highest(rainFall,size,months);
                lowest(rainFall,size,months);
               cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 7:{
            	
	           	double zoo [3][7];
			  	int input;//temp(to validate)
			    for(int i=0;i<3;i++){//rows
			        
			        for(int j=0;j<7;j++){//columns
			            cout<<"Please enter the amount of food eaten by monkey#"<<i+1 <<" in day "<<j+1 <<endl;
			            cin>>input;
			            if(input>=0){
			             zoo[i][j]=input;
			         }
			            else{
			                cout<<"please enter a valid number\n";
			                j--;
			            }
			            
			        }
			       
			    }
		    
		        aveFood(zoo);
		        leastFood(zoo);
		        greatestFood(zoo);

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
            
void findHighest(string n[5], int v[5]){
    float temp=0;
    int temp1=0;
    for(int i=0;i<5;i++){
        if(v[i]>temp){
        temp=v[i];
        temp1=i;
        }
    }
    
    cout<<"\n\nThe highest selling product is: "<<n[temp1]<<" with "<<v[temp1]<<" jars sold"<<endl;

    
}
void findLowest(string n[5], int v[5]){
    int temp=10000000;
    int temp1=0;
    for(int i=0;i<5;i++){
        if(v[i]<temp){
        temp=v[i];
        temp1=i;
        }
    }
    
    cout<<"\n\nThe highest selling product is: "<<n[temp1]<<" with "<<v[temp1]<<" jars sold"<<endl;
}

void printSauces(string n[5], int v[5]){
    cout<<string(50, '\n');
    for(int i=0;i<5;i++){
        cout<<"Salsa: "<<n[i]<<"\tNumber of jars sold: "<<v[i];
        
        cout<<endl;
    }
}

void GradeBook(string n[5], char c[5], double v[5][4], bool flag){
    int i = 0, j;
    double input2;
    double lowest[5]; //Lowest score
    double aux;
    while (i < 5){
            cout<<"Type the name of the student number "<<i+1<<": ";
            cin>>n[i];
            j = 0;
            aux = 100;
            while(j < 4){
                cout<<j+1<<". Score test of "<<n[i]<<": ";
                cin>>input2;
                if (input2 >= 0 && input2 <= 100){ //Input validation
                    v[i][j] = input2;
                    if (v[i][j] <= aux) //Search lowest score for each student
                        aux = v[i][j];
                    j++;
                }
                else
                    cout<<"\nPlease enter a valid number";

                cout<<endl;

            }
            lowest[i] = aux; //Store lowest score for each student
            i++;            
        }

    //Calculates the average and display information on screen
    double average;
    for(i = 0; i < 5; i++){
        average = 0.0;
        for (j = 0; j < 4; j++){
            average += v[i][j];
        }
        average /= 4;
        if (average >= 90 && average <= 100)
            c[i] = 'A';
        if (average >= 80 && average <= 89)
            c[i] = 'B';
        if (average >= 70 && average <= 79)
            c[i] = 'C';
        if (average >= 60 && average <= 69)
            c[i] = 'D';
        if (average >= 0 && average <= 59)
            c[i] = 'F';

        if (flag){
            cout<<left<<setw(20);
            cout<<"Student: "<<n[i]<<"\tAverage Grade: "<<average<<"\tLetter Grade: "<<c[i]<<"\tLowest score: "<<lowest[i]<<endl;
        }
        else{
            cout<<left<<setw(20);
            cout<<"Student: "<<n[i]<<"\tAverage Grade: "<<average<<"\tLetter Grade: "<<c[i]<<endl;
        }

    }
}

void compare(char answers[20], char userAns[20][2]){

    int count = 0;
    for (int i = 0; i < 20; i++){
        if (answers[i] == userAns[i][0]){
            count+=1;
            userAns[i][1] = 'a';
        }
        else
            userAns[i][1] = 'b';

    }

    if (count >= 15){
        cout<<"\n\nCongratulations!!! You passed the exam\n";


    }
    else
        cout<<"\n\n You did not pass the exam\n";        

    cout<<"Correctly answered questions: "<<count<<"\n";
    cout<<"Incorrectly answered questions: "<<20-count<<"\n\n";
    cout<<"You were wrong in the following questions\n";
    for (int i = 0; i < 20; i++)
    {
        if(userAns[i][1] == 'b')
            cout<<"Question number "<<i+1<<endl;
        
        
    }
}
void highest(double num[12],int size,string name[12]){
    cout<<fixed;
    double highest=0;
    int temp=0;
    int i=0;
    while(i<=size-1){
        if(num[i]>highest){
        highest=num[i];
        temp=i;
        }
        i++;
    }    
        
        if (name[0]=="..")
            cout<<"the highest number is: "<<highest;
        else
            cout<<name[temp]<<" has the highest rainfall: "<<highest<<endl;       
        

}
void lowest(double num[12],int size, string name[12]){
    
    double lowest=10000;
    int temp=0;
    int i=0;
    while(i<=size-1){
        if(num[i]<lowest){
            lowest=num[i];
            temp=i;
        }
        i++;
         }
        if (name[0]=="..")
            cout<<"\nthe lowest number is: "<<lowest;
        else
            cout<<endl<<name[temp]<<" has the lowest rainfall: "<<lowest;
    
    }

void aveFood(double zoo[3][7]){
    double summ;
    for(int j=0;j<7;j++){
        summ = 0;
        for(int i=0;i<3;i++){
            summ+=zoo[i][j];
        }
        cout<<"The amount of food eaten by the family of monkeys in day "<<j+1<<" is "<<summ/3<<endl;
        
    }
}
void leastFood (double zoo[3][7]){
    double min;
    double least[3];
     for(int i=0;i<3;i++){
         min = 100000;
        for(int j=0;j<7;j++){
            if(zoo[i][j]<=min)
                min = zoo[i][j];
        }
         least[i]=min;
     }
    min = 100000;
    for (int i=0;i<3;i++){
        if(least[i]<=min)
            min = least[i];
    }
    cout<<"The least amount of food eaten during a week by anyone monkey is: "<<min<<endl;
}
void greatestFood (double zoo[3][7]){
    double max;
    double greatest[3];
     for(int i=0;i<3;i++){
         max = 0;
        for(int j=0;j<7;j++){
            if(zoo[i][j]>=max)
                max = zoo[i][j];
        }
         greatest[i]=max;
     }
    max = 0;
    for (int i=0;i<3;i++){
        if(greatest[i]>=max)
            max = greatest[i];
    }
    cout<<"The greatest amount of food eaten during a week by anyone monkey is: \n"<<max;
}
