#include<iostream>
using namespace std;
int main(){
	int i, numero, suma;
	cout<<"Ingrese un numero: "; 
	cin>>numero;
	suma=0;
	for (i=1;i<=numero;i++){
		suma+=i;
	}
	cout<<"La suma de los primeros "<<numero<<" numeros es: "<<suma;
	return 0;
}