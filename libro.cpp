#include "libro.h"

Libro::Libro(std::string nombre, std::string numVol, int numLibros) {
    this->nombre = nombre;
    this->numVol = numVol;
    this->numLibros = numLibros;
}

void Libro::mostrar(){
    Volumen::mostrar();
    std::cout<<"Número de Libros: "<< this->numLibros<<'\n';
}