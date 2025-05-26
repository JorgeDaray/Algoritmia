#include "mainwindow.h"
#include <iostream>
#include <string>

using namespace std;

#include <QApplication>
Neurona datos;//objeto tipo neurona
Lista mi_lista;//objeto tipo lista

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

void altas(int opc)
{
    int id;
    string voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
    cout << "Teclea id, voltaje, posicion x, posicion y, red";
    cout << "green, blue ?"<<endl;
    cin >>(id);
    fflush(stdin);
    getline(cin,voltaje);
    cin >>(posicion_x);
    cin >>(posicion_y);
    cin >>(red);
    cin >>(green);
    cin >>(blue);
    //Establecer los valores
    datos.establecer_id(id);
    datos.establecer_voltaje(voltaje);
    datos.establecer_posx(posicion_x);
    datos.establecer_posy(posicion_y);
    datos.establecer_red(red);
    datos.establecer_green(green);
    datos.establecer_blue(blue);
    //modificar switch dependiendo de opcion del menu para insertar inicio o final
    switch (opc)
    {
    case 1:
        mi_lista.obtener_insert_inicio(datos);
        break;
    case 2:
        mi_lista.obtener_insert_final(datos);
        break;
    default:
    cout << "Ingresa una opcion valida"<<endl;
        break;
    }
}
