#include "Lista_e_alumno.hpp"

void Lista_e_alumno::agregar(Alumno x, int position) {
    if (llena() || position < 0 || position > ultimo+1) {
        return;
    }

    for(int i = ultimo+1;  i > position; i--) {
        Grupo[i] = Grupo[i-1];
    }
    Grupo[position] = x;
    ultimo++;
}

void Lista_e_alumno::print() {
    for (int i = 0; i <= ultimo; i++) {
        Grupo[i].print();
        std::cout << std::endl;
    }
}

void Lista_e_alumno::eliminar(int position) {
   if (vacia() || position < 0 || position > ultimo)
       return;
    for (int i=position; i < ultimo; i++)
        Grupo[i] = Grupo[i+1];
    ultimo--;
}

int Lista_e_alumno::busqueda_lineal(int codigo) {
    for (int i = 0; i <= ultimo; i++) {
        if (Grupo[i].get_codigo() == codigo) {
            return i;
        }
    }
    return -1;
}

void Lista_e_alumno::bubble_sort() {
    for (int i = ultimo; i>0; i--) {
        for(int j = 0; j<i; j++) {
            if (Grupo[j].get_codigo() > Grupo[j+1].get_codigo())
                intercambio(j, j+1);
        }
    }
}

void Lista_e_alumno::intercambio(int i, int j) {
    Alumno aux = Grupo[j];
    Grupo[j] = Grupo[i];
    Grupo[i] = aux;
}

//void Lista_e_alumno::bubble_sort() {
//    bool flag = true;
//    while(flag) {
//        flag = false;
//        for (int i = 1; i <= ultimo; i++) {
//
//            if (Grupo[i].get_codigo() < Grupo[i-1].get_codigo()) {
//                intercambio(i, i-1);
//                flag = true;
//            }
//        }
//    }
//}
