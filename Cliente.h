#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class cliente{
private:
    string sNombre;
    int iEdad;
    int iTelefono;
    string sCorreoElectronico;

public:
    cliente(){  } //Constructor default
    cliente (string sNombre, int iEdad, int iTelefono, string sCorreoElectronico ){ //Constructor con parametros
        this-> sNombre = sNombre;
        this -> iEdad = iEdad;
        this -> iTelefono = iTelefono;
        this -> sCorreoElectronico = sCorreoElectronico;
    }
    //Getters
    string getNombre(){ return this->sNombre; }
    int getEdad(){ return this->iEdad; }
    int getTelefono() { return this->iTelefono; }
    string getCorreoElectronico(){ return this-> sCorreoElectronico; }

    //Setters
    void setNombre( string sNombre ){ this->sNombre = sNombre; }
    void setEdad( int iEdad ){ this->iEdad = iEdad; }
    void setTelefono ( int iTelefono ){ this->iTelefono = iTelefono; }
    void setCorreoElectronico(string sCorreoElectronico){ this->sCorreoElectronico = sCorreoElectronico; }

    //Deploy data
    void print(){
        cout << "Los datos del cliente son los siguientes: " << endl;
        cout << "   Nombre: " << sNombre << endl;
        cout << "   Edad: " << iEdad << endl;
        cout << "   Telefono: " << iTelefono << endl;
        cout << "   Correo electronico: " << sCorreoElectronico << endl;
    }

};

//TERMINADA LA CLASE
