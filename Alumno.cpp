#include <iostream>
#include "Alumno.hpp"

//Constructor por default
Alumno::Alumno()
{
    this->matricula = "A000000";
    this->nombre = "RICARDO RAFAEL QUINTERO MEZA";
    this->edad = 18;
    this->carrera = "ITC";
}

Alumno::Alumno(std::string matricula, std::string nombre, int edad, std::string carrera)
{
    this->matricula = matricula;
    this->nombre = nombre;
    this->edad = edad;
    this->carrera = carrera;
}

//Consulta la matricula
std::string Alumno::getMatricula()
{
    return matricula;
}

//Consulta el nombre
std::string Alumno::getNombre()
{
    return nombre;
}

//Consulta la edad
int Alumno::getEdad()
{
    return edad;
}

//Consulta la carrera
std::string Alumno::getCarrera() {
    return carrera;
}

//Modificando la matricula
void Alumno::setMatricula(std::string matricula)
{
    this->matricula = matricula;
}

//Modificando el nombre
void Alumno::setNombre(std::string nombre)
{
    this->nombre = nombre;
}

//Modificando la edad
void Alumno::setEdad(int edad)
{
    this->edad = edad;
}

//Modificando la carrera
void Alumno::setCarrera(std::string carrera)
{
    this->carrera = carrera;
}

//Muestra todos los atributos del alumno en consola
void Alumno::imprimeAlumno()
{
    std::cout << "Matricula: " << getMatricula() << "\n"
              << "Nombre: " << getNombre() << "\n"
              << "Edad: " << getEdad() << "\n"
              << "Carrera: " << getCarrera() << "\n";
}

//Cambia la edad del alumno por su cumpleaños
void Alumno::cumpleAnios()
{
    this->edad++;
}