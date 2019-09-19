#ifndef VOLUMEN_H
#define VOLUMEN_H

#include <string>
#include <iostream>

class Volumen{
protected:
    std::string nombre;
    std::string numVol;
public:
    virtual void mostrar(){
        std::cout<<"Nombre: "<< nombre << '\n'
        <<"Volumen: " << numVol<< '\n' ;
    };
};

#endif