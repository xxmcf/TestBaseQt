#include <QCoreApplication>

#include "testcase.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    TestQDataStream();

    return a.exec();
}
