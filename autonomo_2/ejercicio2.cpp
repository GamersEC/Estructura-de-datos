//Nombre: Marcus Alexander Mayorga Martínez
//Fecha: 27/04/2025

#include <iostream>
using namespace std;

//Estructura estudiante
struct estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

//Función de promedios en orden descendente
void ordenarPromedio(estudiante estudiantes[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (estudiantes[i].promedio < estudiantes[j].promedio) {
                estudiante aux = estudiantes[i]; //auxilar para intercambiar valores
                estudiantes[i] = estudiantes[j];
                estudiantes[j] = aux;
            }
        }
    }
}

//Función principal
int main() {

    //Arreglo de 5 estudiantes
    estudiante estudiantes[5];

    //Solicitamos los datos del estudiante
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": " << endl;

        cout << "Nombre: ";
        cin.getline(estudiantes[i].nombre, 50);

        cout << "Edad: ";
        cin >> estudiantes[i].edad;

        cout << "Promedio: ";
        cin >> estudiantes[i].promedio;
        cin.ignore(); //Limpiar el buffer
    }

    //Poner en orden descendente
    ordenarPromedio(estudiantes, 5);

    cout << "Estudiantes ordenados por promedio en orden descendente:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
        cout << endl;
    }

    return 0;
}