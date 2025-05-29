#include <iostream>
using namespace std;

int main() {
    int i, multiplo, numero;
    cout<<"Ingrese la cantidad de multiplos de 7 que necesita: ";
    cin>>numero;
    multiplo=0;
    cout<<"Los primeros "<<numero<<" multiplos de 7 son: "<<endl;
    for (i=1;i<=numero;i++) {
        multiplo=7*i;
        cout<<i<<". "<<multiplo<<endl;
    }
    return 0;
}