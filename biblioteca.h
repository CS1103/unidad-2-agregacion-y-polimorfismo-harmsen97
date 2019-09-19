#include <vector>
#include "revista.h"

class Biblioteca{
    int maxLibros;
    int maxRevistas;
    std::vector<Volumen*> volumenes;
public:
    void mostrar();
    bool incluir(Volumen& volumen);
};