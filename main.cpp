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
    ifstream entradaArchivoReserva;

    entradaArchivoReserva.open("Carros1.txt");

    int iContador = 0, iOpcion = 1, iEdad, iCont = 0, iCapacidad, contadorReservas = 0;
    string iTelefono;
    int dias;
    int numAuto;

    string sNombre, sCorreoElectronico, sLinea, sMarca, sModelo, sCategoria, sTransmision, sUbicacion;
    string arregloString[20];
    float fPrecioDiario;


    cout << endl;
    cout <<"Bienvenido a American Car Rental" <<endl;
    cout << endl;
    cout << "Los autos son los siguientes: " <<endl;

    for(int i=0; !entradaArchivoReserva.eof(); i++)
    {
        cout << i <<".- ";
        entradaArchivoReserva >> sMarca;
        aAuto[i].setMarca(sMarca);
       cout << aAuto[i].getMarca() << " ";

       entradaArchivoReserva >> sModelo;
       aAuto[i].setModelo(sModelo);
       cout << aAuto[i].getModelo() << " ";


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
    }

    cout << endl;
    cout << "Presione 1 para reservar un vehiculo" << endl;
    cin >> iOpcion;
    cout << endl;

    cin.ignore();
    if ( iOpcion == 1){
        cout << "Provee los datos siguientes: " << endl;
        cout << "   Nombre: ";
        getline(cin, sNombre);
        do{
        cout << "   Edad: ";
        cin >> iEdad;
        }while (iEdad < 18 || iEdad > 68);
        cout << "   Telefono: ";
        cin >> iTelefono;
        cin.ignore();
        cout << "   Correo electronico: ";
        cin >> sCorreoElectronico;

        arregloPersonas[iContador].setNombre( sNombre);
        arregloPersonas[iContador].setEdad(iEdad);
        arregloPersonas[iContador].setTelefono(iTelefono);
        arregloPersonas[iContador].setCorreoElectronico(sCorreoElectronico);

        cout << endl;
        cin.ignore();
        cout << "Seleccione el numero del auto que guste: ";
        cin >>numAuto;

        cout << "Cuantos dias quieres rentarlo? ";
        cin >> dias;
        arregloReservaciones[iCont].setDiasRenta( dias );
        arregloReservaciones[iCont].setCosto( aAuto[numAuto].getPrecioDiario() );

        contadorReservas++;
        cout << "!Se ha realizado su reserva exitosamente!" << endl;

        entradaArchivoReserva.close();
        iCont++;
        ofstream archivoSalida;
        archivoSalida.open("Reservas.txt");
        for (int iA = 0; iA < iCont; iA++ ){
            archivoSalida << "Las reservas realizadas son las siguientes: " << '\n' << '\n';
            archivoSalida << arregloPersonas[iA].getNombre( ) << " " <<
            arregloPersonas[iA].getEdad( ) << " " <<
            arregloPersonas[iA].getTelefono( ) << " " <<
            arregloPersonas[iA].getCorreoElectronico( ) << '\n' << aAuto[numAuto].getMarca() << " "
            << aAuto[numAuto].getModelo() << " " << aAuto[numAuto].getCategoria() << " "
            << aAuto[numAuto].getTransmision() << " " << aAuto[numAuto].getUbicacion() << " "
            << aAuto[numAuto].getCapacidad() << " " << aAuto[numAuto].getPrecioDiario() << '\n';
             archivoSalida << "Los dias de renta son: " << dias << '\n'
            << "El costo de renta es de: " << (aAuto[numAuto].getPrecioDiario() * dias) << '\n';
        }
        cout << endl;
        cout << "Verifique el archivo de reservas" << endl;
        cout << endl;
        cout << "Gracias por visitarnos :D" <<endl;
        archivoSalida.close();
    }
    else
        cout << "Gracias por visitarnos :D" <<endl;
}
