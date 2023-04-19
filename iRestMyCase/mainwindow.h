#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "model.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Model &model, QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void restartGame();
    void ruleBookClicked();
    void ruleBookClosed();
    void toMainMenu();
    void toClientSelection();
    void questionClient();
    void selectClientDisplay(int index);
    void goToInstructions();
signals:
    void resetSignal();
private slots:
    void addNewClientSelection();


    void changeTab(int index);

private:
    Ui::MainWindow *ui;
    Model *model;
};
#endif // MAINWINDOW_H
