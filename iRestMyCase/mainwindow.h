#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QSoundEffect>
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

    void playClickSound();

    void toMainMenu();
    void goToInstructions();
    void toSelectionScreen();
    void nextPageInstruction();

    //Main screen
    void ruleBookClicked();
    void ruleBookClosed();

    void checkMoneyAndReputation();
    void checkUserChoose(bool truth);
    void questionClient();
    void acceptClient();
    void rejectClient();

    void selectClientDisplay();
    void changeTab(int index);


    void openDialougeHistory();
    void nextDialogue();
    void clientChosen(int);
signals:
    void resetSignal();
private slots:
    void displayOutcome();
    void nextRound();

    void on_continue_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Model *model; // (rachel version)
    // Model m; (nolan mode)

    bool client_in_office;
    int client_index;
    int dialogue_index;
    QVector<QString> dialogue;

    void nextClient();
    void replaceClient();
};
#endif // MAINWINDOW_H
