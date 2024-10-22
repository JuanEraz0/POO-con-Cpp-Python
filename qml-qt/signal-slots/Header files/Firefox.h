#ifndef FIREFOX_H
#define FIREFOX_H

#include <QObject>

class Firefox: public QObject
{
    Q_OBJECT

private:
    /* data */
public:
    explicit Firefox(QObject *parent = nullptr);

public slots:
    void browse(const QString &phrase);
};

#endif

