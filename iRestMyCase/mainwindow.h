#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "startmenu.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void restartGame();
    void ruleBookClicked();
    void ruleBookClosed();
    void toMainMenu();
    void toClientSelection();
    void questionClient();
signals:
    void resetSignal();

private slots:

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
