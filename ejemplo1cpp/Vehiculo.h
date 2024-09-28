// en este archivo de cabezera (header) se hace la declaración de la clase

#ifndef VEHICULO_H
#define VEHICULO_H

#include<iostream>
#include<string.h>
using namespace std;
class Vehiculo
{
private:
        string tipo;
		string color;
		int ancho;
		int alto;
		int largo;
public:
        Vehiculo(string tipo, string color, int ancho, int alto, int largo); // Constructor
        // El método constructor inicializa los objetos cuando se instancian con la clase, en este caso se inicializará con todos los atributos
		void arrancar( );
        void acelerar( );   
        // Estos métodos son propios de la clase, y pueden ser utilizados por todas las instancias de la clase
        void frenar( );
        //métodos getter
        void getColor();
        int getAncho();
        int getAlto();
        int getLargo();
        //métodos setter
        void setColor( string _newcolor);
        void setAncho(int  _newancho );
        void setAlto( int _newalto );
        void setLargo( int _newlargo);
    ~Vehiculo(); // Destructor
};


#endif