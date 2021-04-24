#include "Pila.hpp"

void Pila::push(int dato) {
    tope++;
    pila[tope] = dato;
}

void Pila::pop() {
    if (vacia()) {
        return;
    }
    tope--;
}

void Pila::print() {
    for (int i = 0; i <= tope; i++) {
        std::cout << pila[i] << std::endl;
    }
}