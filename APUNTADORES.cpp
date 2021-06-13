#include <stdlib.h>
#include <iostream>

int main () {
    int i = 5;
    int *apuntador = &i; // Obteniendo la direccion de memoria de i por medio del operador &
    *apuntador = 5; // Se debe usar el * antes del nombre de la variable para acceder a la direccion de memoria.

    std::cout << "El apuntador tiene el valor: " << *apuntador << " en la direccion de memoria: " << apuntador << std::endl;

    int *ptr = new int; // Pidiendo memoria de forma dinamica al modo de C++.
    delete ptr; // Liberando memoria dinamica al mode C++

    int *ptr2 = (int *) malloc(sizeof(int)); // Pidiendo memoria dinamica al modo de C.
    free(ptr2); // Liberando memoria dinamica al modo de C

    ptr2 = ptr; // Asignando la direccion de memoria de ptr a ptr2, ahora ambos apuntan a la misma direccion de memoria
    *ptr2 = 10; // Al modificar el valor al que apunta ptr2, tambien lo hago con el valor de ptr.
}