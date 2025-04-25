#include <iostream>
#include <string>
#include <cctype> // Para usar tolower

using namespace std;

//Estructura
struct persona {
    char nombre[60];
    int edad;
};

//Función para contar vocales (metodo)
int contarVocales(const char nombre1[]) {
    int cont = 0;
    for (int j = 0; nombre1[j] != '\0'; j++) {
        char v = tolower(nombre1[j]); //Tolower para convertir a minúscula
        if (v == 'a' || v == 'e' || v == 'i' || v == 'o' || v == 'u') {
            cont++;
        }
    }
    return cont;
}

int main() {
    int n;
    cout << "Ingrese el numero de personas: ";
    cin >> n;
    cin.ignore(); //Limpiar el buffer

    //Declaramos el arreglo de la estructura
    persona persona[n];

    //Ingreso de datos
    for (int i = 0; i < n; i++) {
        cout << "\nIngrese el nombre de la persona " << i + 1 << ": ";
        cin.getline(persona[i].nombre, 60);

        cout << "Ingrese la edad de la persona " << i + 1 << ": ";
        cin >> persona[i].edad;
        cin.ignore();
    }

    //Contar las vocales
    for (int i = 0; i < n; i++) {
        int numVocales = contarVocales(persona[i].nombre);
        cout << "El nombre de " << persona[i].nombre << " tiene "
             << numVocales << " vocales." << endl;
    }

    return 0;
}