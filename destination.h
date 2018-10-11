#ifndef DESTINATION_H
#define DESTINATION_H

#include <QObject>
#include "source.h"

class destination : public QObject
{
    Q_OBJECT
public:
    explicit destination(QObject *parent = nullptr);

signals:

public slots:
    void test();

};

#endif // DESTINATION_H
