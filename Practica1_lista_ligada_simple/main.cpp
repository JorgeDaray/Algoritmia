#include <iostream>
#include<iomanip>
#include<fstream>
#include<cstdlib>
#include "Paquete.h"
#include "Lista.h"
#include "Nodo.h"

using std::fstream;

  using namespace std;
  void menu();
  void altas(fstream&);
  void bajas(fstream&, fstream&);
  void consultas(fstream&,int);
  void imprimirLinea( ostream &salida, const Paquete &registro );
  void recuperar(fstream&);
  Paquete d;//un objeto o registro paquete
  Paquete blanco;//un objeto o registro paquete para dejar en blanco la lista txt
  Lista mi_lista;//un objeto o registro lista

int main()
{
    menu();
    return 0;
}

int numeroDeSocio = 1;
void altas(fstream&archDeportSalida )
{
    system("cls");
    int id;
    char origen[40];
    char destino[40];
    char peso[40];
    //Pone el puntero al inicio del archivo
    archDeportSalida.clear();
    archDeportSalida.seekg(0, archDeportSalida.beg);
        d.estableceridentificador(numeroDeSocio);
            cout<<"Teclea id, origen, destino y peso\n?";
            cin>>(id);
            fflush(stdin);
            gets(origen);
            gets(destino);
            gets(peso);
            //establecer los valores origen, destino y peso del registro
            d.establecerid(id);
            d.establecerorigen(origen);
            d.establecerdestino(destino);
            d.establecerpeso(peso);
            mi_lista.insertar_inicio(d);
            //buscar la posicion en el archivo de registro especificado por el usuario
            archDeportSalida.seekp((d.obteneridentificador()-1)*sizeof(Paquete)); //seekp(n, ios::beg);
            //escribir la información especificada por el usuario en el archivo
            archDeportSalida.write(reinterpret_cast<const char *>(&d),sizeof(Paquete));
            numeroDeSocio++;
  archDeportSalida.clear();
}//main

void bajas(fstream&archDeportSalida, fstream&archdeportEntrada)
{
    if (numeroDeSocio == 1)
    {
        cout << "Lista vacia"<<endl;
        system("pause");
        return;
    }
    //Pone el puntero al inicio
    archdeportEntrada.clear();
    archdeportEntrada.seekg(0, archdeportEntrada.beg);
    int elim;
        d.estableceridentificador(numeroDeSocio-1);
        //Busca la posicion dada del registro
        archdeportEntrada.seekg((d.obteneridentificador()-1)*sizeof(Paquete),ios::beg); //seekp(n, ios::beg);
        // lee el siguiente registro del archivo
        archdeportEntrada.read( reinterpret_cast< char * >( &d ), sizeof( Paquete ) );
        if ( d.obteneridentificador() != 0)
            {
                cout << left << setw(6) << "ID" << setw( 40 ) << "origen" << setw( 40 )
                << "destino" << setw( 40 ) << "peso"<< endl;
                imprimirLinea( cout, d);
                cout << "Desea eliminar el paquete ? '1' si, '0' no" << endl;
                cin >> elim;
                if (elim == 1)
                {
                    //Pone el puntero al inicio
                    archDeportSalida.clear();
                    archDeportSalida.seekp(0, archDeportSalida.beg);
                    d.estableceridentificador(numeroDeSocio);
                    //buscar la posicion en el archivo de registro especificado por el usuario
                    archDeportSalida.seekp((d.obteneridentificador()-2)*sizeof(Paquete)); //seekp(n, ios::beg);
                    //escribir la información especificada por el usuario en el archivo
                    archDeportSalida.write(reinterpret_cast<const char *>(&blanco),sizeof(Paquete));
                  cout << "Borrado corectamente" << endl;
                  mi_lista.eliminar_inicio();
                  numeroDeSocio--;
                  system("pause");
                }
                else
                {
                    cout << "Regresando al menu..." << endl;
                    system("pause");
                }
            }
        else
            {
                cout << "EL NUMERO DE SOCIO NO EXISTE"<<endl;
                system("pause");
            }
    archdeportEntrada.clear();
}

void consultas(fstream&archdeportEntrada, int opc)
{
    //Pone el puntero al inicio
        archdeportEntrada.clear();
        archdeportEntrada.seekg(0, archdeportEntrada.beg);
        switch(opc)
        {
        /*case 4:
            {
                system("cls");
                cout << "Consulta individual" << endl;
                int numero;
                cout << "Dame el numero de socio: "<<endl;
                cin >> numero;
                d.estableceridentificador(numero);
                archdeportEntrada.seekg((d.obteneridentificador()-1)*sizeof(Paquete),ios::beg); //seekp(n, ios::beg);
                // lee el siguiente registro del archivo
                    archdeportEntrada.read( reinterpret_cast< char * >( &d ), sizeof( Paquete ) );
                if ( d.obteneridentificador() != 0)
                    {
                        cout << left << setw(6) <<"ID"
                        << setw( 40 ) << "origen"
                        << setw( 40 ) << "destino"
                        << setw( 40 ) << "peso"<< endl;
                        imprimirLinea( cout, d);
                    }
                else
                    {
                        cout << "EL NUMERO DE SOCIO NO EXISTE"<<endl;
                    }
                system("pause");
                break;
            }*/
        case 3:
            {
                system("cls");
                mi_lista.mostrar();
                system("pause");
            }
            break;
        }
    archdeportEntrada.clear();
} // fin de consultas

    // muestra un solo registro
    void imprimirLinea( ostream &salida, const Paquete &registro )
    {
    salida << left << setw(6) << registro.obtenerid()
    << setw( 40 ) << registro.obtenerorigen()
    << setw( 40 ) << registro.obtenerdestino()
    << setw( 40 ) << registro.obtenerpeso()<<endl;
    } // fin de la función imprimirLinea

void recuperar(fstream&archPaquete)
{
    system("cls");
    // lee el primer registro del archivo
    archPaquete.read( reinterpret_cast< char * >( &d ), sizeof( Paquete ) );
    // lee todos los registros del archivo
    while ( archPaquete && !archPaquete.eof() )
    {
        // muestra un registro
        if ( d.obteneridentificador() != 0)
        {
            mi_lista.insertar_inicio(d);
            numeroDeSocio++;
        }
        // lee el siguiente registro del archivo
        archPaquete.read( reinterpret_cast< char * >( &d ), sizeof( Paquete ) );
    } // fin de while
    system("pause");
}

void menu()
{
    fstream archpaquete("paquetes.txt", ios::out | ios::binary | ios::in );
    if ( !archpaquete)
    {
        cerr << "No se pudo abrir el archivo." << endl;
        exit( 1 );
    } // fin de if

    int opc;
    do
    {
    system("cls");
    cout << "MENU paquetes"<<endl;
    cout << "1) Agregar paquete" << endl;
    cout << "2) eliminar paquete" << endl;
    cout << "3) mostrar paquetes" << endl;
    cout << "4) recuperar" << endl;
    cout << "5) Salir" << endl;
    cout << "Ingresar opcion: "<<endl;
    cin>> opc;
    switch(opc)
        {
        case 1:
            {
                altas(archpaquete);
                break;
            }
        case 2:
            {
                bajas(archpaquete,archpaquete);
                break;
            }
        case 3:
            {
                consultas(archpaquete,opc);
                break;
            }
        case 4:
            {
                recuperar(archpaquete);
                cout << "recuperado correctamente"<<endl;
                system("pause");
                break;
            }
        case 5:
        {
            cout << "saliendo..."<<endl;
            archpaquete.close();
            exit(1);
            break;
        }
        }
    }while(opc!=5);
}
