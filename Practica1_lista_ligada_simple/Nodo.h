#ifndef NODO_H
#define NODO_H
#include "Paquete.h"
#include <iostream>

using namespace std;

class Nodo
{
    public:
        Nodo();
        Paquete Datos; //tipo objeto Datos de Paquete
        Nodo *next;//Apuntador a siguiente
        Nodo *before;//Apuntador a anterior
        ~Nodo();
    private:
};

#endif // NODO_H

