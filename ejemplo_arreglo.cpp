#include <iostream>
using namespace std;

int main() {

  //Arreglo estático
    int arreglo[5] = {10, 20, 30, 40, 50};
    
    //Acceso y modificación
    cout << "Primer elemento: " << arreglo[0] << endl;
    arreglo[1] = 200;
    
    //Iteración
    cout << "Elementos: ";
    for (int i = 0; i < 5; ++i) {
        cout << arreglo[i] << " ";
    }

    return 0;
}