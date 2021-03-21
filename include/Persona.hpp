#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
#include <Nombre.hpp>

class Persona : public Nombre {
private:
    int edad;
public:
    void set(std::string n, std::string ap, std::string am, int edad);

    void print() override {
       Nombre::print();
       std::cout << edad << std::endl;
    }

    void set_edad(int edad) {
        this->edad = edad;
    }
};

#endif // PERSONA_HPP