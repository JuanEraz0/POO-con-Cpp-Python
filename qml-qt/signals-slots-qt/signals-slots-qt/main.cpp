#include <QCoreApplication>
#include "UserInteractor.h"
#include<QDebug>
#include "Firefox.h"
#include "InternetExplorer.h"
#include "qvariant.h"


int main(int argc, char *argv[]){
    QCoreApplication app(argc, argv);

    UserInteractor interactor;
    Firefox firefox;
    InternetExplorer internetExplorer;
    firefox.setProperty("version",2.01);
    QObject *obj = &interactor;
    interactor.setProperty("remono","retama");
    obj->setProperty("control",1);
    QObject::connect(&interactor, &UserInteractor::phraseTyped, &firefox, &Firefox::browse);
    QObject::connect(&interactor, &UserInteractor::phraseTyped, &internetExplorer, &InternetExplorer::browseRequested);
    QObject::connect(&interactor, &UserInteractor::phraseTyped, [&](){
        qDebug()<< interactor.property("phrase");
        qDebug()<< interactor.property("control");
        qDebug()<< firefox.property("name");
        qDebug()<< firefox.property("version");
        qDebug()<< interactor.property("remono");

    });
    interactor.getInput();

    return app.exec();


}
