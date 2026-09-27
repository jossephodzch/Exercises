//algoritmo que permita calcular la fecha mas cercana al dia actual tomado entre varias fechas ingresadas por el usuario
#include <iostream>
using namespace std;

int fechaCercana(int dia,int mes,int anio,int diaA,int mesA,int anioA){
	int fechaA=diaA+mesA+anioA;
	int fechaI= dia+mes+anio;
	int resultado;
	return resultado=abs(fechaA-fechaI);
}

int main(){
	int diaAc=0,mesAc=0,anioAc=0;
	
	do{
		cout<<"Ingrese el dia: ";cin>>diaAc;
		cout<<"Ingrese el mes: ";cin>>mesAc;
		cout<<"Ingrese el ani: ";cin>>anioAc;
	}while(diaAc<1 || mesAc<1 || anioAc<1 ||diaAc>31 ||mesAc>12);
	
	int dia=0,mes=0,anio=0,n_fechas=0, diaR, mesR, anioR,f_cercana=0, resultado=0;
	
	do{
		cout<<"Ingrese la cantidad de fechas a calcular: ";cin>>n_fechas;
	}while(n_fechas<1);
	
	for(int i=1;i<=n_fechas;i++){
		do{
		cout<<"------"<<i<<"# fecha------"<<endl;
		cout<<"Ingrese el dia: ";cin>>dia;
		cout<<"Ingrese el mes: ";cin>>mes;
		cout<<"Ingrese el ani: ";cin>>anio;
		}while(dia<1 || mes<1 || anio<1 || dia>31 || mes>12);
		
		f_cercana=fechaCercana(dia,mes,anio,diaAc,mesAc,anioAc);
		if(i==1){
			resultado=f_cercana;
			diaR=dia;mesR=mes;anioR=anio;
		}
		if(f_cercana<resultado){
			resultado=f_cercana;
			diaR=dia;mesR=mes;anioR=anio;
		}
	}
	
	cout<<"\nLa fecha mas cercana a "<<diaAc<<"/"<<mesAc<<"/"<<anioAc<<" es: "<<endl;
	cout<<diaR<<"/"<<mesR<<"/"<<anioR;
}