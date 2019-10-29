#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int tabla[10][10]{0};
	int num1=1,num2=1,aux=1;
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			tabla[i][j]=(j+1)*aux;
		}
		aux++;
	}
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			
			cout<<tabla[i][j]<<"  ";
		}
		cout<<endl;
		
		
	}
	getch();
	return 0;
}
