#include <iostream>
#include <cmath>
# define PI 3.14159265358979323846 
using namespace std;

double areaCirculo(double radioMenor, double radioMayor) {
	double resultado;

	resultado=PI*(pow(radioMayor,2)-pow(radioMenor,2));
	
	return resultado;
}

int main()
{
	int cant=0;
	double a,b;
	
	while(cant<1){
		cout<<"Ingrese la cantidad de valores a procesar: "; cin>>cant;
	}
	
	for(int i=1;i<=cant;i++){
		a=b=-1;
		cout<<"\n------"<<i<<"# Circulo------"<<endl;
		while(a<0 || b<0 || b>a){
			cout<<"Radio mayor: ";cin>>a;
			cout<<"Radio menor: ";cin>>b;
		}
		cout<<"Area: "<<areaCirculo(b,a)<<endl;
	}
}