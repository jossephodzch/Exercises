#include <iostream>
using namespace std;
int leerN(int min, int max){
	int n;
	do{
		cout<<"Ingresar el tamano ["<<min<<".."<<max<<"]: ";
		cin>>n;
	}while(n<min || n>max);
	return n;
}

void ingresoDatos(int v[],int tamano){
	for(int i=0; i<tamano;i++){
		cout<<"Valor de la posicion ["<<i<<"]: ";
		cin>>v[i];
	}
}

void imprimirDatos(int v[], int tamano){
	for(int i=0; i<tamano;i++){
		cout<<v[i]<<" ";
	}
}