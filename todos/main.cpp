#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    subject sub1 = new Subject();

    return a.exec();
}
