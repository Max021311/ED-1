#include "Lista_simplemente_ligada.hpp"

int main() {
    Lista_sl L{};
    L.inicializa();
    Alumno aux;

    bool flag = L.vacia();
    flag = false;

    aux.set("Juan", "Diaz", "Mendez", 19, 1234);
    L.agregar(aux);
    aux.set("Jose", "Lopez", "Garcia", 23, 1233);
    L.agregar(aux);

    L.imprimir();
    std::cout << L.busqueda_l(1234) << std::endl;
}
