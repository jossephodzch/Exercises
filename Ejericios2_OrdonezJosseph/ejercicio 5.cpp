/*Ingresar un arreglo cuyos valores deberan ser únicos (no admitir repeticiones).*/
#include <iostream>
#include"utilidades.h"
#define EXT 15
using namespace std;

void ingresoSinRep(int vector[], int tamano){
	int i=0;
	
	do{
		bool rep=false;
		cout<<"Valor de la posicion ["<<i<<"]: ";
		cin>>vector[i];
		for(int j=0;j<i;j++){
			if(vector[i]==vector[j]){
				rep=true;
				break;
			}
		}
		
		if(rep==false){
			i++;
		}
	}while(i<tamano);
}

int main(){
	int n, v[EXT];
	
	n=leerN(1,EXT);
	
	cout<<endl;
	
	ingresoSinRep(v,n);
	
	cout<<"\nIMPRESION DEL VECTOR"<<endl;
	imprimirDatos(v,n);
	
	cout<<endl;
	system("pause");
}