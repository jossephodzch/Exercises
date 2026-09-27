/* Programa que permita invertir el orden de los digitos de cada numero entero ingresado

N	Num 	Nuevo Num
5	-2		-2
	103		301
	-2564	-4652*/
	
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	int n, cont ,num,nnum,dig1,dig2;//dig digitos extraidos
	
	do{
		cout<<endl<<"Ingrese la cantidad de valores a procesar: ";	cin>>n;	
	}while(n<1);
	
	cout<<endl;
	
	for(cont=1;cont<=n;cont++){//ciclo determinado que permite ingresar n valores
		cout<<endl<<"Ingrese un valor: "; cin>>num;
		nnum=0;	//inicializar el nnum
		int pot=1;
		do{		
			dig1=num%10;
			num/=10;
			if(num!=0){
				dig2=num%10;
				num/=10;		
				nnum=nnum+(dig1*pot*10)+(dig2*pot);
				pot*=100;
			}else{
				nnum=nnum+(dig1*pot);
				pot*=10;
			}
						
		}while(num!=0); 
		cout<<endl<<"El nuevo numero con digitos invertidos es: "<<nnum<<endl;
	}
}
 

