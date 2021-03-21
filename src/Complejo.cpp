#include <Complejo.hpp>

Complejo Complejo::operator+(Complejo c) {
    Complejo a;
    a.set_real(real + c.get_real());
    a.set_in(in + c.get_in());
    return a;
}
