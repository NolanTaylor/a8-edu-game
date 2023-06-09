#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QSoundEffect>
#include "startmenu.h"
#include "model.h"
#include <Box2D/Box2D.h>
#include "box.h"

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

    //void updateClicked();
    void promoteClicked();

    //void on_update_released();
    void on_continue_pushButton_clicked();

    void title4Clicked();

    void title6Clicked();

    void turnPage();

    void title7Clicked();

    void title8Clicked();

    void title9Clicked();

    void title10Clicked();

    void title11Clicked();

    void title12Clicked();

    void backPage();

    void changedTabs(int index);

    void titlesScreenChanged(int arg1);

    void characterAnimationOnTick();


    void on_title4Button_2_clicked();

    void on_title4Button_3_clicked();

    void on_title4Button_4_clicked();

    void on_title4Button_5_clicked();

    void on_title4Button_6_clicked();

    void on_title4Button_7_clicked();

    void on_title4Button_8_clicked();

    void on_title4Button_9_clicked();

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

    //Box2D implementation
    std::unique_ptr<b2World> mWorld;
    std::vector<Box> mBoxes;
    QTimer *timer;

    void restart();

};
#endif // MAINWINDOW_H
