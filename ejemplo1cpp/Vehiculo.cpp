#include"Vehiculo.h"


Vehiculo::Vehiculo(string tipo, string color, int ancho, int alto, int largo){ //método constructor
            this->tipo = tipo;
            this->color = color;
            this->ancho = ancho;
            this->alto = alto;
            this->largo = largo;
}

void Vehiculo::arrancar(){
    cout<<"Vehiculo  " <<tipo<<" arrancando "<<endl;
}

void Vehiculo::acelerar(){
    cout<<"Vehiculo  " <<tipo<<" acelerando "<<endl;
}


void Vehiculo::frenar(){
    cout<<"Vehiculo  " <<tipo<<" frenando "<<endl;    
}

int Vehiculo::getAncho(){
    return ancho; 
}

int Vehiculo::getAlto(){
    return alto;
}
int Vehiculo::getLargo(){
    return largo;    
}

void Vehiculo::getColor(){
    cout<<color<<endl;
}

void Vehiculo::setColor( string _newcolor){
    color = _newcolor;
}

void Vehiculo::setAlto(int _newalto){
    alto = _newalto; 
}
void Vehiculo::setAncho(int _newancho){
    ancho = _newancho;
}

void Vehiculo::setLargo(int _newlargo){
    largo = _newlargo;
}

Vehiculo::~Vehiculo(){
    cout << "Destruyendo el vehiculo de tipo: " << tipo << endl;
}
