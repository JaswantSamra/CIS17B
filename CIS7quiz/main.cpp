#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int x = 3;
    int y = 6;
    int z = x&y;
    printf("%d",z);
    return a.exec();
}
