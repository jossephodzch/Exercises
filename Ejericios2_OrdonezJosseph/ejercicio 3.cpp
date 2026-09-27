/*Generar los N primeros terminos de la serie de Fibonacci, ubicarlos en un arreglo en el orden inverso al que fueron generados.*/
#include <iostream>
#include "utilidades.h"
#define EXT 15

using namespace std;

void fibonacci(int v1[],int cantidad){
	v1[0]=0;
	v1[1]=1;
	for(int i=2; i<cantidad;i++){
		v1[i]=v1[i-1]+v1[i-2];
	}
}

void invertirSerie(int v1[],int v2[],int cantidad){
	for(int i=0; i<cantidad;i++){
		v2[cantidad-i-1]=v1[i];
	}
}

int main(){
	int n;
	int serie[EXT];
	int serie2[EXT];
	n=leerN(1, EXT);
	
	cout<<"\nLos primeros "<<n<<" numeros de fibonacci son:"<<endl;
	
	fibonacci(serie, n);
	imprimirDatos(serie,n);
	
	cout<<"\nSerie en orden inverso"<<endl;
	
	invertirSerie(serie, serie2, n);
	imprimirDatos(serie2,n);
	cout<<endl;
	system("pause");
}