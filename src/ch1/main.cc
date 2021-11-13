#include <QCoreApplication>
#include "ch1/microscope.h"

int main(int argc, char *argv[])
{
    auto microscope = Microscope::Instance();

    microscope->setXPos(129.2);
    microscope->setYPos(-32.4);
    microscope->setFocusPoint(521.39);
}
