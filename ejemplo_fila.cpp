#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
    
    Nodo(int valor) : dato(valor), siguiente(nullptr) {}
};

class ListaEnlazada {
private:
    Nodo* cabeza = nullptr;
    
public:
    void agregarAlFinal(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        
        if (!cabeza) {
            cabeza = nuevoNodo;
            return;
        }
        
        Nodo* actual = cabeza;
        while (actual->siguiente) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevoNodo;
    }
    
    void agregarAlInicio(int valor) {
        Nodo* nuevoNodo = new Nodo(valor);
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
    }
    
    void eliminar(int valor) {
        if (!cabeza) return;
        
        if (cabeza->dato == valor) {
            Nodo* temp = cabeza;
            cabeza = cabeza->siguiente;
            delete temp;
            return;
        }
        
        Nodo* actual = cabeza;
        while (actual->siguiente) {
            if (actual->siguiente->dato == valor) {
                Nodo* temp = actual->siguiente;
                actual->siguiente = temp->siguiente;
                delete temp;
                return;
            }
            actual = actual->siguiente;
        }
    }
    
    void mostrar() {
        Nodo* actual = cabeza;
        cout << "Lista: ";
        while (actual) {
            cout << actual->dato << " -> ";
            actual = actual->siguiente;
        }
        cout << "null" << endl;
    }
    
    ~ListaEnlazada() {
        Nodo* actual = cabeza;
        while (actual) {
            Nodo* siguiente = actual->siguiente;
            delete actual;
            actual = siguiente;
        }
    }
};

int main() {
    ListaEnlazada lista;
    lista.agregarAlFinal(1);
    lista.agregarAlFinal(2);
    lista.agregarAlInicio(0);
    lista.mostrar();
    
    lista.eliminar(1);
    lista.mostrar();
    
    return 0;
}