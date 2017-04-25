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
    int getEdad(){ return this->iImag;}
    int getTelefono() {  }
    string getCorreoElectronico(){  }
    //Setters
    void setNombre( string sNombre ){ this->sNombre = sNombre; }
    void setEdad( int iEdad ){ this->iEdad = iEdad; }
    void setNombre( int iTelefono ){ this->iTelefono = iTelefono; }
};
