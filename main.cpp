#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "Reserva.h"
#include "Automovil.h"

void mostrarAutos(int iContador = 0, int iOpcion = 1,Automovil aAuto, int iEdad,int iCont = 0,int iCapacidad, int contadorReservas = 0, string sNombre,string sCorreoElectronico,string sLinea, string sMarca,string sModelo,string sCategoria,string sTransmision,string sUbicacion){
 for(int i=0; !entradaArchivoReserva.eof(); i++)
    {
        //getline(entradaArchivoReserva, sLinea)
        //Guardar marca en el arreglo de obetos
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
    }//termina for
}

    entradaArchivoReserva.close();
}

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
    do{
    cout << endl;
    cout << "Menu" << endl;
    cout << "   1.- Reservar un vehiculo" << endl;
    cout << "   2.- Consultar reservas" << endl;
    cout << "   3.- SALIR" << endl;
    cout << "Teclea el numero de opcion: ";
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
        cout << "Los autos son los siguientes: " <<endl;
//imprimir carros

        mostrarAutos();


        cout << endl;
        cin.ignore();
        cout << "Seleccione el numero del auto que guste: ";
        cin >>numAuto;  //ponerlo numauto - 1
        cout << endl;

        cout << "¿Cuantos dias quieres rentarlo? ";
        cin >> dias;
        arregloReservaciones[iCont].setDiasRenta( dias );
        //arregloPersonas[iCont].
        arregloReservaciones[iCont].setCosto( aAuto[numAuto].getPrecioDiario() );
        arregloReservaciones[iCont].calcularCosto(aAuto[numAuto].getPrecioDiario(), dias);

        contadorReservas++;
        cout << "!Se ha realizado su reserva exitosamente!" << endl;
        //arregloReservaciones[iCont] = aAuto[numAuto];
        //cout << arregloReservaciones[iCont] << endl;
        //iCont++;*/

        entradaArchivoReserva.close();
        ofstream archivoSalida;
        string sH;
        archivoSalida.open("hola.txt");
        for (int iA = 0; iA <= iCont; iA++ ){
            archivoSalida << iA <<".- " << arregloPersonas[iA].getNombre() << " " <<
            arregloPersonas[iA].getEdad() << " " <<
            arregloPersonas[iA].getTelefono() << " " <<
            arregloPersonas[iA].getCorreoElectronico( ) << '\n' << aAuto[numAuto].getMarca() << " "
            << aAuto[numAuto].getModelo() ;/*<< " " << aAuto[iA].getCategoria() << " "
            << aAuto[iA].getTransmision() << " " << aAuto[iA].getUbicacion() << " "
            << aAuto[iA].getCapacidad() << " " << aAuto[iA].getPrecioDiario() << '\n'
            << "Los dias de renta son: " << dias << '\n'
            << arregloReservaciones[iA].calcularCosto(aAuto[numAuto].getPrecioDiario(), dias) << '\n';
        */}
        archivoSalida.close();
    }
    else if (iOpcion == 2){
        /*for (int iA = 0; iA < contadorReservas; iA++){
            cout << endl;
            //todos los datos de la persona
            cout << iA <<".- " << arregloPersonas[iA].getNombre() << " " <<
            arregloPersonas[iA].getEdad() << " " <<
            arregloPersonas[iA].getTelefono() << " " <<
            arregloPersonas[iA].getCorreoElectronico( ) << endl;

            //todos los datos del auto
            cout << aAuto[].getMarca() << " " << aAuto[iA].getModelo() << " "
            << aAuto[iA].getCategoria() << " " << aAuto[iA].getTransmision() << " "
            << aAuto[iA].getUbicacion() << " " << aAuto[iA].getCapacidad() << " "
            << aAuto[iA].getPrecioDiario() << endl;

            cout << "Los dias de renta son: " << dias << endl;
            arregloReservaciones[iA].calcularCosto(aAuto[numAuto].getPrecioDiario(), dias);
        }*/
    }
    }while (iOpcion > 0 && iOpcion < 4 && iOpcion != 3);



    //return 0;
}
