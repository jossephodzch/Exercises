#include <iostream>
using namespace std;
void coordenadas(double radio){
	int x, y;
	
	for(x=-radio;x<=radio;x++){
		for(y=-radio;y<=radio;y++)
		if(x*x+y*y==radio*radio){
			cout<<"("<<x<<";"<<y<<")"<<endl;
		}
	}
}

int main(){
	double rad=0;
	cout<<"Coordenadas enteras sobre el circulo x^2 + y^2 = r^2"<<endl;
	while(rad<1){
		cout<<"Ingrese el radio del circulo con coordenadas (0;0)"<<endl;
		cin>>rad;
	}
	cout<<endl;
	coordenadas(rad);
}