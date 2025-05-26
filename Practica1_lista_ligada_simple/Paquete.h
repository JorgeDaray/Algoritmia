#ifndef PAQUETE_H
#define PAQUETE_H
#include <iostream>

using namespace std;

class Paquete
{
    public:
        Paquete(int = 0, int = 0, string = "", string = "", string = "");
        void estableceridentificador(int);
        int obteneridentificador() const;
        void establecerid(int);
        int obtenerid() const;
        void establecerorigen(string);
        string obtenerorigen() const;
        void establecerdestino(string);
        string obtenerdestino() const;
        void establecerpeso(string);
        string obtenerpeso() const;
        void imprimir_registro();
        ~Paquete();
    private:
        int identificador;
        int id;
		char origen[40];
		char destino[40];
		char peso[40];
};

#endif // PAQUETE_H
