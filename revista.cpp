#include "revista.h"

Revista::Revista(std::string nombre, std::string numVol, int numRevistas){
    this->nombre = nombre;
    this->numVol = numVol;
    this->numRevistas = numRevistas;
}

void Revista::mostrar(){
    Volumen::mostrar();
    std::cout<<"Número de Revistas: "<< numRevistas << '\n';
}
