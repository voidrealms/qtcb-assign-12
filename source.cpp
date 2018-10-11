#include "source.h"

source::source(QObject *parent) : QObject(parent)
{

}

void source::sayHello()
{
    qInfo() << "Hello world";
}

void source::doTest()
{
    emit test();
}
