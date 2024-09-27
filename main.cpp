#include<iostream>
#include<string.h>
using namespace std;


class Vehiculo{
	private:
        string tipo;
		string color;
		int ancho;
		int alto;
		int largo;
	
    public:
		Vehiculo(string tipo, string color, int ancho, int alto, int largo){
            this->tipo = tipo;
            this->color = color;
            this->ancho = ancho;
            this->alto = alto;
            this->largo = largo;
        } // El método constructor inicializa los objetos cuando se instancian con la clase, en este caso se inicializará con todos los atributos
		
		void arrancar( ){
            cout<<"Vehiculo  " <<tipo<<" arrancando "<<endl;
        }   //
        void acelerar( ){
            cout<<"Vehiculo  " <<tipo<<" acelerando "<<endl;
        }   // Estos métodos son propios de la clase, y pueden ser utilizados por todas las instancias de la clase
        void frenar( ){
            cout<<"Vehiculo  " <<tipo<<" frenando "<<endl;
        }	   //

        //métodos getter
        void getColor(){
            cout<<color<<endl;
        }
        int getAncho(){
            return ancho; 
        }
        int getAlto(){
            return alto;
        }
        int getLargo() {
            return largo;
        }

        //métodos setter
        void setColor( string _newcolor){
            color = _newcolor;
        }
        void setAncho(int  _newancho ){
            ancho = _newancho; 
        }
        void setAlto( int _newalto ){
            alto = _newalto;
        }
        void setLargo( int _newlargo){
            largo = _newlargo;
        }
};


int main(){
    Vehiculo vehiculoHatch = Vehiculo("hatch","rojo",150,180,180);
    Vehiculo vehiculoLem = Vehiculo("deportivo","rojo",200,150,250);
    Vehiculo vehiculoCity = Vehiculo("city","azul",150,160,150);

    //Uso de métodos para cada instancia
    
    vehiculoHatch.acelerar();
    vehiculoHatch.frenar();
    vehiculoHatch.arrancar();

    vehiculoLem.acelerar();
    vehiculoLem.frenar();
    vehiculoLem.arrancar();

    vehiculoCity.acelerar();
    vehiculoCity.frenar();
    vehiculoCity.arrancar();

    // metodos setter y getter

    vehiculoHatch.getColor();
    vehiculoHatch.setColor("verde");
    vehiculoHatch.getColor();

    return 0;
}

