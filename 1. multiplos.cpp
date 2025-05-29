#include <iostream>
#include <windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int i, suma=0;
    double promedio, multiplo, numero;
    do{
    cout<<"Ingrese la cantidad de múltiplos de 7 que necesita: ";
    cin>>numero;
    if(numero<=0){
    	cout<<"Por favor ingrese un número mayor que cero."<<endl<<endl;
	}
	} while (numero<=0);
    multiplo=0;
    cout<<"Los primeros "<<numero<<" múltiplos de 7 son: "<<endl;
    for (i=1;i<=numero;i++) {
        multiplo=7*i;
        suma=suma+multiplo;
        cout<<i<<". "<<multiplo<<endl;
    }
    promedio=suma/numero;
    cout<<"El promedio de los multiplos es "<<promedio;
    return 0;
}