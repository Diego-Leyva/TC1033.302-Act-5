#include "alumno.h"

int main() {
    Alumno a1("A01745110", "Diego", "ITC", 20);
    Alumno a2;

    a2.setNombre("Joel");
    a2.setMatricula("A01752464");
    a2.setCarrera("ITC");
    a2.setEdad(20);

    std::cout << a2.getNombre() << std::endl;
    std::cout << a2.getMatricula() << std::endl;
    std::cout << a2.getCarrera() << std::endl;
    std::cout << a2.getEdad() << std::endl;

    a1.imprimeAlumno();
    a1.cumpleanios();
    a2.cumpleanios();

    return 0;
}