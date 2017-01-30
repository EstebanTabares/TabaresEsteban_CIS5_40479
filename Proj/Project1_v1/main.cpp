//Maze, not working.
#include <iostream>
#include <cstdlib>

using namespace std;

void print(string n[14][13]);

void fill(string n[14][13]);
//need a c++ function to capture user input(keyboard arrowkeys).

int main(){
	char op;
	string v[14][13];
	while (op != 48){
		system("cls");
		cout<<"Maze\n\n";
		cout<<"Please press enter";
		//cin.get
		int i=0,j=0,p=0;
		int a=0,x=0,z=0;
		fill(v);
 		print(v);
     	//function
	 	while(p!=48){
			//p=cin.get
			if(p==77&&j!=13){
				if(v[i][j+1]!="l"){
					v[i][j]=" ";
					v[i][j+1]="*";
					j++;
					print(v);
				}
			}
			if(p==75 && j!=0){
				if(v[i][j-1]==" "){
					v[i][j-1]="*";
					v[i][j]=" ";
					j--;
					print(v);
				}
			}
			if(p==80&&i!=13){
				if(v[i+1][j]==" "){
					v[i][j]=" ";
					v[i+1][j]="*";
					i++;
					print(v);
				}
			}
			if(p==72&&i!=0){
				if(v[i-1][j]==" "){
					v[i-1][j]="*";
					v[i][j]=" ";
					i--;
					print(v);
				}
			}
			if(v[13][11]=="*"){
				cout<<"\n\n!!!!!!!!! You have won !!!!!!!!!!!     \n\n";
				system("pause");
				break;
			}
		}	
		
	}
}

void print(string n[14][13]){
	int i,j;
	system("cls");
	for(i=0;i<14;i++){
		for(j=0;j<13;j++){
			cout<<n[i][j];
		}
		cout<<endl;
	}
}



void fill(string n[14][13]){
	int i,j;
	string m[14][13] = {
	{"*"," ","l","l","l","l","l","l","l","l","l","l","l"},
	{"l"," "," ","l"," "," "," "," "," "," "," "," ","l"},
	{"l","l"," ","l","l","l"," ","l","l","l","l","l","l"},
	{"l","l"," "," "," ","l"," ","l"," "," "," "," ","l"},
	{"l","l","l","l"," "," "," ","l"," ","l","l"," ","l"},
	{"l"," ","l","l"," ","l","l","l"," ","l"," "," ","l"},
	{"l"," ","l"," "," "," "," "," "," ","l"," ","l","l"},
	{"l"," ","l"," ","l"," ","l","l"," ","l"," ","l","l"},
	{"l"," ","l"," ","l"," ","l","l"," ","l"," ","l","l"},
	{"l"," ","l"," ","l"," ","l","l"," ","l"," ","l","l"},
	{"l"," ","l"," ","l"," ","l","l"," ","l"," ","l","l"},
	{"l"," ","l"," ","l"," ","l","l","l","l"," "," ","l"},
	{"l"," "," "," ","l"," "," "," "," ","l","l"," ","l"},
	{"l","l","l","l","l","l","l","l","l","l","l"," ","l"}};
	for(i=0;i<14;i++){
		for(j=0;j<13;j++){
			n[i][j]=m[i][j];
		}
		cout<<endl;
	}
}