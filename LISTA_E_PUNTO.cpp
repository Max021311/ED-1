#include <Lista_e_punto.hpp>

int main() {
    Lista_e_punto L;
    Punto aux(1,2), aux2(1,2);
    L.inicializa();

    L.agregar(aux, 0);
    aux.set(3,4);
    L.agregar(aux, 1);
    aux.set(5,4);
    L.agregar(aux, 2);

    std::cout << "Imprimiendo lista" << std::endl;
    L.print();

    std::cout << std::endl;

    std::cout << "Reimprimiendo lista tras borrar el punto (5,4)" << std::endl;
    L.elimina(2);
    L.print();

    int busqueda = L.busqueda_lineal(aux2);
    std::cout << "El objeto se encuentra en la posicion: " << busqueda << std::endl;

    std::cout << "Esta vacia? " <<L.vacia() << std::endl;
    std::cout << "Esta llena?" << L.llena() << std::endl;
    return 0;
}