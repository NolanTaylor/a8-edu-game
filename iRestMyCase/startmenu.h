#ifndef STARTMENU_H
#define STARTMENU_H

#include <QWidget>

namespace Ui {
class StartMenu;
}

class StartMenu : public QWidget
{
    Q_OBJECT

public:
    explicit StartMenu(QWidget *parent = nullptr);
    ~StartMenu();

private slots:

    void on_newGame_pushButton_clicked();

signals:
    void restartGameSignal();

private:
    Ui::StartMenu *ui;
};

#endif // STARTMENU_H
