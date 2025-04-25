// Nombre: Marcus Alexander Mayorga Martínez
// Fecha: 14/04/2025

#include <iostream>
#include <string>
#include <list>
#include <queue>

using namespace std;

int main() {
  // Cadenas
  char nombre[20]; // Arreglo = vector
  cout << "Ingrese el nombre del estudiante: ";
  cin.getline(nombre, 20); // leer cadena de hasta 20 caracteres

  cout << "Buenas noches: " << nombre << endl;

  // String
  string estudiante; // Clases usando string
  cout << "Ingrese otro nombre de estudiante: ";
  getline(cin, estudiante); // permite leer con espacios

  // Arreglos
  int elementos[6] = {1, 2, 3, 4, 5, 6};
  cout << "La lista de elementos es: ";
  for (int n = 0; n < 6; n++) {
    cout << elementos[n] << " ";
  }

  string estudiantes[4] = {"Juan", "Veronica", "Jose", "Mario"};
  cout << "\nLos estudiantes son:\n";
  for (int i = 0; i < 4; i++) {
    cout << i + 1 << ": " << estudiantes[i] << endl;
  }

  // Ejemplo de lista
  list<int> edad;
  edad.push_back(20);
  edad.push_back(21);
  edad.push_back(22);
  edad.push_back(23);
  edad.push_back(24);

  cout << "Edades de los estudiantes: ";
  for (int e : edad) {
    cout << e << " ";
  }
  cout << endl;

  // Ejemplo de cola
  queue<float> calificaciones;
  calificaciones.push(8.5);
  calificaciones.push(7.9);
  calificaciones.push(9.2);
  calificaciones.push(6.8);

  cout << "Calificaciones en orden de llegada:\n";
  while (!calificaciones.empty()) {
    cout << calificaciones.front() << " ";
    calificaciones.pop();
  }
  cout << endl;

  return 0;
}