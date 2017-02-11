#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <fstream>

using namespace std;

void Problem1();
void Problem2();
void Problem3();
void Problem4();
void Problem5();
void Problem6();

//Problem 6

void read6(int n[6][7],int a,int b){
  int fileName[6][7];
    ifstream readFile;
    readFile.open("table.txt");
 for(int i=0;i<a;i++){
      cout<<endl;
        for(int j=0;j<b;j++){
        readFile>> fileName[i][j];
        n[i][j]=fileName[i][j];
        }
 }
}
void print6(int n[6][7],int a,int b){//function that 'clears' the screen and shows the data that V have.
    int i,j;
    
    for(i=0;i<a;i++){
            if(i>=1)cout<<endl;
            for(j=0;j<b;j++){
                    cout<<n[i][j]<<" ";
            }
            cout<<endl;
    }
}
void summRows(int n[6][7],int a,int b){
    int summ;
    for(int i=0;i<a-1;i++){
        summ = 0;
       for(int j=0;j<b-1;j++){
            summ+=n[i][j];
            }
        n[i][6]=summ;
        
    }
 
    
}
void summColumns(int n[6][7],int a,int b){
    int summ;
    for(int j=0;j<b-1;j++){
        summ = 0;
       for(int i=0;i<a-1;i++){
            summ+=n[i][j];
            }     
        n[5][j]=summ;
    }    
}
void grandSumm(int n[6][7]){
    int summ=0;
    for(int i=0;i<5;i++)
        summ+=n[i][6];
    n[5][6]=summ;
    }
//---------------------------------------------------------------

//Problem 5

void write5(){
    ofstream file;
    file.open("input.dat");
    file<<"Lcekoeddhoffbme"
<<"Lkcmggjcdhhglif"
<<"Cgldjhcekjigcde"
<<"Cgldjhcekjigcdz"
<<"Bfgmdbkcenlafjk"
<<"Fggdijijegfblln"
<<"Jjlncnimjldfedj"
<<"Amliglfohajcdmm"
<<"Balgfcaelhfkgeb"
<<"Kmlhmhcddfoeild";
}
void read5(string n[10][15]){
  string fileName[10][15];  
  ifstream readFile;
  readFile.open("input.txt");
    for(int i=0;i<10;i++){
        for(int j=0;j<15;j++){
        readFile>> fileName[i][j];
        n[i][j]=fileName[i][j];
        }
    }
  
 }

bool compare(string a[], string b[]){
    for(int i = 0; i < 15; i++){
        if (a[i]<b[i])
            return true;
        else if (a[i] > b[i]){
            return false;
        }
    }

}

void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}

void bigst(string a[10][15],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(compare(a[pos], a[i]))
            swap(a[pos],a[i]);

    }
}

void sorting (string a[10][15]){
    for(int i=0;i<10-1;i++){
        bigst(a,10,i);
    }
}

 void print5(string n[10][15]){//function that 'clears' the screen and shows the data that V have.
	int i,j;
	cout<<endl<<endl<<endl<<endl<<endl;
	for(i=0;i<10;i++){
            if(i>=1)cout<<endl;
            for(j=0;j<15;j++){
                    cout<<n[i][j]<<" ";
            }
            cout<<endl;
	}
}
//------------------------------------------------------------------------------------------------------



void retrand(short int rndseq[], int freq[], int n, int ntimes){
	int i = 0;
	int aux;
	while(i < ntimes){
		aux = rand()%111+9;
		if (aux==rndseq[0]||
			aux==rndseq[1]||
			aux==rndseq[2]||
			aux==rndseq[3]||
			aux==rndseq[4]
			){
			if(aux==rndseq[0])
				freq[0]=freq[0]+1;
			if(aux==rndseq[1])
				freq[1]=freq[1]+1;
			if(aux==rndseq[2])
				freq[2]=freq[2]+1;
			if(aux==rndseq[3])
				freq[3]=freq[3]+1;
			if(aux==rndseq[4])
				freq[4]=freq[4]+1;
			i++;
		}
	}
	for (i = 0; i < n; i++)
	{
		cout<<rndseq[i]<<" occurred "<<freq[i]<<" times"<<endl;
	}
}

void compCode(unsigned int code, int guesses, bool&keepPlay){
    unsigned int guess;
    keepPlay = false;
    int i=0;
    char YorN='n';
    bool won = false;
    for(;i<guesses;i++){
    cout<<"\nPlease type your guess: ";
    cin>>guess;
        if(guess<code)cout<<"too low, try again";
        else if(guess>code)
                cout<<"too high, try again";
            else if(guess==code){
                cout<<"\nYou have won!!! "<<code<<" was the number";
                i=guesses;
                won = true;
                //to end the loop
            }

}   
    if (!won){
        cout<<"\nToo many tries, you have lost\n";
    }
    else{
        cout<<" would you like to play again? (y or n)";
        cin>>YorN;
    }
    if(YorN =='y'||YorN=='Y')keepPlay=true;
    if(YorN=='n'||YorN=='N')keepPlay=false;


    }
    
void Count(int num, int&size){
    while(num/10>0)
    {
        num=num/10;
        size++;
    }
}

void printVec(int even[], int odd[], int size){
    cout<<"EVEN\tODD"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<even[i]<<"\t"<<odd[i]<<endl;
    }
}

void reverse(int num, int v[], int&size){
    int aux;
    int cont = 0;
    bool flag = false;
    while(num>0)
    {   
        aux = num%10;
        num=num/10;
        //validate that it does not take the last 0s of the number
        if (aux != 0)
            flag = true;
        if (flag){
            v[cont] = aux;
            cont++;
        }
    }
    size = cont;

    //Convert the vector into an integer
    int rev = 0;
    cont = 1;
    for (int i = size - 1; i >= 0; i--)
    {   
        rev += cont*v[i];
        cont*=10;
    }

    if (rev >= 1000)
        rev-=999;
    else if (rev < 1000)
        rev -= rev;
    
    if (rev <= 32767){
        cout<<"The converted number is: ";
        cout<<rev;
    }
    else
        cout<<"No conversion possible";
}

void fillVec(int even[], int odd[], int size){
    
    //Even vector
    int i = 0;
    int aux;
    while(i < size)
    {
        aux = rand()%90+10;
        if (aux%2 == 0){
            even[i]=aux;
            i++;
        }
    }

    //Odd vector
    i = 0;
    while(i < size)
    {
        aux = rand()%90+10;
        if (aux%2 == 1){
            odd[i]=aux;
            i++;
        }
    }
}

void printArray(int array[][2], int size){
    cout<<endl<<endl<<"2-Dim array"<<endl;
    cout<<"EVEN\tODD"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<array[i][0]<<"\t"<<array[i][1]<<endl;
    }
}

void fillArray(int array[][2], int even[], int odd[], int size){
    for (int i = 0; i < size; i++)
    {
        array[i][0] = even[i];
        array[i][1] = odd[i];
    }

}

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
        cout<<"Type an option\n";

        cin>>op;
        switch(op){
            case 0://when the input is 0, the program finishes
                cout<<"\nThe program has finished"<<endl;
                break;

            case 1:{
                Problem1();
                
                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }

            case 2:{
                Problem2();
                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }

            case 3:{
                Problem3();

                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
        

     
            case 4:{
				Problem4();                                
                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 5:{
            	Problem5();
                cout<<"\nPress enter to continue";
                cout<<endl;
                cin.ignore();
                cin.get();
                break;
            }
            case 6:{
            	Problem6();
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

void Problem1(){    
    cout<<"Type the number you want to reverse: ";
    unsigned short int num;
    cin>>num;
    int size = 1;
    Count(num, size); //Size of the number(number of digits)
    int v[size];
    reverse(num, v, size);

}

void Problem2(){
    bool keepPlay;
    do{
    cout<<"You are playing 'Guess the Number'\n";
    unsigned seed=time(0);
    srand(seed);
    int x= rand()%6+1;
    int power=(pow(10,x));
    unsigned int code =rand()%power;
    int guesses=int(log2(pow(10,x)+1));
    cout<<x<<"   "<<code;
    cout<<"\nI have a number between 1 and "<<fixed<<setprecision(0)<<pow(10,x)
    <<"\ncan you guess my number? you will be given\n"
    <<"a maximum integer of "<<guesses<<" guesses.";
    compCode(code, guesses, keepPlay);
    }
    while(keepPlay);
    
    
}



void Problem3(){
    int size;
    cout<<"Please enter the size of the vector: ";
    cin>>size;
    srand(static_cast<unsigned int>(time(0)));
    int even[size], odd[size];
    fillVec(even, odd, size);
    printVec(even, odd, size);

    int array[size][2];
    fillArray(array, even, odd, size);
    printArray(array, size);


}

void Problem4(){
	const int n = 5, ntimes = 10000;
	srand(static_cast<unsigned int>(time(0)));
	int freq[n] = {0};
	short int rndseq[n] = {9, 52, 78, 101, 119};
	retrand(rndseq,freq, n, ntimes);

}

void Problem5() {
    string v[10][15];
    //write5();
    read5(v);
    print5(v);
    sorting(v);
    print5(v);
    
}

void Problem6(){
	int v[6][7];
    int a=5;//rows
    int b=6;//columns
    read6(v,a,b);
    print6(v,a,b);
    a=6;
    b=7;
    summRows(v,a,b);
    summColumns(v,a,b);
    cout<<endl<<endl;
    grandSumm(v);
    print6(v,a,b);
}