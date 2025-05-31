#include<iostream>
using namespace std;
int main(){
	int i, numero, suma, impar;
	do{
	cout<<"Ingrese un numero: "; 
	cin>>numero;
	if(numero<=0){
		cout<<"Intente nuevamente ingresando un numero mayor que cero."<<endl;
	}
	}while(numero<=0);
	suma=0;
	for (i=1;i<=numero;i++){
		suma+=i;
	}
	cout<<"La suma de los primeros "<<numero<<" numeros es: "<<suma<<endl;
	if(suma%2==0){
		cout<<"Dato: la suma de los numeros es un numero par.";
	}else{
		cout<<"Dato: la suma de los numeros es un numero impar.";
	}
	return 0;
}