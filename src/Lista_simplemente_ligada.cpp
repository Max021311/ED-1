#include "Lista_simplemente_ligada.hpp"

void Lista_sl::inicializa() {
    ptr_lista = NULL;
}

bool Lista_sl::vacia() {
    return ptr_lista == NULL;
}

void Lista_sl::agregar(Alumno x) {
    Nodo *aux = new Nodo;
    aux->a = x;

    if (vacia()) {
        ptr_lista = aux;
        aux->sig = NULL;
        return;
    }

    Nodo *q, *p = ptr_lista;

    while (p != NULL && x.get_codigo() > p->a.get_codigo()) {
        q = p;
        p = p->sig;
    }

    if(p == ptr_lista) {
        aux->sig = ptr_lista;
        ptr_lista = aux;
        return;
    }

    if (p == NULL) {
        q->sig = aux;
        aux->sig = NULL;
    } else {
        q->sig = aux;
        aux->sig = p;
    }

}

void Lista_sl::imprimir() {
    std::cout << "ptr_listas" << ptr_lista << std::endl;
    for (Nodo *p = ptr_lista; p != NULL; p = p->sig) {
        p->a.print();
        std::cout << p << std::endl;
        std::cout << p->sig << std::endl;
        std::cout << std::endl;
    }
}

Nodo *Lista_sl::busqueda_l(int codigo) {
    for (Nodo *p = ptr_lista; p != NULL; p = p->sig) {
        if (codigo == p->a.get_codigo()) {
            return p;
        }
    }
    return NULL;
}