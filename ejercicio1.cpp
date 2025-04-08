//Nombre: Marcus Alexander Mayorga Martínez
//Lista de números enteros
//Insertar números
//Mostrar una lista de números

#include <iostream>
#include <list>
using namespace std;

int main() {

    // Crear una lista de enteros
    list<int> numeros;

    //Insertar push_back();
    numeros.push_back(5);
    numeros.push_back(6);
    numeros.push_back(7);
    numeros.push_back(1);

    // Mostrar la lista
    cout << "Lista de numeros: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;

    //Eliminar elementos: pop_front() elimina el primer elemento
    numeros.pop_front();

    //Mostrar la nueva lista
    cout << "Lista de numeros: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}