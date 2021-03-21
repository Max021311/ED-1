#ifndef ALUMNO_HPP
#define ALUMNO_HPP
#include <Persona.hpp>

class Alumno : public Persona {
private:
    int codigo;
public:
    Alumno(){codigo = 0;}
    void print() override;
    void set(std::string n, std::string ap, std::string am, int edad, int codigo);
    int get_codigo();
};


#endif // ALUMNO_HPP
