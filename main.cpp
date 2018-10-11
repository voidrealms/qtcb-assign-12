#include <QCoreApplication>
#include "source.h"
#include "destination.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    source src;
    destination dst;

    QObject::connect(&src,&source::test,&dst, &destination::test);

    src.doTest();

    return a.exec();
}
