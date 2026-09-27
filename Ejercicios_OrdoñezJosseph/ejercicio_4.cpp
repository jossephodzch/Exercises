#include <iostream>

using namespace std;

void multiplos(int numero, int cantidad,int lista[]) {
	for(int i=0; i<cantidad; i++){
		lista[i]=numero*(i+1);
	}
}

double promedio(int lista[],int cantidad,int a, int b){
	double resultado=0;
	int cont=0;
	for(int i=0; i<cantidad;i++){
		if(lista[i]>=a && lista[i]<=b){
			resultado+=lista[i];
			cont++;
		}
	}
	if(cont==0){
		return 0;
	}
	return resultado/cont;
}

int main()
{
	int num, cant=0,a=1,b=0;
	
	cout<<"Ingrese el numero: ";cin>>num;
	while(cant<1){
		cout<<"Ingrese la cantidad de multiplos a generar: "; cin>>cant;
	}
	
	while(a>b){
		cout<<"Rango [a,b]"<<endl;
		cout<<"A: ";cin>>a;
		cout<<"B: ";cin>>b;
	}
	
	int n_multiplos[cant];
	multiplos(num,cant,n_multiplos);	
	cout<<"El promedio dentro del rango es: "<<promedio(n_multiplos,cant,a,b)<<endl;
	cout<<"Los multiplos de "<<num<<" son: "<<endl;
	
	for(int i=0;i<cant;i++){
		cout<<n_multiplos[i]<<" ";
	}
}