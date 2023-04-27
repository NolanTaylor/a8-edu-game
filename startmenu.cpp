#include "startmenu.h"
#include "ui_startmenu.h"

StartMenu::StartMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StartMenu)
{
    ui->setupUi(this);
    connect(ui->newGame_pushButton, &QPushButton::clicked, this, &StartMenu::on_newGame_pushButton_clicked);
    connect(ui->newGame_pushButton, &QPushButton::clicked, this, &StartMenu::playClickSound);
    connect(ui->instruction_pushButton, &QPushButton::clicked, this, &StartMenu::playClickSound);
    connect(ui->load_pushButton, &QPushButton::clicked, this, &StartMenu::playClickSound);
}

void StartMenu::playClickSound()
{
    QSoundEffect sound;
    QUrl click("qrc:/resources/img/clicknoise.wav");
    sound.setSource(click);
    sound.setLoopCount(1);
    sound.setVolume(1.0f);
    sound.play();
    QEventLoop loop;
    loop.exec();
    loop.quit();
}

StartMenu::~StartMenu()
{
    delete ui;
}

void StartMenu::on_newGame_pushButton_clicked()
{
    emit restartGameSignal();
}


void StartMenu::on_instruction_pushButton_clicked()
{
    emit instructionSignal();
}

