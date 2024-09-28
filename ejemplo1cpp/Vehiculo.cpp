#include"Vehiculo.h"
#include<iostream>
#include<string.h>

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
    this->color = _newcolor;
}

void Vehiculo::setAlto(int _newalto){
    this->alto = _newalto; 
}
void Vehiculo::setAncho(int _newancho){
    this->ancho = _newancho;
}

void Vehiculo::setLargo(int _newlargo){
    this->largo = _newlargo;
}
Vehiculo::~Vehiculo(){

}
