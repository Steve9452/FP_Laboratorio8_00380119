#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main(){
	string nombre[5];
	int letras[5];
	for(int i=0;i<=4;i++){
		cin>>nombre[i];
		letras[i]=nombre[i].size();
	}
	for(int i=0;i<=4;i++){
		cout<<nombre[i]<<"= "<<letras[i]<<endl;
	}
	getch();
	return 0;
}
