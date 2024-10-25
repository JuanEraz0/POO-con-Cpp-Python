#include "objetoex.h"
#include<QDebug>

//Constructor de ventanas, recibe como parámetro el título como referencia, QObject puntero a la dirección del padre si es el caso.
ObjetoEx::ObjetoEx(const QString &title, QObject *parent)
    :QObject{parent}
    ,m_title(title)
{
    //Mensaje con QDebug de que se creó la ventana
    qDebug()<< "Window created  "<<m_title;
}

ObjetoEx::~ObjetoEx()
{
    //Mensaje con QDebug de que se cerró la ventana
    qDebug()<< "Window closed" << m_title;
}
