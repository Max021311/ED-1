#include "Lista_dl.hpp"

int main() {
    Lista_dl L{};
    L.inicializa();

    Punto aux;

    aux.set(4,4);
    L.agregar(aux);
    aux.set(2,2);
    L.agregar(aux);
    aux.set(10, 10);
    L.agregar(aux);
    aux.set(7, 7);
    L.agregar(aux);

    std::cout << L.ultimo() << std::endl;

    L.print();
}
