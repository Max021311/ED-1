#ifndef LISTA_DL_HPP
#define LISTA_DL_HPP
#include "Nodo.hpp"

class Lista_dl {
protected:
    Nodo_punto *ptr_lista;
public:
    void inicializa();
    bool vacia();
    void agregar(Punto x);
    Nodo_punto *ultimo();
    void print();
};

#endif //LISTA_DL_HPP
