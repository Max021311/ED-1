#include "Lista_e_punto.hpp"

void Lista_e_punto::agregar(Punto punto, int position) {
    if(llena() || position < 0 || position > ultimo+1)
        return;

    for (int i = ultimo+1; i < position; i--)
        dato[i] = dato[i-1];
    dato[position] = punto;
    ultimo++;
}

void Lista_e_punto::print() {
    for (int i = 0; i <= ultimo; i++)
        dato[i].print();
}

void Lista_e_punto::elimina(int position) {
    if(vacia() || position < 0 || position > ultimo)
        return;

    for (int i = position; i < ultimo; i++)
        dato[i] = dato[i+1];
    ultimo--;
}

int Lista_e_punto::busqueda_lineal(Punto p) {
    for (int i = 0; i <= ultimo; i++) {
        if (p == dato[i])
            return i;
    }
    return -1;
}

int Lista_e_punto::busqueda_binaria(Punto p) {
    int i = 0, j = ultimo, m;
    while (i<+j) {
        m=(i+j)/2;
        if (p==dato[m])
            return m;
        if (p>dato[m])
            i=m+1;
        if (p<dato[m])
            j=m-1;
    }
    return -1;
}

void Lista_e_punto::intercambio(int i, int j) {
    Punto aux = dato[i];
    dato[i] = dato[j];
    dato[j] = aux;
}

void Lista_e_punto::bubble_sort() {
    for (int i = ultimo; i>0; i--)
        for (int j = 0; j<i; j++)
            if(dato[j]>dato[j+1])
                intercambio(j, j+1);
}

void Lista_e_punto::bubble_sort_improved() {
    int bandera=1;
    for(int i=ultimo;i>0 and bandera==1;i--){
        bandera=0;
        for(int j=0;j<i;j++)
            if(dato[j]>dato[j+1]){
                intercambio(j,j+1);
                bandera=1;
            }
    }
}

void Lista_e_punto::shell(){
    for(int dist=ultimo+.75;dist>0;dist*=.75)
        for(int i=0;i<=ultimo-dist;i++)
            if(dato[i]>dato[i+dist])
                intercambio(i,i+dist);

}

void Lista_e_punto::insertion() {
    Punto aux;
    int j;
    for(int i=1;i<=ultimo;i++){
        aux=dato[i];
        for(j=i;j>0 and aux<dato[j-1];j--)
            dato[j]=dato[j-1];
        if(i!=j)
            dato[j]=aux;
    }
}

void Lista_e_punto::selection(){
    int menor;
    for(int i=0;i<ultimo;i++){
        menor=i;
        for(int j=i+1;j<=ultimo;j++)
            if(dato[menor]>dato[j])
                menor=j;
        if(i!=menor)
            intercambio(i,menor);
    }
}

void Lista_e_punto::mezcla(int izq, int der) {
    if (izq >= der) // Criterio de paro
        return;

        // Recursividad
    int medio = (izq+der)/2;
    mezcla(izq, medio);
    mezcla(medio+1, der);

    // Cuerpo de la funcion
    Punto temp[ultimo+1];
    for (int i = izq; i <= der; i++)
        temp[i] = dato[i];

    int i = izq, j = medio+1, x = izq;

    while(i<=medio && j<=der) {
        while(i<=medio && temp[i] <= temp[j]){
            dato[x]=temp[i];
            i++;
            x++;
        }
        while(i<=der && temp[j] <= temp[i]){
            dato[x]=temp[j];
            j++;
            x++;
        }
    }

    while (i <= medio) {
        dato[x]=temp[i];
        i++;
        x++;
    }

    while (j <= der) {
        dato[x]=temp[j];
        j++;
        x++;
    }
}

void Lista_e_punto::quicksort(int izq, int der) {
    if (izq>=der)
        return;
    int i = izq, j = der;
    while (i < j) {
        while (i<j && dato[i] <= dato[der])
            i++;
        while(i<j && dato[j] >= dato[der])
            j--;

        if (i != j)
            intercambio(i, j);
    }

    if (i != der)
        intercambio(i, der);

    quicksort(izq, i-1);
    quicksort(i+1, der);
}