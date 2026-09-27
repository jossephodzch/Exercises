#include <iostream>

using namespace std;

void ascendente(double lista[]) {
	double mayor;
	for(int i=0;i<2;i++){
		for(int j=0;j<2-i;j++){
			if(lista[j]>lista[j+1]){
			mayor=lista[j];
			lista[j]=lista[j+1];
			lista[j+1]=mayor;
		}
		}
	}
	cout<<"Lista de numeros ordenada de forma ascendente:"<<endl;
	for(int i=0;i<3;i++){
		cout<<lista[i]<<" ";
	}
}

void descendente(double lista[]) {
	double menor;
	for(int i=0;i<2;i++){
		for(int j=0;j<2-i;j++){
			if(lista[i]<lista[i+1]){
				menor=lista[i];
				lista[i]=lista[i+1];
				lista[i+1]=menor;
			}
		}
	}
	cout<<"Lista de numeros ordenada de forma descendente:"<<endl;
	for(int i=0;i<3;i++){
		cout<<lista[i]<<" ";
	}
}

int main()
{
	int op=0;
	double v[3];
	
	for(int i=0;i<3;i++){
		cout<<i+1<<"# numero: ";cin>>v[i];
	}
	cout<<"Ordenar de forma:"<<endl;
	while(op<1 || op>2){
		cout<<"1. Ascendente 2. Descendente"<<endl;
		cout<<"Seleccione: ";cin>>op;
	}
	
	if(op==1){
		ascendente(v);
	}else{
		descendente(v);
	}
}