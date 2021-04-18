#ifndef LISTA_E_HPP
#define LISTA_E_HPP

#include <Alumno.hpp>

class Lista_e_alumno {
protected:
    Alumno Grupo[50];
    int ultimo;
public:
    void inicializa() {ultimo=-1;}
    bool vacia() {return ultimo == -1;}
    bool llena() {return ultimo == 49;}
    void agregar(Alumno x, int position);
    void eliminar(int position);
    void print();
    int busqueda_lineal(int codigo);
    int busqueda_binaria(int codigo);
    void intercambio(int i, int j);
    void bubble_sort();
    void bubble_sort_improved();
    void shell_sort();
    void insertion();
    void selection();
};


#endif //LISTA_E_HPP
