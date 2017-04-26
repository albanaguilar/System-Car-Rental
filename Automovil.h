#include <string>
#include <iostream>
#include <fstream>

using namespace std;

#ifndef Automovil_h
#define Automovil_h

class Automovil {

    string sMarca;
    string sModelo;
    string sCategoria;
    string sTransmision;
    string sUbicacion;
    int iCapacidad;
    float fPrecioDiario;

public:
    //Constructor default
    Automovil();
    Automovil( string sMarca, string sModelo, string sCategoria, string sTransmision, string sUbicacion, int iCapacidad, float fPrecioDiario );

    string getMarca();
    string getModelo();
    string getTransmision();
    string getUbicacion();
    string getCategoria();
    int getCapacidad();
    float getPrecioDiario();

    void setMarca(string sMarca);
    void setModelo(string sModelo);
    void setTransmision(string sTransmision);
    void setUbicacion(string sUbicacion);
    void setCategoria(string sCategoria);
    void setCapacidad(int iCapacidad);
    void setPrecioDiario(float fPrecioDiario);

    void renta();

};

Automovil::Automovil( ){ }
Automovil::Automovil( string sMarca, string sModelo, string sCategoria, string sTransmision, string sUbicacion, int iCapacidad, float fPrecioDiario ){
    this->sMarca = sMarca;
    this->sModelo = sMarca;
    this->sCategoria = sCategoria;
    this->sTransmision = sTransmision;
    this->sUbicacion = sUbicacion;
    this->iCapacidad = iCapacidad;
    this->fPrecioDiario = fPrecioDiario;
}
//GETTERS
string Automovil::getMarca( ){ return this->sMarca; }
string Automovil::getModelo(){ return this->sModelo;}
string Automovil::getTransmision(){ return this->sTransmision; }
string Automovil::getUbicacion( ){ return this->sUbicacion; }
string Automovil::getCategoria( ){ return this->sCategoria; }
int Automovil::getCapacidad( ){ return this->iCapacidad; }
float Automovil::getPrecioDiario( ){ return this->fPrecioDiario;}

//Setters
void Automovil::setMarca(string sMarca){ this->sMarca = sMarca; }
void Automovil::setModelo(string sModelo){ this->sModelo = sModelo; }
void Automovil::setTransmision(string sTransmision){ this->sTransmision = sTransmision; }
void Automovil::setUbicacion(string sUbicacion){ this->sUbicacion = sUbicacion; }
void Automovil::setCategoria(string sCategoria){ this->sCategoria = sCategoria; }
void Automovil::setCapacidad(int iCapacidad ){ this->iCapacidad = iCapacidad; }
void Automovil::setPrecioDiario(float fPrecioDiario ){ this->fPrecioDiario = fPrecioDiario; }

void Automovil::renta( ){

}

#endif /* Automovil_h */
