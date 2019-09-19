#include "biblioteca.h"
#include "libro.h"

int main(){
    Biblioteca biblioteca;
    Revista revista("revista1", "numVol1", 1);
    Libro libro1("libro1", "numvol2", 2);

    biblioteca.incluir(revista);
    biblioteca.incluir(libro1);
    biblioteca.mostrar();
}