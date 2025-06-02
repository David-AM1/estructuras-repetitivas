#include <iostream>
using namespace std;

int main () {
	double aprobados, desaprobados, promedio, sumaNotas, nota, minimo, nMayor=0;
	char respuesta;
	aprobados=0;
	desaprobados=0;
	promedio=0;
	sumaNotas=0;
	cout << "Ingrese la nota minima para aprobar: ";
	cin >> minimo;
	do {
		do{
			cout <<"Ingrese la nota: ";
			cin >> nota;
			if(nota<0){
				cout<<"Intente nuevamente ingresando una nota mayor o igual a cero."<<endl;
			}
		}while(nota<0);
		if(nota>=nMayor){
			nMayor=nota;
		}
		if (nota >= minimo){
			aprobados++;
		} else {
			desaprobados++;
		}
		sumaNotas += nota;
		promedio = sumaNotas / (aprobados + desaprobados);
		do{
			cout << "Continuar ingresando notas? (s/n): ";
			cin >> respuesta;
			if(respuesta!='s' and respuesta!='n'){
				cout<<"ERROR: La respuesta debe ser 's' o 'n'. Intente nuevamente."<<endl;
			}
		}while(respuesta!='s' and respuesta!='n');
	} while (respuesta == 's');
	if (respuesta == 'n'){
	cout << "Estudiantes: "<<aprobados + desaprobados <<endl;
	cout <<"Aprobados: "<<aprobados<<endl;
	cout <<"Desaprobados: "<<desaprobados<<endl;
	cout <<"Promedio del salon: "<<promedio<<endl;
	cout <<"Nota mayor del salon: "<<nMayor<<endl;
	} else {
		cout<<"ERROR: La respuesta debe 's' o 'n'";
	}
	return 0;
}