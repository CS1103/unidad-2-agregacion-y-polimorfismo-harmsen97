#include "biblioteca.h"

void Biblioteca::mostrar() {
    for(auto&i:volumenes)
        i->mostrar();
}

bool Biblioteca::incluir(Volumen& volumen) {
    volumenes.push_back(&volumen);
}
