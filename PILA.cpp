#include "Pila.hpp"

int main() {
    Pila p{};
    p.inicializa();
    p.push(1);
    p.push(2);
    p.push(3);
    p.pop();
    p.print();
    return 0;
}