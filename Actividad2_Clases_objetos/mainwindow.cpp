#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <string>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

Neurona::Neurona()
{

}//constructor

void Neurona::establecer_id(int valor_id)
{
    id = valor_id;
}
int Neurona::obtener_id()const
{
    return id;
}

void Neurona::establecer_voltaje(string valor_voltaje)
{
    voltaje = valor_voltaje;
}
string Neurona::obtener_voltaje()const
{
    return voltaje;
}

void Neurona::establecer_posx(int valor_posx)
{
    posicion_x = valor_posx;
}
int Neurona::obtener_posx()const
{
    return posicion_x;
}

void Neurona::establecer_posy(int valor_posy)
{
    posicion_y = valor_posy;
}
int Neurona::obtener_posy()const
{
    return posicion_y;
}

void Neurona::establecer_red(int valor_red)
{
    red = valor_red;
}
int Neurona::obtener_red()const
{
    return red;
}

void Neurona::establecer_green(int valor_green)
{
    green = valor_green;
}
int Neurona::obtener_green()const
{
    return green;
}

void Neurona::establecer_blue(int valor_blue)
{
    blue = valor_blue;
}
int Neurona::obtener_blue()const
{
    return blue;
}

Neurona::~Neurona()
{

}//dtor

Lista::Lista()
{
}//ctor

void Lista::Insertar_inicio(Neurona info)
{
    Lista *temp = new Lista();
    temp ->Datos = info;
    if(first == nullptr)
    {
        first = temp;
        temp -> before = nullptr;
        first ->next = nullptr;
        last = temp;
    }
    else
    {
        temp ->before = nullptr;
        temp ->next = first;
        first->before = temp;
        first = temp;
    }
}

void Lista::Insertar_final(Neurona info)
{
    Lista *temp = new Lista();
    temp ->Datos = info;
    if(last == NULL)
    {
        temp->before = NULL;
        first = temp;
        first ->next = NULL;
        last = temp;
    }
    else
    {
        last -> next = temp;
        temp-> before = NULL;
        temp -> next = NULL;
        last = temp;
    }
}

void Lista::print()
{
    Lista *temp;
    temp = first;
    if(first != nullptr)
    {
        int i = 0; //contador de posicion
        while (temp != nullptr)
        {
            cout << "Posicion: "<<i<<endl;
            cout <<"id"<<temp->Datos.obtener_id()<<endl;
            cout <<"voltaje"<<temp->Datos.obtener_voltaje()<<endl;
            cout <<"posicion y"<<temp->Datos.obtener_posy()<<endl;
            cout <<"posicion x"<<temp->Datos.obtener_posx()<<endl;
            cout <<"red"<<temp->Datos.obtener_red()<<endl;
            cout <<"green"<<temp->Datos.obtener_green()<<endl;
            cout <<"blue"<<temp->Datos.obtener_blue()<<endl;
            temp = temp ->next;
            i++;
        }
    }
    else
    {
        cout << "La lista esta vacia"<<endl;
    }
}

//se hace el getter de la lista privada
void Lista::obtener_insert_inicio(Neurona)
{
    return Insertar_inicio(Datos);
}
void Lista::obtener_insert_final(Neurona)
{
    return Insertar_final(Datos);
}
void Lista::obtener_print()
{
    return print();
}

Lista::~Lista()
{
}//dtor
