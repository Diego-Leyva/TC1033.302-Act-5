#include "alumno.h"

Alumno::Alumno() {
    matricula = "null";
    nombre = "null";
    carrera = "null";
    edad = 0;
}

Alumno::Alumno(std::string matricula, std::string nombre, std::string carrera, int edad) {
    this->matricula = matricula;
    this->nombre = nombre;
    this->carrera = carrera;
    this->edad = edad;
}

std::string Alumno::getMatricula() {
    return matricula;
}

std::string Alumno::getNombre() {
    return nombre;
}

std::string Alumno::getCarrera() {
    return carrera;
}

int Alumno::getEdad() {
    return edad;
}

void Alumno::setMatricula(std::string matricula) {
    this->matricula = matricula;
}

void Alumno::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Alumno::setCarrera(std::string carrera) {
    this->carrera = carrera;
}

void Alumno::setEdad(int edad) {
    this->edad = edad;

}

void Alumno::imprimeAlumno() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Matricula: " << matricula << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Carrera: " << carrera << std::endl;
}

void Alumno::cumpleanios() {
    std::cout << "Feliz Cumpleanios " << edad+1 << " " << nombre << std::endl;
}