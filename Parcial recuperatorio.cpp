#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int main() {
    int cantidadMaterias;
    cout << "Ingrese la cantidad de materias: ";
    cin >> cantidadMaterias;

    vector<string> nombres;
    vector<double> notas;
    vector<double> ponderaciones;

    for (int i = 0; i < cantidadMaterias; ++i) {
        string nombre;
        double nota, ponderacion;

        cout << "Ingrese el nombre de la materia (A , B , C , D etc.): ";
        cin >> nombre;
        cout << "Ingrese la nota obtenida en " << nombre << ": ";
        cin >> nota;
        cout << "Ingrese la ponderacion de " << nombre << " (en porcentaje): ";
        cin >> ponderacion;

        nombres.push_back(nombre);
        notas.push_back(nota);
        ponderaciones.push_back(ponderacion);
    }

    double sumaPonderada = 0.0;
    double sumaPonderaciones = 0.0;

    for (int i = 0; i < cantidadMaterias; ++i) {
        sumaPonderada += notas[i] * ponderaciones[i];
        sumaPonderaciones += ponderaciones[i];
    }

    double promedioPonderado = sumaPonderada / sumaPonderaciones;

    cout << fixed << setprecision(2) << "El promedio ponderado final es: " << promedioPonderado << endl;

    return 0;
}
