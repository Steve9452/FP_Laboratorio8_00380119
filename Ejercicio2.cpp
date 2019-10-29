#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int carnet[8],matriz[5][9]{0},carnetcompleto,contador=0,aux=0;
	cout<<"Ingrese numero de carnet completo y luego presiones enter: ";cin>>carnetcompleto;
	for(int i=7;i>=0;i--){
		
		carnet[i]=carnetcompleto%10;
		carnetcompleto/=10;
	}//Carnet guardado en carnet[]

//Copia de carnet a matriz	
for(int i=0;i<4;i++){
	contador++;
	if((i==0)||(i==2)){
	
	for(int j=0;j<8;j++){
		//cout<<carnet[j]<<endl<<j;
		matriz[i][j]=carnet[j];
		contador++;
	}
	}
	else if((i==1)||(i==3)){
	
	for(int k=7;k>=0;k--){
		
		matriz[i][k]=carnet[aux];
		aux++;
		contador++;
	}
	}
	matriz[i][8]=contador;
}
for(int i=0;i<9;i++){
	contador++;
	matriz[4][i]=contador;
}			
//Mostrar matriz en pantalla
	cout<<endl<<"CARNET: ";
	for(int i=0;i<8;i++){
		cout<<carnet[i]<<"|";
	}
	cout<<endl<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<9;j++){
		cout<<matriz[i][j]<<"|  ";
		}
	cout<<endl;
	}
	cout<<"Pulse una tecla para continuar";
	getch();
	return 0;
}
