
#ifndef NOMBRE_H
#define NOMBRE_H
#include <iostream>

class Nombre {
private:
    std::string nombre;
    std::string apellidoPaterno;
    std::string apellidoMaterno;
public:
    virtual void set(std::string nombre, std::string apellidoPaterno, std::string apellidoMaterno);

    virtual void print() {
        std::cout << nombre << " " << apellidoPaterno << " " << apellidoMaterno << std::endl;
    }

    void set_nombre(std::string n) {
        nombre = n;
    }

    void set_apellidoPaterno(std::string ap) {
        apellidoPaterno = ap;
    }

    void set_apellidoMaterno(std::string am) {
        apellidoMaterno = am;
    }
};

#endif // NOMBRE_H