#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int matriz[5][5]{0};
	int contador=0;
	
	
for(int h=0;h<5;h++)
{
matriz[h][h]=1;
	
}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		cout<<matriz[i][j]<<" ";	
		}
	
	cout<<endl;
	}
	getch();
	return 0;
}
