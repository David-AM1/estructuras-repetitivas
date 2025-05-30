#include <iostream>
using namespace std;
int main(){
	int numero, suma=0, i=1;
	cout<<"Digite numeros (Excepto negativos): "<<endl;
	do{
	cout<<i<<". ";
	cin>>numero;
	i++;
	if(numero>=0){
		suma+=numero;
	}
	}while (numero>=0);
	cout<<"La suma de numeros digitados (positivos) es "<<suma<<endl;
	cout<<"Fin de la captura.";
	return 0;
}