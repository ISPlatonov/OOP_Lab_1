#include "mainwindow.h"

#include <QApplication>
#include <QPair>
#include <complexnum.h>

#include <assert.h>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //tests
    ComplexNum n0;
    assert(n0.getReal() == 0 &&
           n0.getImaginary() == 0);

    ComplexNum n1(-5, 7.62);
    assert(n1.getReal() == -5 &&
           n1.getImaginary() == 7.62);

    ComplexNum n2(3);
    assert(n2.getReal() == 3 &&
           n2.getImaginary() == 0);

    ComplexNum n3(n1);
    assert(n3.getReal() == -5 &&
           n3.getImaginary() == 7.62);

    n0.setNumber(3.23, -5.001);
    assert(n0.getReal() == 3.23 &&
           n0.getImaginary() == -5.001);

    auto n4 = ComplexNum(232, 382) / ComplexNum(191, 23);
    qDebug() << n4.getReal() << '+' << n4.getImaginary() << 'i';

    return a.exec();
}
