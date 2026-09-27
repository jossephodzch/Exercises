/*programa que permita ingresar matriz que permita determinar el menor elemento de su fila que es el mayor de su cumna punto de silla si todos los elementos de la matriz son diferentes entre si*/

#include <iostream>

using namespace std;
#define COL 15
#define FIL 15
int main(){
	int m[FIL][COL], fila,colum;
	
	cout<<"DEFINICION DEL TAMANO DE LA MATRIZ"<<endl;
	do{
		cout<<"Ingrese tamano de filas de la matriz entre [1-"<<FIL<<"]: ";	cin>>fila;
		cout<<"Ingrese tamano de filas de la matriz[1-"<<COL<<"]: ";	cin>>colum;
	}while(fila<1 || fila>FIL || colum<1 ||colum>COL);
	
	cout<<"INGRESO DE DATOS"<<endl;
	for(int i=0;i<fila;i++){
		for(int j=0;j<colum;j++){
			cout<<"Ingrese el elemento de la posicion ["<<i<<"]["<<j<<"]: ";	cin>>m[i][j];
		}
	}
	cout<<endl;

	cout<<"IMPRESION DE MATRIZ"<<endl;
	for(int i=0;i<fila;i++){
		for(int j=0;j<colum;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	//calculo del elemento silla
	int valor=0,menor_f,menor_c,pos=0;
	bool comp=false;
	valor=menor_f=menor_c=m[0][0];
	
	for(int i=0;i<fila;i++){
		for(int j=0;j<colum;j++){
			if(valor==m[i][j] && j!=0){
				comp=true;
				break;
			}else{
				if(menor_c>m[i][j]){
					menor_c=m[i][j];
					pos=j;
				}
			}	
		}
	}
	
	for(int i=0;i<fila;i++){
		if(menor_f<m[i][pos]){
					menor_f=m[i][pos];
				}
	}
	
	if(comp==true){
		cout<<"No se puede determinar el valor silla en la matriz, no todos los elementos son iguales"<<endl;
	}else{
		cout<<"El valor silla es "<<menor_f<<endl;
	}
}