#ifndef OBJETOEX_H
#define OBJETOEX_H

#include <QObject>

class ObjetoEx : public QObject
{
    Q_OBJECT
public:
    explicit ObjetoEx(const QString &title, QObject *parent = nullptr );
    virtual ~ObjetoEx();
signals:

private:
    QString m_title;
};

#endif // OBJETOEX_H
