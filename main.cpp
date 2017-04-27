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

    int iContador = 0, iOpcion, iEdad, iTelefono, iCont = 0, resrvacionesContador = 0;

    string sNombre, sCorreoElectronico, sLinea, sMarca;
    string arregloString[20];

    ifstream entradaArchivoReserva;

    entradaArchivoReserva.open("Carros1.txt");

    for(int i=0; !entradaArchivoReserva.eof(); i++)
    {
        //Guardar marca en el arreglo de obetos
        entradaArchivoReserva >> sMarca;
        aAuto[i].setMarca(sMarca);
       cout << aAuto[i].getMarca() << " ";

       entradaArchivoReserva >> sMarca;
       aAuto[i].setModelo(sMarca);
       cout << aAuto[i].getModelo() << " ";

       //Guarda la categoria

       entradaArchivoReserva >> sMarca;
       aAuto[i].setCategoria(sMarca);
       cout << aAuto[i].getCategoria() << endl;
    }//termina for

    entradaArchivoReserva.close();

    return 0;
}
