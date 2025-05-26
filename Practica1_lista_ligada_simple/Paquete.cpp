#include "Paquete.h"
#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

Paquete::Paquete(int valor_identificador, int valor_id, string valor_origen, string valor_destino, string valor_peso)
{
    estableceridentificador(valor_identificador);
    establecerid(valor_id);
    establecerorigen(valor_origen);
    establecerdestino(valor_destino);
    establecerpeso(valor_peso);
}//ctor

void Paquete::estableceridentificador(int valor_identificador)
{
    identificador = valor_identificador;
}
int Paquete::obteneridentificador()const
{
    return identificador;
}

void Paquete::establecerid(int valor_id)
{
    id = valor_id;
}
int Paquete::obtenerid()const
{
    return id;
}

//Establece el valor del nombre
void Paquete::establecerorigen(string cadena_origen)
{
    const char*valor_origen = cadena_origen.data();
    int longitud = cadena_origen.size();
    longitud = (longitud < 40 ? longitud : 39);
    strncpy(origen, valor_origen, longitud);
    origen[longitud] = '\0';
}//fin void establecerorigen

string Paquete::obtenerorigen()const
{
    return origen;
}

//Establece el valor del deporte
void Paquete::establecerdestino(string cadena_destino)
{
    const char*valor_destino = cadena_destino.data();
    int longitud = cadena_destino.size();
    longitud = (longitud < 40 ? longitud : 39);
    strncpy(destino, valor_destino, longitud);
    destino[longitud] = '\0';
}//fin void establecerDeporte
string Paquete::obtenerdestino()const
{
    return destino;
}

//Establece el valor del deporte
void Paquete::establecerpeso(string cadena_peso)
{
    const char*valor_peso = cadena_peso.data();
    int longitud = cadena_peso.size();
    longitud = (longitud < 40 ? longitud : 39);
    strncpy(peso, valor_peso, longitud);
    peso[longitud] = '\0';
}//fin void establecerDeporte
string Paquete::obtenerpeso()const
{
    return peso;
}

void Paquete::imprimir_registro()
{
    cout << left << setw(6) << id
    << setw( 40 ) << origen
    << setw( 40 ) << destino
    << setw( 40 ) << right << fixed
    << showpoint << peso << endl;
}

Paquete::~Paquete()
{
    //dtor
}
