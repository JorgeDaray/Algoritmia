#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <string>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};


class Neurona
{
public:
    Neurona();
    void establecer_id(int);
    int obtener_id() const;
    void establecer_voltaje(string);
    string obtener_voltaje() const;
    void establecer_posx(int);
    int obtener_posx() const;
    void establecer_posy(int);
    int obtener_posy() const;
    void establecer_red(int);
    int obtener_red() const;
    void establecer_green(int);
    int obtener_green() const;
    void establecer_blue(int);
    int obtener_blue() const;
    ~Neurona();
private:
    int id;
    string voltaje;
    int posicion_x;
    int posicion_y;
    int red;
    int green;
    int blue;
};

class Lista
{
public:
    Lista();
    Neurona Datos; // tipo objeto neurona
    void obtener_insert_inicio(Neurona);
    void obtener_insert_final(Neurona);
    void obtener_print();
    ~Lista();
private:
    Lista *first;
    Lista *last;

    Lista *next;//apuntador a siguiente
    Lista *before;//apuntador a anterior
    void Insertar_inicio(Neurona);
    void Insertar_final(Neurona);
    void print();
};

#endif // MAINWINDOW_H
