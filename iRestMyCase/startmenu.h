#ifndef STARTMENU_H
#define STARTMENU_H

#include <QWidget>
#include <QSoundEffect>

namespace Ui {
class StartMenu;
}

class StartMenu : public QWidget
{
    Q_OBJECT

public:
    explicit StartMenu(QWidget *parent = nullptr);
    ~StartMenu();
    void playClickSound();

private slots:

    void on_newGame_pushButton_clicked();

    void on_instruction_pushButton_clicked();

signals:
    void restartGameSignal();
    void instructionSignal();

private:
    Ui::StartMenu *ui;
};

#endif // STARTMENU_H
