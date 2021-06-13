#ifndef LISTA_SIMPLEMENTE_LIGADA_HPP
#define LISTA_SIMPLEMENTE_LIGADA_HPP
#include "Nodo.hpp"
#include <iostream>

class Lista_sl{
public:
    Nodo *ptr_lista;
    void inicializa();
    bool vacia();
    void agregar(Alumno x);
    void imprimir();
    Nodo *busqueda_l(int codigo);
};
#endif //LISTA_SIMPLEMENTE_LIGADA_HPP
