/* Determinar si un arreglo A esta contenido completamente en otro arreglo B (o viceversa), ambos ingresados por el usuario*/

#include <iostream>
#include "utilidades.h"
#define EXT 10

using namespace std;

void analisisAB(int v1[], int v2[], int n1,int n2){
	int cont=0;
	for(int i=0;i<n1;i++){
		for(int j=0;j<n2;j++){
			if(v1[i]==v2[j]){
				cont++;
				break;
			}
		}
	}
	if(cont==n1){
		cout<<"\nEl vector A se encuentra enteramente en B";
	}
}

void analisisBA(int v1[], int v2[], int n1,int n2){
	int cont=0;
	for(int i=0;i<n2;i++){
		for(int j=0;j<n1;j++){
			if(v2[i]==v1[j]){
				cont++;
				break;
			}
		}
	}
	if(cont==n2){
		cout<<"\nEl vector B se encuentra enteramente en A";
	}
}

int main(){
	int vA[EXT], vB[EXT];
	int nA,nB;
	cout<<"EXTENSION VECTORES"<<endl;
	
	cout<<"\nDimension vector  A"<<endl;
	nA=leerN(1,EXT);
	
	ingresoDatos(vA,nA);
	
	cout<<"\nDimension vector  B"<<endl;
	nB=leerN(1,EXT);
	
	ingresoDatos(vB,nB);
	
	cout<<"\nImpresion de vector A"<<endl;
	imprimirDatos(vA,nA);
	
	cout<<"\nImpresion de vector B"<<endl;
	imprimirDatos(vB,nB);
	
	analisisAB(vA,vB,nA,nB);
	analisisBA(vA,vB,nA,nB);
	
	cout<<endl;
	system("pause");
}