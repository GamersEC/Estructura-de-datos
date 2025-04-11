#include <iostream>

using namespace std;

// Estructura del nodo
struct Nodo {
  int dato;
  Nodo *siguiente;
};

// Clase Lista
class Lista {
private:
  Nodo *cabeza;

public:
  // Constructor
  Lista() {
    cabeza = nullptr;
  }

  // Insertar elemento al inicio
  void insertar_al_Inicio(int valor) {
    Nodo *nuevo = new Nodo();
    nuevo->dato = valor;
    nuevo->siguiente = cabeza;
    cabeza = nuevo;
  }

  // Mostrar elementos
  void mostrar() {
    Nodo *actual = cabeza;
    while (actual != nullptr) {
      cout << actual->dato << " -> ";
      actual = actual->siguiente;
    }
    cout << "null" << endl;
  }

  // Buscar un elemento
  bool buscar(int valor) {
    Nodo *actual = cabeza;
    while (actual != nullptr) {
      if (actual->dato == valor) {
        return true;
      }
      actual = actual->siguiente;
    }
    return false;
  }

  // Destructor
  ~Lista() {
    Nodo *actual = cabeza;
    while (actual != nullptr) {
      Nodo *temp = actual;
      actual = actual->siguiente;
      delete temp;
    }
  }
};

int main() {
  Lista milista;

  // Insertar elementos iniciales
  cout << "Inserte elementos en la lista: 10, 20" << endl;
  milista.insertar_al_Inicio(10);
  milista.insertar_al_Inicio(20);

  // Insertar 10 elementos adicionales
  for (int i = 0; i < 10; i++) {
    cout << "Inserte un elemento: ";
    int valor;
    cin >> valor;
    milista.insertar_al_Inicio(valor);
  }

  // Mostrar la lista
  cout << "\nLista enlazada:" << endl;
  milista.mostrar();

  // Buscar un elemento
  int buscado;
  cout << "\nIngrese un valor para buscar en la lista: ";
  cin >> buscado;

  if (milista.buscar(buscado)) {
    cout << "El valor " << buscado << " se encuentra en la lista." << endl;
  } else {
    cout << "El valor " << buscado << " NO se encuentra en la lista." << endl;
  }

  return 0;
}