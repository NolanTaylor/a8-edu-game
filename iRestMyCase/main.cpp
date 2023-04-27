#include "mainwindow.h"
#include "startmenu.h"
#include "model.h"
#include <Box2D/Box2D.h>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // m.show();
    Model m;
    MainWindow w(m);
    w.show();
    return a.exec();
}
