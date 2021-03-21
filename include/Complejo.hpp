//
// Created by maxwell on 06/03/21.
//

#ifndef COMPLEJO_H
#define COMPLEJO_H

#include <iostream>

class Complejo {
private:
    float real;
    float in;

public:
    Complejo (float number, float number1) {
        real = number;
        in = number1;
    }

    Complejo () {
        real = 0;
        in = 0;
    }

    void print () {
        std::cout << real << " " << in << "i" << std::endl;
    }

    void set_real (float r) {
        real = r;
    }

    float get_real () {
        return real;
    }

    void set_in (float i) {
        in = i;
    }

    float get_in () {
        return in;
    }

    Complejo operator+(Complejo c);
};


#endif //COMPLEJO_H