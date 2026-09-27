#include <iostream>
using namespace std;
void coordenadas(){
	int x, y;
	
	for(x=-5;x<=5;x++){
		for(y=-5;y<=5;y++)
		if(x*x+y*y==25){
			cout<<"("<<x<<";"<<y<<")"<<endl;
		}
	}
}

int main(){
	cout<<"Coordenadas enteras sobre el circulo x^2 + y^2 = 25"<<endl;
	coordenadas();
}