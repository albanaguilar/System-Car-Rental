#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "Reserva.h"
#include "Automovil.h"

int main( ){

    cliente persona;
    Reserva reservacion;
    cliente arregloPersonas[20];
    Reserva arregloReservaciones[20];
    Automovil aAuto[200];

    int iContador = 0, iOpcion, iEdad, iTelefono, iCont = 0, iCapacidad;

    string sNombre, sCorreoElectronico, sLinea, sMarca, sModelo, sCategoria, sTransmision, sUbicacion;
    string arregloString[20];
    float fPrecioDiario;

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
        cout << "Los autos son los siguientes: " <<endl;

        ifstream entradaArchivoReserva;

    entradaArchivoReserva.open("Carros1.txt");

    for(int i=0; !entradaArchivoReserva.eof(); i++)
    {
        //Guardar marca en el arreglo de obetos
        entradaArchivoReserva >> sMarca;
        aAuto[i].setMarca(sMarca);
       cout << aAuto[i].getMarca() << " ";

       entradaArchivoReserva >> sModelo;
       aAuto[i].setModelo(sModelo);
       cout << aAuto[i].getModelo() << " ";

       //Guarda la categoria

       entradaArchivoReserva >> sCategoria;
       aAuto[i].setCategoria(sCategoria);
       cout << aAuto[i].getCategoria() << " ";

       entradaArchivoReserva >> sTransmision;
        aAuto[i].setTransmision(sTransmision);
       cout << aAuto[i].getTransmision() << " ";

       entradaArchivoReserva >> sUbicacion;
        aAuto[i].setUbicacion(sUbicacion);
       cout << aAuto[i].getUbicacion() << " ";

       entradaArchivoReserva >> iCapacidad;
        aAuto[i].setCapacidad(iCapacidad);
       cout << aAuto[i].getCapacidad() << " ";

       entradaArchivoReserva >> fPrecioDiario;
        aAuto[i].setPrecioDiario(fPrecioDiario);
       cout << aAuto[i].getPrecioDiario() << endl;
    }//termina for

    entradaArchivoReserva.close();

        cout << endl;
        cin.ignore();
        int numAuto;
        cout << "Seleccione el numero del auto que guste: ";
        cin >>numAuto;
        cout << endl;

        arregloReservaciones[iCont].setPersona(persona);
       cout << arregloReservaciones[iCont].getPersona() << endl;

        /*arregloReservaciones[iCont] = aAuto[numAuto];
        cout << arregloReservaciones[iCont] << endl;
        iCont++;*/
    }


    return 0;
}
