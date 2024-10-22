#include "InternetExplorer.h"

InternetExplorer::InternetExplorer(QObject *parent):QObject{parent}
{
    m_timer.setInterval(10000);
    m_timer.setSingleShot(true);

    connect(this, &InternetExplorer::browseRequested, &m_timer,qoverload<>(&QTimer::start));
    connect(&m_timer, &QTimer::timeout, this, &InternetExplorer::browse);

}

void InternetExplorer::browse(){

    QDebug()<< "Internet Explorer is not responding ... ";
    
}