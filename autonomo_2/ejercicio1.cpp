//Nombre: Marcus Alexander Mayorga Martínez
//Fecha: 27/04/2025

#include <iostream>
#include <cstring> //Para usar strlen
#include <cctype> //Para usar tolower

using namespace std;

//Funcion para contar las vocales
int contarVocales(const char cadena[], int& a, int& e, int& i, int& o, int& u) {
    int cont = 0;
    for (int j = 0; cadena[j] != '\0'; j++) {
        char vocal = tolower(cadena[j]); //Convertimos a minúsculas
        if (vocal == 'a') {
            a++;
            cont++;
        } else if (vocal == 'e') {
            e++;
            cont++;
        } else if (vocal == 'i') {
            i++;
            cont++;
        } else if (vocal == 'o') {
            o++;
            cont++;
        } else if (vocal == 'u') {
            u++;
            cont++;
        }
    }
    return cont; //Devolvemos el contador
}

//Funcion principal
int main() {

    //Solicitamos la cadena de texto
    char cadena[101]; //Cadena de 100 caracteres + 1 para el terminador nulo
    cout << "Introduce una cadena de texto de maximo 100 caracteres: ";
    cin.getline(cadena, 101); //Leemos la cadena

    //Imprimimos la cadena en orden inverso
    cout << "\nCadena en orden inverso: ";
    for (int i = strlen(cadena) - 1; i >= 0; i--) { //Recorremos la cadena al reves
        cout << cadena[i];
    }

    //Variables para contar cada vocal
    int a = 0, e = 0, i = 0, o = 0, u = 0;

    //Contamos las vocales de la cadena
    int numVocales = contarVocales(cadena, a, e, i, o, u);
    cout << "\n\nNumero de vocales en total: " << numVocales << endl;
    cout << "a: " << a << endl;
    cout << "e: " << e << endl;
    cout << "i: " << i << endl;
    cout << "o: " << o << endl;
    cout << "u: " << u << endl;


    return 0;
}