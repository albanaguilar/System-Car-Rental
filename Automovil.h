//
//  Automovil.h
//  Car Rental
//
//  Created by Fernando Saenz Prado on 4/24/17.
//  Copyright © 2017 Fernando Sáenz Prado. All rights reserved.
//

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

#ifndef Automovil_h
#define Automovil_h

class Automovil {

    string marca;
    string modelo;
    string categoria;
    string transmision;
    string ubicacion;
    int capacidad;
    float precioDiario;

public:

    //Constructor default
    Automovil();

    string getMarca();
    string getModelo();
    string getTransmision();
    string getUbicacion();
    string getCategoria();
    int getCapacidad();

    int getCapacidad();
    int getPrecioDiario();

    void setMarca(string);
    void setModelo(string);
    void setTransmision(string);
    void setUbicacion(string);
    void setCategoria(string);
    void setCapacidad(float);
    void setPrecioDiario(float);

    void renta();

};

string getMarca(){
    return marca;
}

string getModelo(){
    return modelo;
}

string getTransmision(){
    return transmision
}

string getUbicacion(){
    return ubicacion;
}

string getCategoria(){
    return categoria;
}

int getCapacidad(){
    return capacidad;
}



//set
void setMarca(string nombre){
    marca = nombre;
}

void setModelo(string mod){
    modelo = mod;
}

void setTransmision(string trans){
    transmision = trans;
}
void setUbicacion(string ubi){
    ubicacion = ubi;
}

void setCategoria(string cat){
    categoria = cat;
}

void setCapacidad(int cap){
    capacidad = cap;
}

void setPrecioDiario(float precio){
    precioDiario = precio;
}




}


#endif /* Automovil_h */
