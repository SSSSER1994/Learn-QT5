#include <QApplication>
#include "ch2/test_widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestWidget w;
    w.show();

    return a.exec();
}