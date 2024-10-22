#include "Firefox.h"

Firefox::Firefox(QObject *parent): QObject {parent}{

}

void Firefox::browse(const QString &phrase){
    qDebug()<< "\n Displaying results for "<<phrase
            << "\n Result 1"
            << "\n Result 2"
            << "\n Result 3";
}