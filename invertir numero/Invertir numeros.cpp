/* Programa que permita invertir el orden de los digitos de cada numero entero ingresado

N	Num 	Nuevo Num
5	-2		-2
	103		301
	-2564	-4652*/
	
#include <iostream>
using namespace std;

int main(){
	
	system("color f0");
	int n, cont ,num,nnum,dig;//dig digitos extraidos
	
	do{
		cout<<endl<<"Ingrese la cantidad de valores a procesar: ";	cin>>n;	
	}while(n<1);
	
	cout<<endl;
	
	for(cont=1;cont<=n;cont++){//ciclo determinado que permite ingresar n valores
		cout<<endl<<"Ingrese un valor: "; cin>>num;
		nnum=0;	//inicializar el nnum
		
		do{					//ciclo de individualizacion
			dig=num%10;		//extraer el ultimo digito de num
			num/=10;		//eliminar el utlimo digito
			nnum=(nnum*10)+dig; //acomodar el nuevo digito en el nuevo numero
		}while(num!=0); //repetir mientras haya digitos aun en el numero original
		
		cout<<endl<<"El nuevo numero con digitos invertidos es: "<<nnum<<endl;
	}
}
 

