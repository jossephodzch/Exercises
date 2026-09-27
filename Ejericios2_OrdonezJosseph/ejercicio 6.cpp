/*Ingresar valores en un arreglo, entre los cuales se podran admitir hasta un maximo de N repeticiones para cada valor.*/

#include <iostream>
#include "utilidades.h"

#define EXT 15 
using namespace std;

void ingresoSinRepN(int vector[], int tamano, int repeticiones){
	int i=0;
	
	do{
		int cont=0;
		cout<<"Valor de la posicion ["<<i<<"]: ";
		cin>>vector[i];
		for(int j=0;j<i;j++){
			if(vector[i]==vector[j]){
				cont++;
			}
		}
		
		if(cont<repeticiones){
			i++;
		}else{
			cout<<"Ya no puede ingresar mas veces  el mismo dato"<<endl;
		}
	}while(i<tamano);
}

int main(){
	int n, v[EXT], rep;
	
	n=leerN(1,EXT);
	
	cout<<"DETERMINAR CUANTAS VECES SE PUEDE REPETIR UN VALOR ENTERO";
	
	rep=leerN(1,n);
	cout<<endl;
	
	ingresoSinRepN(v,n,rep);
	
	cout<<"\nIMPRESION DEL VECTOR"<<endl;
	imprimirDatos(v,n);
	
	cout<<endl;
	system("pause");
}