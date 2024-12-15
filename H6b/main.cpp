#include <QCoreApplication>
#include "exampleclass.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass eClass1;
    eClass1.startToWait();

    return a.exec();
}
