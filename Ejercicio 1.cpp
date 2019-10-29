#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int carnet[8], carnetinv[8],aux=7,carnetcompleto,j=0;	
/*	for (int i=0; i<8;i++){
		cin>>carnet[i];	
		carnetinv[aux]=carnet[i];
		aux--;
	}*/
		
	cout<<"Ingrese numero de carnet completo y luego presiones enter: ";cin>>carnetcompleto;
	for(int i=7;i>=0;i--){
		carnet[i]=carnetcompleto%10;
		carnetinv[j]=carnetcompleto%10;
		carnetcompleto/=10;
		j++;
	}
	//Impresion en pantaalla
	cout<<"PRIMER ARREGLO: "<<endl;
	for (int i=0; i<8;i++){
		cout<<carnet[i]<<"|";	
		
	}	
	cout<<"\nSEGUNDO AREGLO: "<<endl;
	for (int i=0; i<8;i++){
		cout<<carnetinv[i]<<"|";
		
	}
	cout<<"\npulse una tecla para continuar ... ";getch();
	return 0;
}
