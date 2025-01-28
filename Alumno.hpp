#pragma once
#include <iostream>


class Alumno {
public:
    Alumno();
    Alumno(std::string, std::string, int, std::string);

    std::string getMatricula();
    std::string getNombre();
    int getEdad();
    std::string getCarrera();

    void setMatricula(std::string);
    void setNombre(std::string);
    void setEdad(int);
    void setCarrera(std::string);

    void imprimeAlumno();
    void cumpleAnios();
private:
    std::string matricula;
    std::string nombre;
    int edad;
    std::string carrera;
};