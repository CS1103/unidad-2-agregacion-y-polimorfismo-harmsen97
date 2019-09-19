#include "volumen.h"
class Libro:public Volumen{
    int numLibros;
public:
    Libro(std::string nombre, std::string numVol, int numLibros);
    void mostrar() override ;
};