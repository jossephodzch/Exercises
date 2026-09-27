/*Permitir el ingreso completo de valores en un arreglo, y eliminar de este aquellos valores que se encuentren repetidos*/

/*Ingresar valores en un arreglo, entre los cuales se podran admitir hasta un maximo de N repeticiones para cada valor.*/

#include <iostream>
#include "utilidades.h"

#define EXT 15 
using namespace std;

void eliminarRep(int vector[], int *tamano){
	for(int i=0;i<*tamano-1;i++){
		for(int j=i+1;j<*tamano;j++){
			if(vector[i]==vector[j]){
				for (int k = j; k < *tamano - 1; k++) {
                    vector[k] = vector[k + 1];
                }
                (*tamano)--;
                j--; 
			}
		}
	}
}

int main(){
	int n, v[EXT], rep;
	
	cout<<"DEFINIR DIMENSION DEL VECTOR"<<endl;
	n=leerN(1,EXT);

	cout<<"\nINGRESO DATOS"<<endl;
	ingresoDatos(v,n);
	
	cout<<"\nIMPRESION DEL VECTOR"<<endl;
	imprimirDatos(v,n);
	
	cout<<"\nIMPRESION DEL VECTOR SIN DATOS REPETIDOS"<<endl;
	eliminarRep(v,&n);
	
	imprimirDatos(v,n);
	
	cout<<endl;
	system("pause");
}
	