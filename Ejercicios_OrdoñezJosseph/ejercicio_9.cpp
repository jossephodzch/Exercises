#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

void raices(double aumento, double minimo, double maximo){
	
	for(double i=minimo;i<=maximo;i+=aumento){
		cout<<setprecision(4);
		cout<<"Numero: "<<i;
		cout<<" Raiz: "<<sqrt(i)<<endl;
	}
}

int main(){
	double min=0, max=0, aum=0;
	cout<<"Raices cuadradas entre [A,B] con aumento"<<endl;
	
	while(min<1 || max<1 || min==max || min>max || aum<=0){
		cout<<"Ingrese el minimo: ";cin>>min;
		cout<<"Ingrese el maximo: ";cin>>max;
		cout<<"Ingrese el aumento: ";cin>>aum;
	}
	
	raices(aum,min,max);
}