#include <iostream>

void funcion (int n) {
    if(n == 0)
        return;
    std::cout << "hola" << std::endl;
    funcion(n-1);
}

int sum (int n) {
    if(n == 1 || n == 0)
        return n;
    return n + sum(n-1);
}

int fibo (int n) {
    if(n == 1 || n == 0)
        return n;
    return fibo(n-1) + fibo(n-2);
}

int main () {
    funcion(10);
    std::cout << "Sum: " << sum(5) << std::endl;
    std::cout << "Fibonacci: " << fibo(10) << std::endl;
    return 0;
}