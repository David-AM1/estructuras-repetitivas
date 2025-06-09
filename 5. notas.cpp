#include <iostream>
using namespace std;

int main() {
    double aprobados = 0, desaprobados = 0, promedio, sumaNotas = 0, nota, minimo, nMayor = -1;
    char respuesta;

    cout << "Ingrese la nota minima para aprobar: ";
    cin >> minimo;

    do {
        do {
            cout << "Ingrese la nota: ";
            cin >> nota;
            if (nota < 0) {
                cout << "Intente nuevamente ingresando una nota mayor o igual a cero." << endl;
            }
        } while (nota < 0);

        if (nota > nMayor) {
            nMayor = nota;
        }

        if (nota >= minimo) {
            aprobados++;
        } else {
            desaprobados++;
        }

        sumaNotas += nota;

        do {
            cout << "Continuar ingresando notas? (s/n): ";
            cin >> respuesta;
            if (respuesta != 's' && respuesta != 'n') {
                cout << "ERROR: La respuesta debe ser 's' o 'n'. Intente nuevamente." << endl;
            }
        } while (respuesta != 's' && respuesta != 'n');

    } while (respuesta == 's');

    // Calculo final del promedio
    promedio = sumaNotas / (aprobados + desaprobados);

    // Resultados finales
    cout << "Estudiantes: " << aprobados + desaprobados << endl;
    cout << "Aprobados: " << aprobados << endl;
    cout << "Desaprobados: " << desaprobados << endl;
    cout << "Promedio del salon: " << promedio << endl;
    cout << "Nota mayor del salon: " << nMayor << endl;

    return 0;
}

