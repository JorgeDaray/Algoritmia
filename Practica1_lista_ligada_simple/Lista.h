#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <fstream>
#include "Paquete.h"
#include "Nodo.h"

using namespace std;

class Lista
{
    public:
        Lista();
        void insertar_inicio(Paquete);
        void eliminar_inicio();
        void mostrar();
        ~Lista();
    private:
        Nodo *first;
        Nodo *last;
};

#endif // LISTA_H
