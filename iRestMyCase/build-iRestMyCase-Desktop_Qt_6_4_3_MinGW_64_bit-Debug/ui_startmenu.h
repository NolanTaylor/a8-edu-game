/********************************************************************************
** Form generated from reading UI file 'startmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTMENU_H
#define UI_STARTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartMenu
{
public:
    QGridLayout *gridLayout;
    QPushButton *newGame_pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *instruction_pushButton;
    QPushButton *load_pushButton;
    QLabel *title;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *StartMenu)
    {
        if (StartMenu->objectName().isEmpty())
            StartMenu->setObjectName("StartMenu");
        StartMenu->resize(400, 560);
        gridLayout = new QGridLayout(StartMenu);
        gridLayout->setObjectName("gridLayout");
        newGame_pushButton = new QPushButton(StartMenu);
        newGame_pushButton->setObjectName("newGame_pushButton");

        gridLayout->addWidget(newGame_pushButton, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        instruction_pushButton = new QPushButton(StartMenu);
        instruction_pushButton->setObjectName("instruction_pushButton");

        gridLayout->addWidget(instruction_pushButton, 3, 1, 1, 1);

        load_pushButton = new QPushButton(StartMenu);
        load_pushButton->setObjectName("load_pushButton");

        gridLayout->addWidget(load_pushButton, 1, 1, 1, 1);

        title = new QLabel(StartMenu);
        title->setObjectName("title");
        title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(title, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        retranslateUi(StartMenu);

        QMetaObject::connectSlotsByName(StartMenu);
    } // setupUi

    void retranslateUi(QWidget *StartMenu)
    {
        StartMenu->setWindowTitle(QCoreApplication::translate("StartMenu", "Form", nullptr));
        newGame_pushButton->setText(QCoreApplication::translate("StartMenu", "NEW GAME", nullptr));
        instruction_pushButton->setText(QCoreApplication::translate("StartMenu", "INSTRUCTIONS", nullptr));
        load_pushButton->setText(QCoreApplication::translate("StartMenu", "LOAD", nullptr));
        title->setText(QCoreApplication::translate("StartMenu", "      I REST MY CASE        ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartMenu: public Ui_StartMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTMENU_H
