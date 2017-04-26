#include <iostream>
#include <string>
#include <fstream>

using namespace std;
#include "Automovil.h"
#include "Reserva.h"
#include "Cliente.h"

int main( ){
    cliente persona;
    Reserva reservacion;
    cliente arregloPersonas[20];
    Reserva arregloReservaciones[20];
    Automovil aAuto[20];

    int iContador = 0, iOpcion, iEdad, iTelefono, iCont = 0;;

    string sNombre, sCorreoElectronico, sLinea;
    string arregloString[20];

    istream entradaArchivoReserva;
    istream archivoSalida;
    archivoSalida.open( "Carros.csv" );

    while ( !entradaArchivoReserva.eof() ){
        getline(entradaArchivoReserva, sLinea );
        arregloString[iCont] = sLinea;
        iCont = iCont + 1;
    }

    cout << "Teclea el numero de opcion: " << endl;
    cout << "   1.- Reservar un vehiculo" << endl;
    cout << "   2.- Consultar reservas" << endl;
    cin >> iOpcion;

    if ( iOpcion == 1){
        cout << "Provee los datos siguientes: " << endl;
        cout << "   Nombre: " << endl;
        getline(cin, sNombre);
        cout << "   Edad: " << endl;
        cin >> iEdad;
        cout << "   Telefono: " << endl;
        cin >> iTelefono;
        cout << "   Correo electronico: " << endl;
        cin >> sCorreoElectronico;

        arregloPersonas[iContador].setNombre( sNombre);
        arregloPersonas[iContador].setEdad(iEdad);
        arregloPersonas[iContador].setTelefono(iTelefono);
        arregloPersonas[iContador].setCorreoElectronico(sCorreoElectronico);

        for ( int iA = 0; iA < 20; iA++ ){
            cout << iA << ".- " << arregloString[iA] << endl;
        }

        int numAuto;
        cout << "Seleccione el numero del auto que guste: " <<endl;
        cin >>numAuto;
        if ( )
    }


    return 0;
}
