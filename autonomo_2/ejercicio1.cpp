//Nombre: Marcus Alexander Mayorga Martínez
//Fecha: 27/04/2025

#include <iostream>
#include <cstring> //Para usar strlen
#include <cctype> //Para usar tolower

using namespace std;

//Funcion para contar las vocales
int contarVocales(const char cadena[]) {
    int cont = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        char vocal = tolower(cadena[i]); //Convertimos a minusculas
        if (vocal == 'a' || vocal == 'e' || vocal == 'i' || vocal == 'o' || vocal == 'u') {
            cont++;
        }
    }
    return cont; //Devolvemos el contador
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

    //Contamos las vocales de la cadena
    int numVocales = contarVocales(cadena);
    cout << "\nNumero de vocales: " << numVocales << endl;

    return 0;
}