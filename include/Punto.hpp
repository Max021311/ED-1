#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
#include <math.h>

class Punto {
private:
    float x, y, magnitud;
public:
    Punto(float x, float y) {
        this->x = x;
        this->y = y;
        magnitud = sqrt(pow(x, 2)+pow(y,2));
    }

    Punto () {
        x = 0;
        y = 0;
        magnitud = 0;
    }

    void set (float x, float y) {
        this->x = x;
        this->y = y;
        magnitud = sqrt(pow(x, 2)+pow(y,2));
    }

    void print();
    bool operator ==(Punto p);
    bool operator < (Punto p) { return magnitud<p.magnitud;}
    bool operator > (Punto p) { return magnitud>p.magnitud;}
    bool operator <= (Punto p) { return magnitud<=p.magnitud;}
    bool operator >= (Punto p) { return magnitud>=p.magnitud;}
};


#endif // PUNTO_H
