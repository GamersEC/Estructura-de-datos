#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Pila {
private:
    int datos[MAX_SIZE];
    int tope = -1;

public:
    void push(int valor) {
        if (tope < MAX_SIZE - 1) {
            datos[++tope] = valor;
        }
    }
    
    int pop() {
        if (!estaVacia()) {
            return datos[tope--];
        }
        return -1;
    }
    
    int peek() {
        if (!estaVacia()) {
            return datos[tope];
        }
        return -1;
    }
    
    bool estaVacia() {
        return tope == -1;
    }
};

int main() {
    Pila p;
    p.push(10);
    p.push(20);
    p.push(30);
    
    cout << "Tope: " << p.peek() << endl;
    cout << "Pop: " << p.pop() << endl;
    cout << "Nuevo tope: " << p.peek();
    
    return 0;
}