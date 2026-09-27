/*Permitir el ingreso de un arreglo que contendra una lista de estudiantes, y otro arreglo para contener sus calificaciones. 
Presentar un listado de los N estudiantes con mejores calificaciones*/

#include <iostream>
#include "utilidades.h"
#define EXT 10
using namespace std;

void ordenDatos(string vE[],int vN[], int tamano){
	int auxN;
	string auxE;
	for(int i=0; i<tamano-1;i++){
		for(int j=0;j<tamano-1-i;j++){
			if(vN[j]<vN[j+1]){
				auxN=vN[j];
				vN[j]=vN[j+1];
				vN[j+1]=auxN;
				
				auxE=vE[j];
				vE[j]=vE[j+1];
				vE[j+1]=auxE;
			}
		}
	}
	
}

void ingresoDatos(string vE[],int vN[], int tamano){
	for(int i=0;i<tamano;i++){
		do{
			cout<<endl<<i+1<<"# Estudiante";
			cout<<"Nombre: ";
			cin>>vE[i];
		
			cout<<"Nota [0-10]: ";
			cin>>vN[i];	
		}while(vN[i]<0 || vN[i]>10);
	}
}

void impNdatos(string vE[],int vN[],int tamano){
	for(int i=0; i<tamano;i++){
		cout<<"Estudiante: "<<vE[i]<<" Nota: "<<vN[i]<<endl;
	}
}
int main(){
	int n,notas[EXT],n2;
	string nombres[EXT];
	cout<<"DECLARAR CANTIDAD DE ESTUDIANTES"<<endl;
	n= leerN(1,EXT);
	
	cout<<"\nINGRESO DE ESTUDIANTES Y NOTAS"<<endl;
	
	ingresoDatos(nombres,notas,n);
	ordenDatos(nombres,notas,n);
	
	cout<<"\nVISUALIZACION DE LAS PRIMERAS N NOTAS"<<endl;
	
	cout<<"Cuantas notas desea visualizar?: ";
	cin>>n2;
	
	cout<<endl<<"Lista"<<endl;
	impNdatos(nombres,notas,n2);
	
	cout<<endl;
	system("pause");
}