//Maze. Working.
#include <iostream>

using namespace std;

void print(string n[14][13]);

void fill(string n[14][13]);


int main(){
	char p='8';//defining p, the users input.
	string v[14][13];//creating an array of arrays(vector).
	while (p != 57){
            p=1;//to be able to play again after winning one time(letting it go trough the next loop).
            cout<<"Maze\n";
            cout<<"Use WASD and enter to move in the maze.\n\n\n ";
            cout<<"Please press enter to start the game\n";
            cin.get();
            int i=0,j=0;//creating variable for rows(i) and columns*=(j)
            fill(v);//calling the function n(hardcoded initial maze) with the newly created vector v as a parameter.
            print(v);//'c outing' the the data that v now has.
            while(p!='0'){
                cin>>p;
                if(p=='d'&&j!=13){ //Right key
                        if(v[i][j+1]==" "){
                                v[i][j]=" ";
                                v[i][j+1]="o";
                                j++;
                                print(v);
                        }
                }
                if(p=='a' && j!=0){ //left key
                        if(v[i][j-1]==" "){
                                v[i][j-1]="o";
                                v[i][j]=" ";
                                j--;
                                print(v);
                        }
                }
                if(p=='s'&&i!=13){ //Down key
                        if(v[i+1][j]==" "){
                                v[i][j]=" ";
                                v[i+1][j]="o";
                                i++;
                                print(v);
                        }
                }
                if(p=='w'&&i!=0){ //Up key
                        if(v[i-1][j]==" "){
                                v[i-1][j]="o";
                                v[i][j]=" ";
                                i--;
                                print(v);
                        }
                }
                if(v[13][11]=="o"){
                        cout<<"\n\n!!!!!!!!! You have won !!!!!!!!!!!     \n\n";
                        cin.ignore();
                        cin.get();
                        p='0';//to end the while(p!=0) loop.

                }
            }	

    }
}

void print(string n[14][13]){//function that 'clears' the screen and shows the data that V have.
	int i,j;
	cout<<string(46, '\n');
	for(i=0;i<14;i++){
		for(j=0;j<13;j++){
			cout<<n[i][j];
		}
		cout<<endl;
	}
}



void fill(string n[14][13]){//initial vector, initially(everytime the user wins or starts the program) used every to load data in vector m(or n) into the vector v. 
	int i,j;
	string m[14][13] = {
	{"o"," ","#","#","#","#","#","#","#","#","#","#","#"},
	{"#"," "," ","#"," "," "," "," "," "," "," "," ","#"},
	{"#","#"," ","#","#","#"," ","#","#","#","#","#","#"},
	{"#","#"," "," "," ","#"," ","#"," "," "," "," ","#"},
	{"#","#","#","#"," "," "," ","#"," ","#","#"," ","#"},
	{"#"," ","#","#"," ","#","#","#"," ","#"," "," ","#"},
	{"#"," ","#"," "," "," "," "," "," ","#"," ","#","#"},
	{"#"," ","#"," ","#"," ","#","#"," ","#"," ","#","#"},
	{"#"," ","#"," ","#"," ","#","#"," ","#"," ","#","#"},
	{"#"," ","#"," ","#"," ","#","#"," ","#"," ","#","#"},
	{"#"," ","#"," ","#"," ","#","#"," ","#"," ","#","#"},
	{"#"," ","#"," ","#"," ","#","#","#","#"," "," ","#"},
	{"#"," "," "," ","#"," "," "," "," ","#","#"," ","#"},
	{"#","#","#","#","#","#","#","#","#","#","#"," ","#"}};
        //assigns the value from each position in i and j(starting at 0,0 and going from left to right, then one row, left to right and so on) to n
	for(i=0;i<14;i++){
		for(j=0;j<13;j++){
			n[i][j]=m[i][j];
                        
		}
		cout<<endl;
	}
        
}
