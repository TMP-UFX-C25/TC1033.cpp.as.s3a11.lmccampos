#include <iostream>
#include "Alumno.hpp"

int main()
{
    Alumno a1;
    Alumno a2("A178940", "LUZ LOPEZ CISNEROS", 19, "IC");

    std::cout << "Datos de alumno por default\n";
    std::cout << "===========================\n";
    a1.imprimeAlumno();
    std::cout << "\n";

    std::cout << "Datos de alumno que no es por default\n";
    std::cout << "=====================================\n";
    a2.imprimeAlumno();
    std::cout << "\n";

    std::cout << "Festejando !!\n";
    std::cout << "=============\n";
    a2.cumpleAnios();
    std::cout << "Felicidades " << a2.getNombre() << " por tu cumpleaños No. " 
        << a2.getEdad() << " !\n";
}