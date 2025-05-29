#include<iostream>
using namespace std;

int main() {
    int i, c_numeros, numero;
    double promedioNoNegativos, suma, c_noNegativos;
    suma=0;
    c_noNegativos=0;
    cout<<"Ingrese la cantidad de numeros a evaluar: ";
    cin>>c_numeros;
    cout<<"Ingrese los numeros: "<<endl;
    for (i=1;i<=c_numeros;i++){
        cin>>numero;
        if (numero>=0){
            suma+=numero;
            c_noNegativos++;
        }
    }
    promedioNoNegativos=suma/c_noNegativos;
    cout<<"Promedio de no negativos: "<<promedioNoNegativos;
    return 0;
}
