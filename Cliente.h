class cliente{
private:
    string sNombre;
    int iEdad;
    int iTelefono;
    string sCorreoElectronico;

public:
    //Constructor default
    cliente(){
        sNombre = "Juan Perez";
        iEdad = 18;
        iTelefono = 8666303466;
        sCorreoElectronico = "a00818811@itesm.mx";
    }

    //Constructor con parametros
    cliente (string sNombre, int iEdad, int iTelefono, string sCorreoElectronico ){
        this-> sNombre = sNombre;
        this -> iEdad = iEdad;
        this -> iTelefono = iTelefono;
        this -> sCorreoElectronico = sCorreoElectronico;
    }

    string getNombre(){ this->sNombre = sNombre; }
    int getEdad(){ this->iEdad = iEdad; }
    int getTelefono() { this->iTelefono = iTelefono; }
    string getCorreoElectronico(){ this->sCorreoElectronico = sCorreoElectronico; }

};
