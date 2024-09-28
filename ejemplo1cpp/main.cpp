#include"Vehiculo.h"
#include<iostream>
#include<string.h>
using namespace std;

int main(){
    Vehiculo vehiculoHatch("hatch","rojo",150,180,180);
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
    
    //modificacion de atributos de objeto vehiculoLem
    vehiculoLem.setAlto(200);
    vehiculoLem.setAncho(250);
    vehiculoLem.setLargo(200);

    //cambios en objeto

    cout<<vehiculoLem.getAlto()<<endl;
    cout<<vehiculoLem.getAncho()<<endl;
    cout<<vehiculoLem.getLargo()<<endl;

    return 0;

}