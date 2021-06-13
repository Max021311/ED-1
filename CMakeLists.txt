cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)
project(ED_1)

set(LIBS)

include_directories(include)
add_subdirectory(src)

add_executable(COMPLEJO COMPLEJO.cpp)
target_link_libraries(COMPLEJO complejo)

add_executable(ALUMNO ALUMNO.cpp)
target_link_libraries(ALUMNO alumno)

add_executable(LISTA_E_ALUMNO LISTA_E_ALUMNO.cpp)
target_link_libraries(LISTA_E_ALUMNO lista_alumno)

add_executable(PUNTO PUNTO.cpp)
target_link_libraries(PUNTO punto)

add_executable(LISTA_E_PUNTO LISTA_E_PUNTO.cpp)
target_link_libraries(LISTA_E_PUNTO lista_punto)

add_executable(PILA PILA.cpp)
target_link_libraries(PILA pila)

add_executable(RECURSIVIDAD RECURSIVIDAD.cpp)

add_executable(APUNTADORES APUNTADORES.cpp)

add_executable(LISTA_SL LISTA_SIMPLEMENTE_LIGADA.cpp)
target_link_libraries(LISTA_SL lista_sl)

add_executable(LISTA_DL LISTA_DL.cpp)
target_link_libraries(LISTA_DL lista_dl)