/*Ingresar varios valores en un arreglo, y ubicar los valores positivos 
en la seccion inicial del mismo, ordenados ascendentemente. Los valores
 negativos se deberan ubicar en la seccion final del mismo, ordenados descendentemente.*/
 
 #include <iostream>
#include "utilidades.h"

#define EXT 15 
using namespace std;

void ordenAsc(int vector[], int tamano){
    for(int i = 0; i < tamano - 1; i++){
        for(int j = 0; j < tamano - 1 - i; j++){
            if(vector[j] > vector[j + 1] && vector[j]>=0){
                int aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
}

void ordenDesc(int vector[], int tamano){
    for(int i = 0; i < tamano - 1; i++){
        for(int j = 0; j < tamano - 1 - i; j++){
            if(vector[j] < vector[j + 1] && vector[j]<0){
                int aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
}


int main(){
	int n, v[EXT], n2;
	
	cout<<"DEFINIR DIMENSION DEL VECTOR"<<endl;
	n=leerN(1,EXT);

	cout<<"\nINGRESO DATOS"<<endl;
	ingresoDatos(v,n);

	cout<<"\nIMPRESION DEL VECTOR"<<endl;
	imprimirDatos(v,n);
	
	cout<<"\nIMPRESION DEL VECTOR ORDENADO CON VALORES POSITIVOS AL INICIO Y NEGATIVOS AL FINAL"<<endl;
	ordenAsc(v,n);
	ordenDesc(v,n);
	imprimirDatos(v,n);
	cout<<endl;
	system("pause");
}
	