/*Generar un listado ordenado de numeros enteros comprendidos entre los valores 
A y B cuya disposición de digitos se lea igual de izquierda a derecha como de derecha a izquierda.*/

#include <iostream>
#include "utilidades.h"

#define EXT 15 
using namespace std;

void palindromo(int min, int max){
	for(int i=min;i<max;i++){
		int aux = i;
        int invertir = 0;

		while(aux!=0){
			invertir=(invertir*10)+(aux%10);
			aux/=10;
		}
		if(i==invertir){
			cout<<i<<" ";
		}
	}
}

int main(){
	int A,B;
	
	cout<<"DEFINIR RANGO"<<endl;
	
	do{
		cout<<"Inicio: ";
		cin>>A;
		cout<<"Fin: ";
		cin>>B;
	}while(A>B);
	
	cout<<"\nNumeros palindromos dentro del rango ["<<A<<"..."<<B<<"]"<<endl;
	palindromo(A,B);
	cout<<endl;
	system("pause");
}
	