#include "destination.h"

destination::destination(QObject *parent) : QObject(parent)
{

}

void destination::test()
{
    source* obj = qobject_cast<source*>(sender());
    if(obj)obj->sayHello();
}
