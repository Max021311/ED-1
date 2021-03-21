#include "Lista_e_punto.hpp"

void Lista_e_punto::agregar(Punto punto, int position) {
    if(llena() || position < 0 || position > ultimo+1)
        return;

    for (int i = ultimo+1; i < position; i--)
        dato[i] = dato[i-1];
    dato[position] = punto;
    ultimo++;
}

void Lista_e_punto::print() {
    for (int i = 0; i <= ultimo; i++)
        dato[i].print();
}

void Lista_e_punto::elimina(int position) {
    if(vacia() || position < 0 || position > ultimo)
        return;

    for (int i = position; i < ultimo; i++)
        dato[i] = dato[i+1];
    ultimo--;
}

int Lista_e_punto::busqueda_lineal(Punto p) {
    for (int i = 0; i <= ultimo; i++) {
        if (p == dato[i])
            return i;
    }
    return -1;
}