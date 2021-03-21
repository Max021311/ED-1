#include <iostream>
#include <Alumno.hpp>

int main () {
    Alumno a{};
    a.set("Jose Maximiliano", "Diaz", "Mendez", 18, 2207231);
    a.print();
}
