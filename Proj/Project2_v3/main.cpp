
//Maze and codebreaker. Project2_v3
#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void print(string n[50][50], int a, int b);//following three functions used in maze game

void fill(string n[50][50]);

void fill2(string n[50][50]);

 void codeBreaker();//function that is executed when maze is passed. it calls the second game to execute.
 class Code// class used in second game.
{
private:
    int size;
    int turn;
    vector<int> code;
    vector<int> guess;
    vector<char> progress;
public:
    Code();
    void setSize(int);
    void makeCode();
    void sortCode();
    void makeGuess(int);
    void makeProgress();
    bool winStatus();
    void outputCode();
    void outputGuess();
    void outputProgress();
    void resetGuess();
    void incTurn();
    int getTurn();
};

void playGame(int size);//function for codebreaker

int main(){
	bool endGame = false;
	char p, level;//defining p, the users input.
	int n, m, a, b; //n = number of rows, m = number of columns, a = row to win, b = column to win
	string v[50][50];//creating an array of arrays(matrix). [n][m]
	
	do{
		 cout<<string(1, '\n');
		 p='2';//to be able to play again after winning one time(letting it go trough the next loop).
		 cout<<"\n\t\t\tMaze\n";
		 cout<<"\n\n\tUse WASD and enter to move in the maze.\n\n";
		 cout<<"\tPress 0 to return to the menu or press p to exit the game.\n\n\n";
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
				 cout<<"\tDo you want to keep playing? if so, you have to break a code.\n";
				 cout<<"\t\t1. Yes, continue.\n";
				 cout<<"\t\t2. No, end the program.\n";
				 cin>>p;
				 if (p == '1'){
                                     cout<<string(10,'\n');
				 	p ='0';//to end the while(p!=0) loop.
                                 codeBreaker();
                                 }
				 else if( p== '2')
				 	p = 'p';
                                 else
                                     cout<<"Please enter 1 or 2";



			 }
			 if(p == 'p' || p == 'P'){ //End of the game
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



void fill(string n[50][50]){//initial matrix(2D array), initially(everytime the user wins or starts the program) used every time to load data in matrix m into matrix v(or n). 
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


void codeBreaker() {//Second game, initialized when a maze is won.

    cout << "   CODEBREAKER!" << endl << endl;
    
    cout << "The computer will generate a code and it is up to you to decipher"
            << " it!\nInput your guess, and the computer will tell you:" << endl
            << "     - Which numbers are correct [!]" << endl
            << "     - Which numbers are in the code, but in a different spot"
            << " [?]" << endl
            << "     - Which numbers are incorrect [X]" << endl << endl
            << "P.S. the code can repeat numbers and have the 0 included. You only have 10 trials\n\n";
            
    
    int choice;
    cout << "Choose your difficulty:" << endl
            << "    1. Easy" << endl
            << "    2. Medium" << endl
            << "    3. Hard" << endl << endl
            << "Your choice: ";
    cin >> choice;
    int size = 0;
    switch(choice)
    {
        case 1:
            size = 4;
            playGame(size);
            break;
        case 2:
            size = 5;
            playGame(size);
            break;
        case 3:
            size = 6;
            playGame(size);
            break;
        default:
            cout << "Invalid input!";
    } 
    cout << endl;
    
    
}

Code::Code()
{
    size = 0;
}

void Code::setSize(int size)
{
    this->size = size;
}

void Code::makeCode()
{
    srand(time(0));
    for(int i = 0; i < size; i++)
    {
        code.push_back(rand()%10);
        progress.push_back(' ');
    }
}

void Code::makeGuess(int input)
{
    guess.push_back(input);
}
void Code::sortCode()//sorting code
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if(code[i]>code[j]){
				code[i]=code[i]^code[j];
                code[j]=code[i]^code[j];
                code[i]=code[i]^code[j];
			}
		}
	}	
}
void Code::makeProgress()//compare guess and code vectors and show either ?,! or X
{
	for(int i = 0; i < size; i++)
	{
		if(guess[i] == code[i]) progress[i] = '!';
		else if (size == 4 && (guess[i] == code[0] || guess[i] == code[1] || guess[i] == code[2]
                    || guess[i] == code[3]))
		{
			progress[i] = '?';
		}
		else if (size == 5 && (guess[i] == code[0] || guess[i] == code[1] || guess[i] == code[2]
                    || guess[i] == code[3] || guess[i] == code[4]))
		{
			progress[i] = '?';
		}
		else if (size == 6 && (guess[i] == code[0] || guess[i] == code[1] || guess[i] == code[2]
                    || guess[i] == code[3] || guess[i] == code[4] || guess[i] == code[5]))
		{
			progress[i] = '?';
		}
		else
			progress[i] = 'X';
	}
}

void Code::outputCode()
{
    cout << "Code: ";
    for(int i = 0; i < size; i++)
    {
        cout << "[" << code[i] << "] ";
    }
    cout << endl;
}

void Code::outputGuess()
{
    cout << "Guess: ";
    for(int i = 0; i < size; i++)
    {
        cout << "[" << guess[i] << "] ";
    }
    cout << endl;
}

void Code::outputProgress()
{
    cout << "Progress: ";
    for(int i = 0; i < size; i++)
    {
        cout << "[" << progress[i] << "] ";
    }
    cout << endl;
}

void playGame(int size)
{
    Code game = Code();
    game.setSize(size);
    game.makeCode();
    game.sortCode(); //Sort the code to make it easier
    
    
    int input; int turn = 0;
    do
    {
        cout << "Input a " << size << "-digit guess, each digit separated by"
                << " a space: ";
        for(int i = 0; i < size; i++)
        {
            cin >> input;
            game.makeGuess(input);
        }
        game.makeProgress();

        game.outputGuess();
        game.resetGuess();
        game.outputProgress();
        game.incTurn();
    }while(!game.winStatus() && game.getTurn() < 10);
    
    if(game.winStatus())
    {
        cout << "You win!" << endl << endl;
    }
    else
    {
        game.outputCode();
        cout << "You lose!" << endl << endl;
    }
}

bool Code::winStatus()
{
    bool win = true;
    for(int i = 0; i < size; i++)
    {
        if(guess[i] != code[i])
            win = false;
    }
    return win;
}

void Code::resetGuess()
{
    for(int i = 0; i < size; i++)
    {
        guess.pop_back();
    }
}

void Code::incTurn()
{
    turn++;
}

int Code::getTurn()
{
    return turn;
}
