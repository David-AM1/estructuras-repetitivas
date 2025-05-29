#include <iostream>
using namespace std;

int main () {
	double aprobados, desaprobados, promedio, sumaNotas, nota, minimo;
	char respuesta;
	aprobados=0;
	desaprobados=0;
	promedio=0;
	sumaNotas=0;
	cout << "Ingrese la nota minima para aprobar: ";
	cin >> minimo;
	do {
		cout <<"Ingrese la nota: ";
		cin >> nota;
		if (nota >= minimo){
			aprobados++;
		} else {
			desaprobados++;
		}
		sumaNotas += nota;
		promedio = sumaNotas / (aprobados + desaprobados);
	cout << "Continuar ingresando notas? (s/n): ";
	cin >> respuesta;
	} while (respuesta == 's');
	if (respuesta == 'n'){
	cout <<"Aprobados: "<<aprobados<<endl;
	cout <<"Desaprobados: "<<desaprobados<<endl;
	cout <<"Promedio del salon: "<<promedio<<endl;
	} else {
		cout<<"ERROR: La respuesta debe 's' o 'n'";
	}
	return 0;
}