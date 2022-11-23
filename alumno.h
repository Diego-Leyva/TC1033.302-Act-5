#pragma once

#include <iostream>

class Alumno {
    std::string matricula;
    std::string nombre;
    std::string carrera;
    int edad;
    
    public:
        Alumno();
        Alumno(std::string matricula, std::string nombre, std::string carrera, int edad);

        std::string getMatricula();
        std::string getNombre();
        std::string getCarrera();
        int getEdad();

        void setMatricula(std::string matricula);
        void setNombre(std::string nombre);
        void setCarrera(std::string carrera);
        void setEdad(int edad);

        void imprimeAlumno();
        void cumpleanios();
};
