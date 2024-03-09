cmake_minimum_required(VERSION 3.27)
project(Patron_Decorador)

set(CMAKE_CXX_STANDARD 14)

include_directories("Patron Decorador/Patron Decorador/x64/include")

add_executable(Patron_Decorador
        "Patron Decorador/Patron Decorador/x64/include/Combo.h"
        "Patron Decorador/Patron Decorador/x64/include/Hamburguesa.h"
        "Patron Decorador/Patron Decorador/x64/include/Ingrediente.h"
        "Patron Decorador/Patron Decorador/x64/include/Lechuga.h"
        "Patron Decorador/Patron Decorador/x64/include/Queso.h"
        "Patron Decorador/Patron Decorador/x64/include/Tomate.h"
        "Patron Decorador/Patron Decorador/x64/include/Torta.h"
        "Patron Decorador/Patron Decorador/x64/src/Hamburguesa.cpp"
        "Patron Decorador/Patron Decorador/x64/src/Lechuga.cpp"
        "Patron Decorador/Patron Decorador/x64/src/main.cpp"
        "Patron Decorador/Patron Decorador/x64/src/Queso.cpp"
        "Patron Decorador/Patron Decorador/x64/src/Tomate.cpp"
        "Patron Decorador/Patron Decorador/x64/src/Torta.cpp")
