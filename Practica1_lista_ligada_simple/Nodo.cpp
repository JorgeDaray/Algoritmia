#include "Nodo.h"
#include "Paquete.h"
#include <iostream>

using namespace std;

Nodo::Nodo()
{
    Datos.establecerorigen("");
    Datos.establecerdestino("");
    Datos.establecerpeso("");
    next = nullptr;
}//ctor

Nodo::~Nodo()
{

}//dtor
