cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 14)
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