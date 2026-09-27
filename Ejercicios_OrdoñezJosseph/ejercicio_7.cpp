#include <iostream>
#include <string>
using namespace std;

int ultimo(string lista, int cantidad){
	int resultado=0;
	for(int i=0;i<cantidad;i++){
		if(lista[i]=='.'){
			resultado=lista[cantidad-1]-'0';
			break;
		}
	}
	return resultado;
}



int main(){
	int cant,n=0;
	string cadena;
	
	while(n<1){
		cout<<"Ingrese la cantidad de valores a procesar: ";cin>>n;
	}
	
	for(int i=1; i<=n;i++){
		cout<<"\nIngrese el "<<i<<"# numero fraccionario: "; cin>>cadena;
		cant=cadena.length();
		cout<<"El ultimo digito fraccionario es: "<<ultimo(cadena,cant)<<endl;
	}
}