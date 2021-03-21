#include <Complejo.hpp>

int main() {
    Complejo c1(1, 2); // Se usa el constructor con parametros
    Complejo c2{}; // Se usa el constructor sin parametros

    c1.print(); // Imprime 1 2i

    c1.set_real(5.3);
    c1.set_in(3.3);
    c1.print(); // Ahora imprime 5.3 3.3i

    c2.print(); // Imprime 0 0i

    c2.set_real(6.6);
    c2.set_in(4.4);
    c2.print(); // Ahora imprime 6.6 4.4i

    std::cout << "Suma de c1 y c2" << std::endl;
    Complejo c3 = c1 + c2;
    c3.print();
    return 0;
}
