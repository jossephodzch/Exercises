
#include <iostream>

using namespace std;

#define EXT 15

struct numero{
	int val;
	int cdig;
};

int main(){
	system("color f0");
	
	numero valores[EXT];
	numero regAux;  //registro auxiliar para trasponer los valores del vector
	int n, aux;
	
	do{
		cout<<"Ingrese el tamano del vector: "; cin>>n;
	}while(n<1 ||n>EXT);
	
	for(int i=0;i<n;i++){
		cout<<endl<<"Valor de la posicion ["<<i<<"]: "; cin>>valores[i].val;
		aux=valores[i].val;
		valores[i].cdig=0;
		do{
			valores[i].val/=10;
			valores[i].cdig++;
		}while(valores[i].val!=0);
		valores[i].val=aux;;
		cout<<"El numero de la posicion ["<<i<<"] tiene "<<valores[i].cdig<<" digitos"<<endl;
	}
	
	cout<<endl<<"VALORES INGRESADOS EN EL VECTOR"<<endl;
	
	for(int i=0; i<n;i++){
		cout<<valores[i].val<<" ";
	}

	//ordenar el vector
	
	for(int i=0; i<=n-2;i++){
		for(int j=i+1;j<=n-1;j++){
			if(valores[i].cdig>valores[j].cdig){
				regAux=valores[i];
				valores[i]=valores[j];
				valores[j]=regAux;
			}
		}
	}
	
	//impresion ordenada de valores
	cout<<endl<<"Valores ordenados en funcion su cantidad de digitos"<<endl;
	
	for(int i=0; i<n;i++){
		cout<<valores[i].val<<" ";
	}
	cout<<endl;
	int n2=n;
	//impresion sin valores menores a dos y eliminarlos
	cout<<endl<<"Valores ordenados en funcion su cantidad de digitos menos 2"<<endl;
	for(int i=0; i<n;i++){
		if(valores[i].cdig<2){
			for(int j=i;j<n-1;j++){
				valores[j]=valores[j+1];
			}
			n--;
			i--;
		}
	}
	for(int i=0; i<n;i++){
		cout<<valores[i].val<<" ";
	}
	cout<<endl;
	cout<<endl;
	system("pause");
}  