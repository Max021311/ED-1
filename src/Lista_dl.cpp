#include "Lista_dl.hpp"

void Lista_dl::inicializa() {
    ptr_lista = NULL;
}

bool Lista_dl::vacia() {
    return ptr_lista == NULL;
}

void Lista_dl::agregar(Punto x) {
    Nodo_punto *aux = new Nodo_punto;
    aux->dato = x;
    if (vacia()) {
        ptr_lista=aux;
        aux->ant = NULL;
        aux->sig = NULL;
        return;
    }

    Nodo_punto *p = ptr_lista;

    while (p != NULL && p->dato < aux->dato) {
        p = p->sig;
    }

    if (p == ptr_lista) {
        aux->sig=ptr_lista;
        ptr_lista->ant = aux;
        ptr_lista = aux;
        aux->ant = NULL;
        return;
    }

    if (p == NULL) {
        aux->ant = ultimo();
        ultimo()->sig = aux;
        aux->sig = NULL;
    } else {
        aux->sig = p;
        aux->ant = p->ant;
        p->ant->sig = aux;
        p->ant = aux;
    }
}

Nodo_punto *Lista_dl::ultimo() {
    for (Nodo_punto *p = ptr_lista; p != NULL; p = p->sig) {
        if (p->sig == NULL) {
            return p;
        }
    }
}

void Lista_dl::print() {
    std::cout << "Ptr lista" << ptr_lista << std::endl;
    for (Nodo_punto *p = ptr_lista; p != NULL; p = p->sig) {
        p->dato.print();
    }
}