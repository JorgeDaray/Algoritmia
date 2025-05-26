#include "Lista.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Lista::insertar_inicio(Paquete entrega)
{
    Nodo *temp = new Nodo();
    temp->Datos = entrega;
    if(first == nullptr){
        first = temp;
        temp -> before = nullptr;
        first -> next = nullptr;
        last = temp;
    }
    else{
        temp->before = nullptr;
        temp->next = first;
        first->before = temp;
        first=temp;
    }
}

void Lista::eliminar_inicio()
{
    Nodo *temp;
    temp = first;
    if (first != nullptr)
    {
        temp = first;
        first = first ->next;
        delete(temp);
    }

    if(first == nullptr)
    {
        cout << "Se elimino todo correctamente" <<endl;
    }
}

void Lista::mostrar()
{
    Nodo *temp;
    temp = first;
    cout << left << setw(6) << "ID"
    << setw( 40 ) << "origen"
    << setw( 40 ) << "destino"
    << setw( 40 ) << right << fixed
    << showpoint << "peso" << endl;
    while(temp)
    {
        temp ->Datos.imprimir_registro();
        temp = temp ->next;
    }
}

Lista::Lista()
{
    //ctor
}

Lista::~Lista()
{
    //dtor
}
