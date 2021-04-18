#include <Lista_e_punto.hpp>
#include <math.h>

int main() {
    Lista_e_punto L;
    Punto aux(1,2), aux2(1,2);
    L.inicializa();

    L.agregar(aux, 0);
    aux.set(5,4);
    L.agregar(aux, 1);
    aux.set(3,4);
    L.agregar(aux, 2);

    std::cout << "Imprimiendo lista" << std::endl;
    L.print();

    std::cout << "Imprimiendo lista ordenada" << std::endl;
//    L.bubble_sort();
//    L.shell();
//    L.insertion();
    L.selection();
    L.print();

    std::cout << std::endl;

    std::cout << "Reimprimiendo lista tras borrar el punto (5,4)" << std::endl;
    L.elimina(2);
    L.print();

    std::cout << std::endl;

    std::cout << "Busqueda lineal del punto (1, 2)" << std::endl;
    int busqueda = L.busqueda_lineal(aux2);
    std::cout << "El objeto se encuentra en la posicion: " << busqueda << std::endl;

    std::cout << std::endl;

    std::cout << "Busqueda binaria del punto (1, 2)" << std::endl;
    busqueda = L.busqueda_binaria(aux2);
    std::cout << "El punto se encuentra en la posicion: " << busqueda << std::endl;

    std::cout << "Esta vacia? " <<L.vacia() << std::endl;
    std::cout << "Esta llena?" << L.llena() << std::endl;
    return 0;
}