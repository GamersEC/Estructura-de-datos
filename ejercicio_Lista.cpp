//Nombre: Marcus Mayorga
//Fecha: 28/04/2025

#include <iostream>
using namespace std;

//Definir el nodo
struct Nodo {
    int dato; //Dato que guarda el nodo
    Nodo* siguiente; //ptr siguiente


    //Constructor
    Nodo (int valor) {
        dato=valor;
        siguiente=nullptr;
    }
};

//Clase lista
class lista {

private:
    Nodo* cabeza; //ptr apunta al siguiente

public:
    //Constructor
    lista() {
        cabeza=nullptr;
    }

    //Ingresar elementos al inicio
    //void ingresar(int valor) {
    //    Nodo* Nuevo = new Nodo(valor); //Crear un nuevo nodo
    //    Nuevo->siguiente=cabeza; //apuntar al siguiente nodo
    //    cabeza=Nuevo; //actualizar la cabeza
    //}


    //Ingresar elementos y ordenarlos
    void ingresar(int valor) {
        Nodo* nuevo = new Nodo(valor);
        if (cabeza == nullptr) {
            cabeza = nuevo;
        } else {
            Nodo *actual = cabeza;
            while (actual->siguiente != nullptr) { //Ir hasta el último nodo
                actual = actual->siguiente;
            }
            actual->siguiente = nuevo; //Conectar el nuevo al final
        }
    }


    //Mostrar
    void mostrar() {
        Nodo* actual=cabeza; //ptr apunta a la cabeza
        cout << "Los elementos de la lista: ";
        while(actual!=nullptr) { //Mientras no sea nulo
            cout<<actual->dato<<" -> "; //imprimir el dato
            actual=actual->siguiente; //mover al siguiente nodo
        }
        cout << "NULL" << endl;
    }

    //Eliminar


    //Destructor
    ~lista() {
        Nodo* actual=cabeza; //ptr apunta a la cabeza
        while(actual!=nullptr) { //Mientras no sea nulo
            Nodo* temporal=actual;
            actual=actual->siguiente; //mover al siguiente nodo
            delete temporal; //eliminar el nodo
        }
    }
};



int main() {
    int n, valor;

    lista lista1; //creo el objeto de tipo lista

    //Ingreso de datos
    //lista1.ingresar(8);
    //lista1.ingresar(7);
    //lista1.ingresar(2);
    //lista1.ingresar(9);

    //Mostrar la lista
    //lista1.mostrar();

    cout << "Ingrese el numero de elementos de la lista: ";
    cin >> n;
    for (int i=0; i<n; i++) {
        cout << "Ingrese el elemento " << i+1 << ": ";
        cin >> valor;
        lista1.ingresar(valor); //ingresar el elemento
    }

    //Mostrar la lista
    lista1.mostrar();


    return 0;
}