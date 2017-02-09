//Maze. Working. Project2_v1
#include <iostream>

using namespace std;

void print(string n[50][50], int a, int b);

void fill(string n[50][50]);

void fill2(string n[50][50]);

int main(){
	bool endGame = false;
	char p, level;//defining p, the users input.
	int n, m, a, b; //n = number of rows, m = number of columns, a = row to win, b = column to win
	string v[50][50];//creating an array of arrays(matrix). [n][m]
	
	do{
		 cout<<string(46, '\n');
		 p='2';//to be able to play again after winning one time(letting it go trough the next loop).
		 cout<<"\n\t\t\tMaze\n";
		 cout<<"\n\n\tUse WASD and enter to move in the maze.\n\n";
		 cout<<"\tPress 0 to return to the menu or press e to exit the game.\n\n\n";
		 cout<<"\tPlease press enter to continue\n";
		 cin.get();
		 cout<<string(46, '\n');
		 cout<<"\tChoose a level\n";
		 cout<<"\t\t1. Level 1.\n";
		 cout<<"\t\t2. Level 2.\n";
		 cin>>level;
		 
		 

		 switch(level){
		 	case '1':
		 		//Dimensions of the matrix(level 1 maze)
		 		n = 14;
		 		m = 13;
		 		//Position to win in this specific maze
		 		a = 13;
		 		b = 11;
		 		fill(v);//calling the function n(hardcoded initial maze) with the newly created matrix v as a parameter.
		 		break;
		 	case '2':
		 		//Dimensions of the matrix(level 1 maze)
		 		n = 23;
		 		m = 29;
		 		//Position to win in this specific maze
		 		a = 22;
		 		b = 27;
		 		fill2(v);//calling the function n(hardcoded initial maze) with the newly created vector v as a parameter.
		 		break;
		 	default:
		 		cout<<string(46, '\n');
		 		cout<<"You did not choose any level!!";
		 		cin.ignore();
		 		cin.get();
		 		p = '0'; //not able to play, then returns to the menu
		 		m = 0;
		 		n = 0;
		 		break;

		 }



		 
		 int i=0,j=0;//creating variable for rows(i) and columns*=(j)

		 print(v, n, m);//'c outing' the the data that v now has.


		 //The game itself
		 while(p!='0'){
			 cin>>p;
			 if((p=='d' || p=='D')&&j!=m){ //Right key
				 if(v[i][j+1]==" "){
				 v[i][j]=" ";
				 v[i][j+1]="o";
				 j++;
				 print(v, n , m);
				 }
			 }
			 if((p=='a' || p=='A') && j!=0){ //left key
				 if(v[i][j-1]==" "){
				 v[i][j-1]="o";
				 v[i][j]=" ";
				 j--;
				 print(v, n , m);
				 }
			 }
			 if((p=='s' || p=='S') &&i!=n){ //Down key
				 if(v[i+1][j]==" "){
				 v[i][j]=" ";
				 v[i+1][j]="o";
				 i++;
				 print(v, n , m);
				 }
			 }
			 if((p=='w' || p=='W')&&i!=0){ //Up key
				 if(v[i-1][j]==" "){
				 v[i-1][j]="o";
				 v[i][j]=" ";
				 i--;
				 print(v, n , m);
				 }
			 }
			 print(v, n , m);
			 if(v[a][b]=="o"){
				 cout<<"\n\n\t!!!!!!!!! You have won !!!!!!!!!!! \n\n";
				 cout<<"\tDo you want to play again?\n";
				 cout<<"\t\t1. Yes.\n";
				 cout<<"\t\t2. No.\n";
				 cin>>p;
				 if (p == '1')
				 	p ='0';//to end the while(p!=0) loop.
				 else
				 	p = 'e';



			 }
			 if(p == 'e' || p == 'E'){ //End of the game
			 	cout<<"\nEnd of the game!\n\n";
			 	endGame = true;
			 	p='0';
			 }
			}
			cin.ignore();



	}while (!endGame); //
}

void print(string n[50][50], int a, int b){//function that 'clears' the screen and shows the data that V have.
	int i,j;
	cout<<string(46, '\n');
	for(i=0;i<a;i++){
		cout<<"\t\t";
		for(j=0;j<b;j++){
			cout<<n[i][j];
		}
		cout<<endl;
	}
}



void fill(string n[50][50]){//initial matrix, initially(everytime the user wins or starts the program) used every time to load data in matrix m into matrix v(or n). 
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

void fill2(string n[50][50]){
	int i,j;
	string m[23][29]={
	{"o"," ","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#"},
	{"#"," "," "," "," "," "," ","#"," "," "," ","#"," "," "," ","#"," "," "," ","#","#"," "," "," "," ","#","#","#","#"},
	{"#"," ","#"," ","#","#"," "," "," ","#"," "," "," ","#"," "," "," ","#"," "," ","#"," ","#"," "," "," "," "," ","#"},
	{"#"," ","#"," ","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#"," "," ","#"," ","#","#","#"," ","#"},
	{"#"," ","#"," "," "," "," ","#"," ","#","#","#","#","#","#","#","#","#","#","#"," ","#","#"," ","#"," "," "," ","#"},
	{"#"," ","#","#"," ","#"," ","#"," ","#"," "," "," ","#"," "," "," ","#"," "," "," ","#"," "," ","#"," ","#"," ","#"},
	{"#"," "," ","#"," ","#"," ","#"," ","#"," ","#"," "," "," ","#"," "," "," ","#"," ","#"," ","#","#"," ","#"," ","#"},
	{"#","#"," ","#","#"," "," ","#"," "," "," ","#","#","#","#","#","#","#","#","#"," ","#"," ","#","#","#","#"," ","#"},
	{"#","#"," "," "," ","#","#"," "," ","#"," ","#"," "," "," "," "," "," ","#","#"," ","#"," "," "," "," ","#"," ","#"},
	{"#","#"," ","#"," ","#","#"," ","#","#"," ","#"," ","#","#","#","#","#"," "," "," ","#","#","#","#"," ","#"," ","#"},
	{"#","#"," ","#"," ","#","#"," ","#","#"," ","#"," ","#"," "," "," ","#"," ","#"," ","#","#","#","#"," ","#"," ","#"},
	{"#","#"," ","#"," ","#","#"," ","#","#"," ","#"," "," "," ","#"," "," "," ","#"," "," "," ","#"," "," ","#"," ","#"},
	{"#","#"," ","#"," ","#","#"," ","#","#"," ","#"," ","#","#","#","#","#","#","#"," ","#"," ","#"," ","#","#"," ","#"},
	{"#"," "," ","#"," ","#","#"," ","#","#"," ","#"," "," "," "," "," "," "," "," ","#","#"," ","#"," ","#","#"," ","#"},
	{"#"," ","#","#"," "," ","#"," ","#","#"," "," "," ","#","#","#","#","#","#"," ","#"," "," ","#"," ","#","#"," ","#"},
	{"#"," "," ","#","#"," "," "," ","#"," ","#","#"," "," "," "," "," "," ","#"," ","#"," ","#","#"," "," "," "," ","#"},
	{"#"," ","#","#","#","#","#"," ","#"," ","#","#","#","#","#","#","#"," ","#"," ","#"," ","#","#","#","#","#"," ","#"},
	{"#"," "," "," "," ","#","#"," ","#"," ","#"," "," "," "," "," "," "," ","#"," ","#"," "," "," "," "," ","#"," ","#"},
	{"#"," ","#","#"," ","#","#"," ","#"," ","#"," ","#","#","#","#","#","#","#"," ","#"," ","#","#","#"," "," ","#","#"},
	{"#"," ","#"," "," "," "," "," ","#"," ","#"," ","#"," "," "," "," "," "," "," ","#"," "," "," "," ","#"," "," ","#"},
	{"#"," ","#","#","#","#","#","#","#"," ","#"," ","#","#","#","#","#","#","#","#","#","#","#","#","#"," ","#"," ","#"},
	{"#"," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," "," ","#"," ","#"},
	{"#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#","#"," ","#"},};
	for(i=0;i<23;i++){
		for(j=0;j<29;j++){
			n[i][j]=m[i][j];
		}
		cout<<endl;
	}
}