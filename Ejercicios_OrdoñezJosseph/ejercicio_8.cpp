#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

void raices(){
	double aumento=0.001, min=6.000, max=7.5;
	
	for(double i=min;i<=max;i+=aumento){
		cout<<setprecision(4);
		cout<<"Numero: "<<i;
		cout<<" Raiz: "<<sqrt(i)<<endl;
	}
}

int main(){
	cout<<"Raices cuadradas entre 6.0 y 7.5 con aumento de 0.001"<<endl;
	raices();
}