#include <QCoreApplication>
#include "objetoex.h"
#include<QTimer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //Vamos a crear al padre en el heap de la memoria
    ObjetoEx parent("padre");

    //Vamos a crear una ventana hija en el stack
    ObjetoEx *parentWindow1 = new ObjetoEx("Ventana_p_1", &parent);
    ObjetoEx *parentWindow2 = new ObjetoEx("Ventana_p_2", &parent);
    ObjetoEx *childWindow1 = nullptr;
    ObjetoEx *childWindow2 = nullptr;
    //uso de for para creación de
    for(int i=0; i<2;i++){
        childWindow1 = new ObjetoEx(QString("Ventana_h_%1 de Ventana_p_1").arg(i) , parentWindow1);
        childWindow2 = new ObjetoEx(QString("Ventana_h_%1 de Ventana_p_2").arg(i) , parentWindow2);
    }

    QTimer::singleShot(1000, [& childWindow1](){
        childWindow1->deleteLater();
    });

    //Usamos lambda & para hacer referencia a todas las variables del programa dentro de la función singleShot de QTimer
    QTimer::singleShot(5000, [&](){
        parent.deleteLater();

    });



    return a.exec();
}
