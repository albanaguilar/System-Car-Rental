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
    string sEntrega;
    string sDevolucion;
    float fCosto;

public:
    Reserva( ){ }   //Constructor default
    Reserva(Automovil carro, string sEntrega, string sDevolucion, int fCosto ){ //Constructor con parametros
        this->persona = persona;
        this->carro = carro;
        this->sEntrega =sEntrega;
        this->sDevolucion = sDevolucion;
        this->fCosto = fCosto;
    }

    //Getters
    cliente getPersona( ){ return this->persona; }
    Automovil getCarro( ){ return this->carro; }
    string getEntrega( ){ return this->sEntrega; }
    string getDevolucion( ){ return this->sDevolucion; }
    float getCosto( ){ return this->fCosto; }

    //Setters
    void setPersona( cliente persona ){ this->persona = persona; }
    void setCarro( Automovil carro ){ this->carro = carro; }
    void setEntrega( string sEntrega ){ this->sEntrega = sEntrega; }
    void setDevolucion( string sDevolucion ){ this->sDevolucion = sDevolucion; }
    void setCosto( float fCosto ){ this->fCosto = fCosto; }

    //No se de costo
    void calcularCosto( Automovil carro ){

    }

};
