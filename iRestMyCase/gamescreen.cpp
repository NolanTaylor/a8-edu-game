#include "gamescreen.h"
#include "ui_gamescreen.h"

GameScreen::GameScreen(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GameScreen)
{
    ui->setupUi(this);
}

GameScreen::~GameScreen()
{
    delete ui;
}
