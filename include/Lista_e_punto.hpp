#ifndef LISTA_E_PUNTO_HPP
#define LISTA_E_PUNTO_HPP
#include <Punto.hpp>

class Lista_e_punto {
protected:
    int ultimo;
    Punto dato[50];
public:
    void inicializa() {ultimo=-1;}
    bool vacia() const{return ultimo == -1;}
    bool llena() const{return ultimo == 49;}
    void agregar(Punto punto, int position);
    void elimina(int position);
    int busqueda_lineal(Punto p);
    int busqueda_binaria(Punto p);
    void print();
    void intercambio(int a, int b);
    void bubble_sort();
};


#endif // LISTA_E_PUNTO_HPP
