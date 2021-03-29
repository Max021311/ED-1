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

int Lista_e_punto::busqueda_binaria(Punto p) {
    int i = 0, j = ultimo, m;
    while (i<+j) {
        m=(i+j)/2;
        if (p==dato[m])
            return m;
        if (p>dato[m])
            i=m+1;
        if (p<dato[m])
            j=m-1;
    }
    return -1;
}

void Lista_e_punto::intercambio(int i, int j) {
    Punto aux = dato[i];
    dato[i] = dato[j];
    dato[j] = aux;
}

void Lista_e_punto::bubble_sort() {
    for (int i = ultimo; i>0; i--)
        for (int j = 0; j<i; j++)
            if(dato[j]>dato[j+1])
                intercambio(j, j+1);
}