#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "startmenu.h"
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
    void goToInstructions();
    void addNewClientSelection();
    void selectClientDisplay(int);
    void changeTab(int index);
    void nextPageInstruction();
    void acceptClient();
    void rejectClient();
    void nextDialogue();
    void clientChosen(int);
signals:
    void resetSignal();
private slots:

private:
    Ui::MainWindow *ui;
    Model *model; // (rachel version)
    // Model m; (nolan mode)

    bool client_in_office;
    int client_index;
    int dialogue_index;
    QVector<QString> dialogue;

    void nextClient();
};
#endif // MAINWINDOW_H
