#include <Lista_e_alumno.hpp>

int main () {
    Lista_e_alumno L;
    L.inicializa();
    Alumno aux;

    aux.set("Max", "Diaz", "Mendez", 18, 1234);
    L.agregar(aux, 0);
    aux.set("Juan", "Perez", "Garcia", 21, 34324);
    L.agregar(aux, 1);
    aux.set("Alan", "Conrado", "Garcia", 19, 1232);
    L.agregar(aux, 2);

    std::cout << std::endl;

    std::cout << "Imprimiendo lista" << std::endl;
    L.print();

    std::cout << std::endl;

    std::cout << "Reimprimiendo lista ordenada" << std::endl;
//    L.bubble_sort();
    L.bubble_sort_improved();
//    L.shell_sort();
    L.print();

    std::cout << "Reimpriendo lista tras eliminar un Alumno" << std::endl;
    L.eliminar(1);
    L.print();

    std::cout << std::endl;

    std::cout << "Busqueda lineal del codigo 1234" << std::endl;
    int busqueda = L.busqueda_lineal(1234);
    std::cout << "Esta en la posicion: " << busqueda << std::endl;

   std::cout << std::endl;

   std::cout << "Busqueda binaria del codigo 34324" << std::endl;
   busqueda = L.busqueda_binaria(34324);
   std::cout << "Esta en la posicion: " << busqueda << std::endl;

   std::cout << std::endl;

    std::cout << "Esta llena? " << L.llena() << std::endl;
    std::cout << "Esta vacia? " << L.vacia() << std::endl;
}