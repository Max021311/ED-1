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

int Lista_e_alumno::busqueda_binaria(int codigo) {
    int i=0, j=ultimo,m;
    while(i<=j){
        m = (i+j)/2;
        if (codigo==Grupo[m].get_codigo())
            return m;
        if (codigo<Grupo[m].get_codigo())
            j = m-1;
        if (codigo>Grupo[m].get_codigo())
            i = m+1;
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

void Lista_e_alumno::bubble_sort_improved() {
    bool flag = true;
    for (int i = ultimo; i>0 && flag; i--) {
        flag = false;
        for (int j = 0; j<i; j++) {
            if (Grupo[j].get_codigo() > Grupo[j+1].get_codigo()) {
                intercambio(j, j+1);
                flag = true;
            }
        }

    }
}

void Lista_e_alumno::shell_sort() {
    for(int dist = ultimo*0.75; dist>0; dist*0.75)
        for (int i = 0; i+dist <= ultimo; i++)
            if (Grupo[i].get_codigo() > Grupo[i+dist].get_codigo()) {
                intercambio(i, i+dist);
            }
}

void Lista_e_alumno::insertion() {
   Alumno aux;
   int j;
    for (int i = 1; i <= ultimo; i++) {
        aux=Grupo[i];
        for (j = i; j > 0 && aux.get_codigo() < Grupo[j-1].get_codigo(); j--)
            Grupo[j]=Grupo[j-1];
        if(i!=j)
            Grupo[j] = aux;
    }
}

void Lista_e_alumno::selection() {
    int menor;
    for (int i = 0; i < ultimo; i++) {
        menor = i;
        for (int j = i+1; j <= ultimo; j++) {
            if (Grupo[menor].get_codigo() > Grupo[j].get_codigo())
                menor = j;
        }
        if (i != menor)
            intercambio(i, menor);
    }
}

void Lista_e_alumno::mezcla(int izq, int der) {
    if (izq>=der)
        return;
    int m = (izq + der)/2;

    mezcla(izq, m);
    mezcla(m+1, der);
    Alumno temp[ultimo + 1];
    for (int i = izq; i <= der; i++)
        temp[i]=Grupo[i];
    int i = izq, j = m+1, x = izq;

    while (i<=m && j<=der) {
        while (i<=m && temp[i].get_codigo() <= temp[j].get_codigo()) {
            Grupo[x]=temp[i];
            i++;
            x++;
        }

        while (j<=der && temp[j].get_codigo() <= temp[i].get_codigo()) {
            Grupo[x]=temp[j];
            j++;
            x++;
        }

        while (i<=m) {
            Grupo[x]=temp[i];
            i++;
            x++;
        }

        while (j<=der) {
            Grupo[x]=temp[j];
            j++;
            x++;
        }
    }
}

void Lista_e_alumno::quicksort(int izq, int der) {
    if (izq>=der)
        return;
    int i = izq, j = der;
    while (i < j) {
        while (i<j && Grupo[i].get_codigo() <= Grupo[der].get_codigo())
            i++;
        while(i<j && Grupo[j].get_codigo() >= Grupo[der].get_codigo())
            j--;

        if (i != j)
            intercambio(i, j);
    }

    if (i != der)
        intercambio(i, der);

    quicksort(izq, i-1);
    quicksort(i+1, der);
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
