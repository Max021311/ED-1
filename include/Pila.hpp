#ifndef ED_1_PILA_HPP
#define ED_1_PILA_HPP

#include "iostream"

class Pila {
protected:
    int pila[30];
    int tope;
public:
    void inicializa() { tope = -1; }

    bool vacia() { return tope == -1; }

    bool llena() { return tope == 30; }

    void push(int dato);

    void pop();

    void print();
};

#endif //ED_1_PILA_HPP
