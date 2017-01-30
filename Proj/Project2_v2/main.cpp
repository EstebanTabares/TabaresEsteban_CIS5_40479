//Maze. Working.
#include <iostream>

using namespace std;

void print(string n[14][13]);

void fill(string n[14][13]);


int main(){
	char p = '1';
	string v[14][13];
	while (p != 48){
            cout<<string(50, '\n');
            cout<<"Maze\n";
            cout<<"Use WASD and enter to move in the maze.\n\n\n ";
            cout<<"Please press enter to start the game";
            cin.get();
            int i=0,j=0;
            fill(v);
            print(v);
            while(p!='0'){
                cin>>p;
                if(p=='d'&&j!=13){ //Right border
                        if(v[i][j+1]!="l"){
                                v[i][j]=" ";
                                v[i][j+1]="*";
                                j++;
                                print(v);
                        }
                }
                if(p=='a' && j!=0){ //left border
                        if(v[i][j-1]==" "){
                                v[i][j-1]="*";
                                v[i][j]=" ";
                                j--;
                                print(v);
                        }
                }
                if(p=='s'&&i!=13){ //Down border
                        if(v[i+1][j]==" "){
                                v[i][j]=" ";
                                v[i+1][j]="*";
                                i++;
                                print(v);
                        }
                }
                if(p=='w'&&i!=0){ //Up border
                        if(v[i-1][j]==" "){
                                v[i-1][j]="*";
                                v[i][j]=" ";
                                i--;
                                print(v);
                        }
                }
                if(v[13][11]=="*"){
                        cout<<"\n\n!!!!!!!!! You have won !!!!!!!!!!!     \n\n";
                        cin.ignore();
                        cin.get();
                        p='0';

                }
            }	

    }
}

void print(string n[14][13]){
	int i,j;
	cout<<string(50, '\n');
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
