add_library(complejo STATIC Complejo.cpp)

set(LIBS_ALUMNO
        Nombre.cpp
        Persona.cpp
        Alumno.cpp
)
add_library(alumno STATIC ${LIBS_ALUMNO})

set(LIBS_LISTA_ALUMNO
        ${LIBS_ALUMNO}
        Lista_e_alumno.cpp
)
add_library(lista_alumno STATIC ${LIBS_LISTA_ALUMNO})

set(LIBS_PUNTO
        Punto.cpp
)
add_library(punto STATIC ${LIBS_PUNTO})

set(LIBS_LISTA_PUNTO
        ${LIBS_PUNTO}
        Lista_e_punto.cpp
)
add_library(lista_punto STATIC ${LIBS_LISTA_PUNTO})

set(LIBS_PILA
    Pila.cpp
)
add_library(pila STATIC ${LIBS_PILA})
