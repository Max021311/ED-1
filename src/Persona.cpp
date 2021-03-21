#include <Persona.hpp>

void Persona::set(std::string n, std::string ap, std::string am, int edad) {
    Nombre::set(n, ap, am);
    Persona::set_edad(edad);
}
