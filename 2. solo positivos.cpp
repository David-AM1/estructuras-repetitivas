#include <iostream>
using namespace std;
int main(){
	int numero;
	cout<<"Digite numeros (Excepto negativos): "<<endl;
	do{
	cin>>numero;
	}while (numero>=0);
	cout<<"Fin de la captura.";
	return 0;
}