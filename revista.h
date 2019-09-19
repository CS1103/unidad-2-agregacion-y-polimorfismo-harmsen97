#include "volumen.h"

class Revista:public Volumen{
    int numRevistas;
public:
    Revista(std::string nombre, std::string numVol, int numRevistas);
    void mostrar() override;
};