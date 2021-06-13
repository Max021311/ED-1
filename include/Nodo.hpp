#ifndef NODO_HPP
#define NODO_HPP

#include "Alumno.hpp"
#include "Punto.hpp"

class Nodo {
public:
    Alumno a;
    Nodo *sig;
};

class Nodo_punto {
public:
    Punto dato;
    Nodo_punto *sig, *ant;
};

#endif //NODO_HPP
