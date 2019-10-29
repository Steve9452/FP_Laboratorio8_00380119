#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

int main(){
	int arr[10];
	for(int i=0;i<=9;i++){
		arr[i] = rand() % 9;
		
	}
	for (int i=0;i<=9;i++){
		cout<<arr[i]<<" ";
	}
	getch();
	return 0;
}
