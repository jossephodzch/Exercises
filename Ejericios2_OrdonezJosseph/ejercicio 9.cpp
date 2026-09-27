/*Permitir el ingreso de varios numeros en un arreglo, y modificar el orden 
de los mismos de forma tal que los N ultimos valores pasen a ser los primeros*/

#include <iostream>
#include "utilidades.h"

#define EXT 15 
using namespace std;

void cambioPosicion(int vector[], int tamano, int posicion){
	int aux=0;
	int vector2[EXT];
	for(int i=0;i<posicion;i++){
		vector2[i]=vector[(tamano)-posicion+i];
	}
	
	for(int i = posicion; i < tamano; i++){
        vector2[i] = vector[i - posicion];
    }

    for(int i = 0; i < tamano; i++){
        vector[i] = vector2[i];
    }
}

int main(){
	int n, v[EXT], n2;
	
	cout<<"DEFINIR DIMENSION DEL VECTOR"<<endl;
	n=leerN(1,EXT);

	cout<<"\nINGRESO DATOS"<<endl;
	ingresoDatos(v,n);

	do{
		cout<<"\nCuantos de los ultimos valores desea que pasen a las primeras posiciones: ";
		cin>>n2;
	}while(n2<1 || n2>n);
		
	cout<<"\nIMPRESION DEL VECTOR"<<endl;
	imprimirDatos(v,n);
	
	
	cout<<"\nIMPRESION DEL VECTOR CON N ULTIMOS DATOS EN LAS N PRIMERAS POSICIONES"<<endl;
	cambioPosicion(v,n,n2);
	
	imprimirDatos(v,n);
	
	cout<<endl;
	system("pause");
}
	