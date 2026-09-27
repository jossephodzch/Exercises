#include <iostream>

using namespace std;

int factorial(int n) {
	int resultado=1;
	
	for(int i=1;i<=n;i++){
		resultado*=i;
	}
	return resultado;
}

int main()
{
	int cant=0, num;
	
	while(cant<1){
		cout<<"Ingrese la cantidad de valores a procesar: "; cin>>cant;
	}
	
	for(int i=1;i<=cant;i++){
		cout<<"\n"<<i<<" numero: ";cin>>num;
		if(num<0){
			cout<<"No se puede calcular el factorial de un numero negativo"<<endl;	
		}else{
			cout<<"El factorial de "<<num<<" es:"<< factorial(num)<<endl;
		}
	}
}

