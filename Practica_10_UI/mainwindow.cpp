#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QTableWidget>
#include <QGraphicsScene>
#include <QMessageBox>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

Neurona datos;//objeto tipo neurona
Lista mi_lista;//objeto tipo lista

//Variables globales de neurona
QString copia_id;
QString nombre_ID;
QString nombre_voltaje;
QString nombre_posicion_x;
QString nombre_posicion_y;
QString nombre_red;
QString nombre_green;
QString nombre_blue;
int repetidos_id[50];
int repetidos_voltaje[50];
int repetidos_x[50];
int repetidos_y[50];
int repetidos_red[50];
int repetidos_green[50];
int repetidos_blue[50];
int id_g, voltaje_g, posy_g, posx_g;
int neuronas_impre = 0, neuronas_ingre = 0, copia_intid; //contador de posicion

//+ QString::number( myInt ); // CORRECT

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

void Neurona::establecer_voltaje(int valor_voltaje)
{
    voltaje = valor_voltaje;
}
int Neurona::obtener_voltaje()const
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

void Lista::obtener_insert_inicio(Neurona info)
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

void Lista::obtener_insert_final(Neurona info)
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

string Lista::obtener_print()
{
    Lista *temp;
    temp = first;
    string s;
    ostringstream buffer;
    if(first != nullptr)
    {
        int neuronas_i = 0; //contador de posicion
        while (temp != nullptr)
        {
            buffer <<endl<<"posicion: "<<neuronas_i<<endl
             <<"id: "<<temp->Datos.obtener_id()<<endl
             <<"voltaje: "<<temp->Datos.obtener_voltaje()<<endl
             <<"posicion y: "<<temp->Datos.obtener_posy()<<endl
             <<"posicion x: "<<temp->Datos.obtener_posx()<<endl
             <<"red: "<<temp->Datos.obtener_red()<<endl
             <<"green: "<<temp->Datos.obtener_green()<<endl
             <<"blue: "<<temp->Datos.obtener_blue()<<endl;

            temp = temp ->next;
            neuronas_i++;
            s = buffer.str();
        }
        return s;
    }
    else
    {
        cout << "La lista esta vacia"<<endl;
    }
}

string Lista::obtener_copia()
{
    Lista *temp;
    temp = first;
    string s;
    ostringstream buffer;
    if(first != nullptr)
    {

        while (temp != nullptr)
        {
            buffer
             <<temp->Datos.obtener_id()<<endl
             <<temp->Datos.obtener_voltaje()<<endl
             <<temp->Datos.obtener_posy()<<endl
             <<temp->Datos.obtener_posx()<<endl
             <<temp->Datos.obtener_red()<<endl
             <<temp->Datos.obtener_green()<<endl
             <<temp->Datos.obtener_blue()<<endl;

            temp = temp ->next;
            neuronas_impre++;
            s = buffer.str();
        }
        return s;
    }
    else
    {
        cout << "La lista esta vacia"<<endl;
    }
}

Lista::~Lista()
{
}//dtor

void Lista::limpiar_buffer()
{
    //limpia el buffer del registro
    int i;
    for (i = 0; i < 51; repetidos_id[i++] = '\0')
       ;
}

bool Lista::repetidos(int id_repetido)
{
    if(first != nullptr)
    {
        for (int z = 0; z < neuronas_ingre; z++)
        {
            copia_intid = repetidos_id[z];
            cout << "repetidos_id["<<z<<"]: " <<repetidos_id[z]<<endl;
            cout << "copia_intid: " << copia_intid<<endl;
            cout << "ID repetido: "<<id_repetido<<endl;
            if (id_repetido == copia_intid)
            {
                return true;
                cout << "ID invalido o repetido, porfavor vuelve a intentarlo"<<endl;
            }
        }
    }
    else
    {
        cout << "La lista no habia empesado"<<endl;
        return false;
    }
    return false;
}

void MainWindow::on_pushButton_guardar_Final_clicked()
{
    copia_id = ui ->leID ->text();
    copia_intid = copia_id.toInt();
    repetidos_id[neuronas_ingre] = copia_intid;
    if (mi_lista.repetidos(copia_id.toInt()) == false)
    {
        nombre_ID = ui ->leID ->text();
        nombre_voltaje = ui ->levoltaje -> text();
        repetidos_voltaje[neuronas_ingre] = nombre_voltaje.toInt();
        nombre_posicion_x = ui ->leX ->text();
        repetidos_x[neuronas_ingre] = nombre_posicion_x.toInt();
        nombre_posicion_y = ui ->leY ->text();
        repetidos_y[neuronas_ingre] = nombre_posicion_y.toInt();
        nombre_red = ui ->leRed ->text();
        repetidos_red[neuronas_ingre] = nombre_red.toInt();
        nombre_green = ui ->leGreen ->text();
        repetidos_green[neuronas_ingre] = nombre_green.toInt();
        nombre_blue = ui ->leBlue ->text();
        repetidos_blue[neuronas_ingre] = nombre_blue.toInt();
        datos.establecer_id(nombre_ID.toInt());
        datos.establecer_voltaje(nombre_voltaje.toInt());
        datos.establecer_posx(nombre_posicion_x.toInt());
        datos.establecer_posy(nombre_posicion_y.toInt());
        datos.establecer_red(nombre_red.toInt());
        datos.establecer_green(nombre_green.toInt());
        datos.establecer_blue(nombre_blue.toInt());
        mi_lista.obtener_insert_final(datos);
        cout << "Guardado"<<endl;
        neuronas_ingre++;
    }
    else
    {
        ui->plainTextEdit_imprimir->setPlainText("ID invalido o repetido, porfavor vuelve a intentarlo");
    }
    ui ->leID->clear();
    ui ->levoltaje->clear();
    ui ->leX->clear();
    ui ->leY->clear();
    ui ->leRed->clear();
    ui ->leGreen->clear();
    ui ->leBlue->clear();
}




void MainWindow::on_pushButton_guardar_Inicio_clicked()
{
    copia_id = ui ->leID ->text();
    copia_intid = copia_id.toInt();
    cout << "Copia en int: " <<copia_intid<<endl;
    repetidos_id[neuronas_ingre] = copia_intid;
    cout << "repetidos primero: "<<repetidos_id[neuronas_ingre]<<endl;
    cout << "Neuronas ingre: "<<neuronas_ingre<<endl;
    if (mi_lista.repetidos(copia_id.toInt()) == false)
    {
        nombre_ID = ui ->leID ->text();
        nombre_voltaje = ui ->levoltaje -> text();
        repetidos_voltaje[neuronas_ingre] = nombre_voltaje.toInt();
        nombre_posicion_x = ui ->leX ->text();
        repetidos_x[neuronas_ingre] = nombre_posicion_x.toInt();
        nombre_posicion_y = ui ->leY ->text();
        repetidos_y[neuronas_ingre] = nombre_posicion_y.toInt();
        nombre_red = ui ->leRed ->text();
        repetidos_red[neuronas_ingre] = nombre_red.toInt();
        nombre_green = ui ->leGreen ->text();
        repetidos_green[neuronas_ingre] = nombre_green.toInt();
        nombre_blue = ui ->leBlue ->text();
        repetidos_blue[neuronas_ingre] = nombre_blue.toInt();
        datos.establecer_id(nombre_ID.toInt());
        datos.establecer_voltaje(nombre_voltaje.toInt());
        datos.establecer_posx(nombre_posicion_x.toInt());
        datos.establecer_posy(nombre_posicion_y.toInt());
        datos.establecer_red(nombre_red.toInt());
        datos.establecer_green(nombre_green.toInt());
        datos.establecer_blue(nombre_blue.toInt());
        mi_lista.obtener_insert_inicio(datos);
        cout << "Guardado"<<endl;
        neuronas_ingre++;
    }
    else
    {
        ui->plainTextEdit_imprimir->setPlainText("ID invalido o repetido, porfavor vuelve a intentarlo");
    }
    ui ->leID->clear();
    ui ->levoltaje->clear();
    ui ->leX->clear();
    ui ->leY->clear();
    ui ->leRed->clear();
    ui ->leGreen->clear();
    ui ->leBlue->clear();
}

void MainWindow::on_pushButton_Imprimir_clicked()
{
    string s = mi_lista.obtener_print();
    ui->plainTextEdit_imprimir->setPlainText(QString::fromStdString (s));
}


void MainWindow::on_pushButton_clicked()
{
    ui ->plainTextEdit_imprimir ->clear();
}

void Lista::recuperar(fstream & abierto)
{
    abierto>>neuronas_impre;
    for(int i = 0; i < neuronas_impre; i++)
    {
        int id;
        int voltaje;
        int posicion_x;
        int posicion_y;
        int red;
        int green;
        int blue;
        abierto>>id;
        repetidos_id[i] = id;
        abierto>>voltaje;
        repetidos_voltaje[i] = voltaje;
        abierto>>posicion_x;
        repetidos_y[i] = posicion_x;
        abierto>>posicion_y;
        repetidos_x[i] = posicion_y;
        abierto>>red;
        repetidos_red[i] = red;
        abierto>>green;
        repetidos_green[i] = green;
        abierto>>blue;
        repetidos_blue[i] = blue;
        datos.establecer_id(id);
        datos.establecer_voltaje(voltaje);
        datos.establecer_posx(posicion_x);
        datos.establecer_posy(posicion_y);
        datos.establecer_red(red);
        datos.establecer_green(green);
        datos.establecer_blue(blue);
        mi_lista.obtener_insert_final(datos);
        neuronas_ingre++;
    }
}

void Lista::guardar(fstream & escribir)
{
    string s = mi_lista.obtener_copia();
    escribir<<neuronas_ingre<<endl;
    escribir<<s<<endl;
}

void MainWindow::on_actionAbrir_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,"Open a file","Neuronas.txt");
    string file = filename.toStdString();
    fstream abierto(file,ios_base::in);
    mi_lista.recuperar(abierto);
}

void MainWindow::on_actionGuardar_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this,"Save file","Neuronas.txt");
    string file = filename.toStdString();
    fstream escribir(file,ios_base::out);
    mi_lista.guardar(escribir);
}

bool Lista::buscar_neurona(int id_buscar)
{
    Lista *temp;
    temp = first;
    if(first != nullptr)
    {
        while (temp != nullptr)
        {
            if (temp->Datos.obtener_id() == id_buscar)
            {
                id_g = temp->Datos.obtener_id();
                voltaje_g = temp->Datos.obtener_voltaje();
                posy_g = temp->Datos.obtener_posy();
                posx_g = temp->Datos.obtener_posx();
                return true;
            }
            temp = temp ->next;
        }
    }
    else
    {
        cout << "La lista esta vacia"<<endl;
    }
    return false;
}

void MainWindow::on_pushButton_mostrar_tabla_clicked()
{
    int contador = 0;
    for (int z = 0; z < neuronas_ingre; z++)
    {
        ui->table_neurona->setColumnCount(4);
        QStringList headers = {"ID", "Voltaje", "X", "Y"};
        ui->table_neurona->setHorizontalHeaderLabels(headers);
        ui->table_neurona->setRowCount(8);
        QTableWidgetItem *id = new QTableWidgetItem;
        id->setText(QString::number(repetidos_id[z]));
        cout << "ID: "<<repetidos_id[z]<<endl;
        QTableWidgetItem *v = new QTableWidgetItem;
        v->setText(QString::number(repetidos_voltaje[z]));
        cout << "Voltaje: "<<repetidos_voltaje[z]<<endl;
        QTableWidgetItem *x = new QTableWidgetItem;
        x->setText(QString::number(repetidos_x[z]));
        cout << "X: "<<repetidos_x[z]<<endl;
        QTableWidgetItem *y = new QTableWidgetItem;
        y->setText(QString::number(repetidos_y[z]));
        cout << "Y: "<<repetidos_y[z]<<endl;
        ui->table_neurona->setItem(0,contador,id);
        ui->table_neurona->setItem(0,++contador,v);
        ui->table_neurona->setItem(0,++contador,x);
        ui->table_neurona->setItem(0,++contador,y);
        contador++;
        cout << "z: "<<z<<endl;
    }
}




void MainWindow::on_pushButton_buscar_neurona_clicked()
{
    QString numero_buscar = ui ->leneurona ->text();
    if (mi_lista.buscar_neurona(numero_buscar.toInt()) == true)
    {
        ui->table_neurona->setColumnCount(4);
        QStringList headers = {"ID", "Voltaje", "X", "Y"};
        ui->table_neurona->setHorizontalHeaderLabels(headers);
        ui->table_neurona->setRowCount(8);
        QTableWidgetItem *id = new QTableWidgetItem;
        id->setText(QString::number(id_g));
        cout << "ID: "<<id_g<<endl;
        QTableWidgetItem *v = new QTableWidgetItem;
        v->setText(QString::number(voltaje_g));
        cout << "Voltaje: "<<voltaje_g<<endl;
        QTableWidgetItem *x = new QTableWidgetItem;
        x->setText(QString::number(posx_g));
        cout << "X: "<<posx_g<<endl;
        QTableWidgetItem *y = new QTableWidgetItem;
        y->setText(QString::number(posy_g));
        cout << "Y: "<<posy_g<<endl;
        ui->table_neurona->setItem(0,0,id);
        ui->table_neurona->setItem(0,1,v);
        ui->table_neurona->setItem(0,2,x);
        ui->table_neurona->setItem(0,3,y);
    }
    else
    {
        ui->table_neurona->clear();
        QTableWidgetItem *falso = new QTableWidgetItem;
        QString error = "No encontrado";
        falso->setText(error);
        ui->table_neurona->setItem(0,0,falso);
    }
}


void MainWindow::on_pushButton_limpiar_tabla_clicked()
{
    ui->table_neurona->clear();
}


void MainWindow::on_pushButton_Dibujar_clicked()
{
    escena = new QGraphicsScene(this);
    QPen pen;
    pen.setWidth(6);
    ui->graphicsView->setScene(escena);

    for (int z = 0; z < neuronas_ingre; z++)
    {
        QColor color(repetidos_red[z],repetidos_green[z],repetidos_blue[z]);
        pen.setColor(color);
        escena->addEllipse(repetidos_x[z],repetidos_y[z],50,50,pen);
    }
}


void MainWindow::on_pushButton_Limpiar_2_clicked()
{
    escena->clear();
}

void Lista::anular()
{
    Lista *temp, *anterior;
    temp = first;
    anterior = nullptr;
    if(first != nullptr)
    {
        while (temp != nullptr)
        {
            anterior = temp;
            temp = temp ->next;
            delete(anterior);
        }
    }
    else
    {
        cout << "La lista esta vacia"<<endl;
    }
    first = nullptr;
    last = nullptr;
    next = nullptr;
    before = nullptr;
}

void Lista::rellenar()
{
    for(int i = 0; i < neuronas_ingre; i++)
    {
        datos.establecer_id(repetidos_id[i]);
        datos.establecer_voltaje(repetidos_voltaje[i]);
        datos.establecer_posx(repetidos_x[i]);
        datos.establecer_posy(repetidos_y[i]);
        datos.establecer_red(repetidos_red[i]);
        datos.establecer_green(repetidos_green[i]);
        datos.establecer_blue(repetidos_blue[i]);
        mi_lista.obtener_insert_final(datos);
    }
}


void Lista::ordenar()
{
    mi_lista.anular();
    for (int gap = neuronas_ingre / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < neuronas_ingre; i += 1)
        {
            int temp = repetidos_id[i];
            int temp_v = repetidos_voltaje[i];
            int temp_x = repetidos_x[i];
            int temp_y = repetidos_y[i];
            int temp_r = repetidos_red[i];
            int temp_g = repetidos_green[i];
            int temp_b = repetidos_blue[i];
            int j;
            for (j = i; j >= gap && repetidos_id[j - gap] > temp; j -= gap)
            {
                repetidos_id[j] = repetidos_id[j - gap];
                repetidos_voltaje[j] = repetidos_voltaje[j - gap];
                repetidos_x[j] = repetidos_x[j - gap];
                repetidos_y[j] = repetidos_y[j - gap];
                repetidos_red[j] = repetidos_red[j - gap];
                repetidos_green[j] = repetidos_green[j - gap];
                repetidos_blue[j] = repetidos_blue[j - gap];
            }
            repetidos_id[j] = temp;
            repetidos_voltaje[j] = temp_v;
            repetidos_x[j] = temp_x;
            repetidos_y[j] = temp_y;
            repetidos_red[j] = temp_r;
            repetidos_green[j] = temp_g;
            repetidos_blue[j] = temp_b;

        }
    }
    mi_lista.rellenar();
}

void MainWindow::on_pushButton_ordenar_clicked()
{
    mi_lista.ordenar();
}


void MainWindow::on_leneurona_selectionChanged()
{
    ui->leneurona->clear();
}

