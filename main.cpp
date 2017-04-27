#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "Reserva.h"

int main( ){
    cliente persona;
    Reserva reservacion;
    cliente arregloPersonas[20];
    Reserva arregloReservaciones[20];
    //Automovil aAuto[20];

    int iContador = 0, iOpcion, iEdad, iTelefono, iCont = 0, resrvacionesContador = 0;

    string sNombre, sCorreoElectronico, sLinea;
    string arregloString[20];

    ifstream entradaArchivoReserva;
    entradaArchivoReserva.open("Carros.txt");

    cout << endl;
    while ( !entradaArchivoReserva.eof() ){
        getline(entradaArchivoReserva, sLinea );
        arregloString[iCont] = sLinea;
        iCont = iCont + 1;
        cout << sLinea << endl;
    }

    cout << endl;
    cout << endl;
    cout << "Menu" << endl;
    cout << "   1.- Reservar un vehiculo" << endl;
    cout << "   2.- Consultar reservas" << endl;
    cout << "Teclea el numero de opcion: ";
    cin >> iOpcion;
    cout << endl;

    cin.ignore();
    if ( iOpcion == 1){
        cout << "Provee los datos siguientes: " << endl;
        cout << "   Nombre: ";
        getline(cin, sNombre);
        cout << "   Edad: ";
        cin >> iEdad;
        cout << "   Telefono: ";
        cin >> iTelefono;
        cin.ignore();
        cout << "   Correo electronico: ";
        cin >> sCorreoElectronico;

        arregloPersonas[iContador].setNombre( sNombre);
        arregloPersonas[iContador].setEdad(iEdad);
        arregloPersonas[iContador].setTelefono(iTelefono);
        arregloPersonas[iContador].setCorreoElectronico(sCorreoElectronico);

        cout << "Marca " << "Modelo " << "Categoria " <<"Transmicion " << "Ubicacion " << "Capacidad " << "Costo de renta" << endl;
        for ( int iA = 1; iA < 20; iA++ ){
            cout << iA << ".- " << arregloString[iA] << endl;
        }

        cin.ignore();
        int numAuto;
        cout << "Seleccione el numero del auto que guste: ";
        cin >>numAuto;

        int sA = arregloString[numAuto];
        while ( sA != ' ' ){

        }
        resrvacionesContador++;

        cout << "!Se ha realizado su reserva exitosamente!" << endl;
        //iContador = iContador + 1;

    }
    else if (iOpcion == 2){
        cout <<"Reservas" << endl;
        for (int iA = 0; iA < iContador; iA++){
            cout << ( iA + 1 ) << ".- " << arregloReservaciones[resrvacionesContador] << endl;
        }
    }


    return 0;
}
