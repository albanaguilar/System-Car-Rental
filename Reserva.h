#include <string>
#include <iostream>
#include <fstream>

#include "Automovil.h"
#include "Cliente.h"
using namespace std;

class Reserva{

private:
    cliente persona;
    Automovil carro;
    int iDiasRenta;
    float fCosto;

public:
    Reserva( ){ }   //Constructor default
    Reserva(Automovil carro, int iDiasRenta, int fCosto ){ //Constructor con parametros
        this->persona = persona;
        this->carro = carro;
        this->iDiasRenta = iDiasRenta;
        this->fCosto = fCosto;
    }

    //Getters
    cliente getPersona( ){ return this->persona; }
    Automovil getCarro( ){ return this->carro; }
    int getDiasRenta( ){ return this->iDiasRenta; }
    float getCosto( ){ return this->fCosto; }

    //Setters
    void setPersona( cliente persona ){ this->persona = persona; }
    void setCarro( Automovil carro ){ this->carro = carro; }
    void setDiasRenta( int iDiasRenta ){ this->iDiasRenta = iDiasRenta; }
    void setCosto( float fCosto ){ this->fCosto = fCosto; }

    //No se de costo
    /*int calcularCosto( float fCosto, int iDiasRenta ){
        cout << "El precio de renta es de: $" << fCosto * iDiasRenta << endl;
    }*/

};
