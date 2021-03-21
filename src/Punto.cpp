#include "Punto.hpp"

void Punto::print() {
    std::cout << "(" << x << "," << y << ")" << std::endl;
    std::cout << "Magnitud: " << magnitud << std::endl;
}

bool Punto::operator==(Punto p) {
    return (x==p.x && y==p.y);
}