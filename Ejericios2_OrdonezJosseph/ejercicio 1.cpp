/* Ingresar dos arreglos, ordenar el primero ascendentemente, el segundo descendentemente. Proceder a intercalar ordenadamente los dos arreglos iniciales.*/

#include <iostream>
#include "utilidades.h"
#define EXT 10
using namespace std;



void ordenAsc(int v[], int tamano){
	int aux;
	for(int i=0; i<tamano-1;i++){
		for(int j=0;j<tamano-1-i;j++){
			if(v[j]>v[j+1]){
				aux=v[j];
				v[j]=v[j+1];
				v[j+1]=aux;
			}
		}
	}
}

void ordenDesc(int v[], int tamano){
	int aux;
	for(int i=0; i<tamano-1;i++){
		for(int j=0;j<tamano-1-i;j++){
			if(v[j]<v[j+1]){
				aux=v[j];
				v[j]=v[j+1];
				v[j+1]=aux;
			}
		}
	}
}

void intercalar(int a[],int b[],int tamano){
	int cont=0;
	for(int i=0;i<tamano;i++){
		cout<<a[i]<<" ";
		cout<<b[i]<<" ";
	}
}
int main(){
	int v1[EXT],v2[EXT], n;
	
	cout<<"DECLARAR DIMENSION DE LOS VECTORES"<<endl;
	n= leerN(1,EXT);
	
	cout<<endl<<"INGRESO DE DATOS"<<endl;
	
	cout<<endl<<"VECTOR 1"<<endl;
	
	ingresoDatos(v1,n);
	
	ordenAsc(v1,n);
	
	cout<<endl<<"VECTOR 2"<<endl;
	
	ingresoDatos(v2,n);
	ordenDesc(v2,n);
	
	cout<<endl<<"VECTOR 1 ORDENADO ASCENDENTE"<<endl;
	imprimirDatos(v1,n);
	cout<<endl<<"VECTOR 2 ORDENADO DESCENDENTE"<<endl;
	imprimirDatos(v2,n);
	
	cout<<endl<<"VECTORES INTERCALADOS"<<endl;
	intercalar(v1,v2,n);
	
	cout<<endl;
	system("pause");
}