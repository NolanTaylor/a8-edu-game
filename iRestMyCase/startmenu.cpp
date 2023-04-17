#include "startmenu.h"
#include "ui_startmenu.h"

StartMenu::StartMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartMenu)
{
    ui->setupUi(this);
    connect(ui->newGame_pushButton, &QPushButton::clicked, this, &StartMenu::on_newGame_pushButton_clicked);
}

StartMenu::~StartMenu()
{
    delete ui;
}

void StartMenu::on_newGame_pushButton_clicked()
{
    emit restartGameSignal();
}

