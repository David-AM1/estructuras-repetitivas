#include<iostream>
#include<string>
using namespace std;
int main (){
	int suma, gastos;
	char respuesta;
	suma=0;
	do {
		cout << "Ingrese el gasto: ";
        cin>>gastos;
		cout<<"Desea seguir introduciendo gastos? (s/n): ";
		cin>>respuesta;
		suma+=gastos;
	}while(respuesta == 's');
	if ( respuesta == 'n' ){
		cout<<"El gasto total es: "<<suma;
	} else {
		cout<< "ERROR: Responda solo con 'si' o 'no'.";
		}
return 0;	
}