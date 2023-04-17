#include "mainwindow.h"
#include "startmenu.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // StartMenu m;
   // m.show();
    MainWindow w;
    w.show();
    return a.exec();
}
