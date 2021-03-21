#include "Alumno.hpp"

void Alumno::print() {
    Persona::print();
    std::cout << codigo << std::endl;
}

void Alumno::set(std::string n, std::string ap, std::string am, int edad, int codigo) {
    Persona::set(n, ap, am, edad);
    this->codigo = codigo;
}

int Alumno::get_codigo() {
    return codigo;
}