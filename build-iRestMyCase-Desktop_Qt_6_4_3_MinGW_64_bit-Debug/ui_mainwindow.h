/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <startmenu.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *screens;
    QWidget *tab_7;
    StartMenu *start_menu;
    QWidget *tab_5;
    QLabel *client;
    QLabel *user_desk;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QLabel *front_page;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QLabel *rules1;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QLabel *rules2;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QLabel *map;
    QPushButton *ruleBook_pushButton;
    QPushButton *closeRules_pushButton;
    QPushButton *question_pushButton;
    QPushButton *evaluation_pushButton;
    QPushButton *newClient_pushButton;
    QPushButton *menu_pushButton;
    QLabel *dialouge;
    QWidget *tab_6;
    QPushButton *addClient_pushButton;
    QTabWidget *selectClient;
    QWidget *tab_8;
    QLabel *label;
    QPushButton *selectClient_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1003, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        screens = new QTabWidget(centralwidget);
        screens->setObjectName("screens");
        screens->setGeometry(QRect(0, 0, 971, 591));
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        start_menu = new StartMenu(tab_7);
        start_menu->setObjectName("start_menu");
        start_menu->setGeometry(QRect(120, 0, 731, 551));
        screens->addTab(tab_7, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        client = new QLabel(tab_5);
        client->setObjectName("client");
        client->setGeometry(QRect(30, 20, 221, 651));
        user_desk = new QLabel(tab_5);
        user_desk->setObjectName("user_desk");
        user_desk->setEnabled(true);
        user_desk->setGeometry(QRect(-150, 300, 1301, 481));
        user_desk->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tempDesk2A8.png")));
        tabWidget = new QTabWidget(tab_5);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(320, 170, 543, 353));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane { \n"
" margin: 1px,1px,1px,1px;\n"
" border: 2px solid #020202;\n"
" border-radius: 7px;\n"
" padding: 1px;\n"
" background-color: #E6E6E3;\n"
"}"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName("horizontalLayout");
        front_page = new QLabel(tab);
        front_page->setObjectName("front_page");
        front_page->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tempRuleBookCover.png")));

        horizontalLayout->addWidget(front_page);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName("gridLayout");
        rules1 = new QLabel(tab_2);
        rules1->setObjectName("rules1");
        rules1->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tempRuleBookP2A8.png")));

        gridLayout->addWidget(rules1, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName("gridLayout_2");
        rules2 = new QLabel(tab_3);
        rules2->setObjectName("rules2");
        rules2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tempRuleBookP3A8.png")));

        gridLayout_2->addWidget(rules2, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setObjectName("gridLayout_3");
        map = new QLabel(tab_4);
        map->setObjectName("map");
        map->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tempRuleBookMap.png")));

        gridLayout_3->addWidget(map, 0, 0, 1, 1);

        tabWidget->addTab(tab_4, QString());
        ruleBook_pushButton = new QPushButton(tab_5);
        ruleBook_pushButton->setObjectName("ruleBook_pushButton");
        ruleBook_pushButton->setGeometry(QRect(800, 250, 121, 171));
        ruleBook_pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/resources/img/tempBooksA8.png);\n"
"background: none;\n"
"background-repeat: none;\n"
"\n"
""));
        closeRules_pushButton = new QPushButton(tab_5);
        closeRules_pushButton->setObjectName("closeRules_pushButton");
        closeRules_pushButton->setGeometry(QRect(350, 130, 91, 41));
        closeRules_pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;\n"
"background-repeat: none;"));
        question_pushButton = new QPushButton(tab_5);
        question_pushButton->setObjectName("question_pushButton");
        question_pushButton->setGeometry(QRect(20, 400, 121, 51));
        evaluation_pushButton = new QPushButton(tab_5);
        evaluation_pushButton->setObjectName("evaluation_pushButton");
        evaluation_pushButton->setGeometry(QRect(20, 470, 121, 61));
        newClient_pushButton = new QPushButton(tab_5);
        newClient_pushButton->setObjectName("newClient_pushButton");
        newClient_pushButton->setGeometry(QRect(810, 10, 131, 41));
        menu_pushButton = new QPushButton(tab_5);
        menu_pushButton->setObjectName("menu_pushButton");
        menu_pushButton->setGeometry(QRect(690, 10, 93, 29));
        dialouge = new QLabel(tab_5);
        dialouge->setObjectName("dialouge");
        dialouge->setGeometry(QRect(290, 40, 271, 61));
        dialouge->setAutoFillBackground(false);
        dialouge->setStyleSheet(QString::fromUtf8("background-color:beige;\n"
"border: 2px solid black"));
        dialouge->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        screens->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        addClient_pushButton = new QPushButton(tab_6);
        addClient_pushButton->setObjectName("addClient_pushButton");
        addClient_pushButton->setGeometry(QRect(10, 20, 131, 61));
        selectClient = new QTabWidget(tab_6);
        selectClient->setObjectName("selectClient");
        selectClient->setGeometry(QRect(300, 20, 631, 511));
        selectClient->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0.948864, x2:1, y2:0, stop:0 rgba(245, 232, 169, 255), stop:1 rgba(255, 246, 224, 255));\n"
"alternate-background-color: rgb(255, 245, 205);"));
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        label = new QLabel(tab_8);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 160, 261, 171));
        label->setMaximumSize(QSize(16777212, 16777215));
        label->setStyleSheet(QString::fromUtf8("font: 700 15pt \"Courier\";\n"
"color: rgb(148, 139, 118);"));
        label->setAlignment(Qt::AlignCenter);
        selectClient->addTab(tab_8, QString());
        selectClient_pushButton = new QPushButton(tab_6);
        selectClient_pushButton->setObjectName("selectClient_pushButton");
        selectClient_pushButton->setGeometry(QRect(10, 110, 121, 61));
        screens->addTab(tab_6, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1003, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        screens->setCurrentIndex(2);
        tabWidget->setCurrentIndex(1);
        selectClient->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        screens->setTabText(screens->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Page", nullptr));
        client->setText(QString());
        user_desk->setText(QString());
        front_page->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Conte.", nullptr));
        rules1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Rules", nullptr));
        rules2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Rules", nullptr));
        map->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Map", nullptr));
        ruleBook_pushButton->setText(QString());
        closeRules_pushButton->setText(QCoreApplication::translate("MainWindow", "Close book", nullptr));
        question_pushButton->setText(QCoreApplication::translate("MainWindow", "Question", nullptr));
        evaluation_pushButton->setText(QCoreApplication::translate("MainWindow", "Evaluation", nullptr));
        newClient_pushButton->setText(QCoreApplication::translate("MainWindow", "NEW CLIENT", nullptr));
        menu_pushButton->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
        dialouge->setText(QCoreApplication::translate("MainWindow", "#PLACEHOLDER", nullptr));
        screens->setTabText(screens->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        addClient_pushButton->setText(QCoreApplication::translate("MainWindow", "ADD CLIENT", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CLIENTELE", nullptr));
        selectClient->setTabText(selectClient->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        selectClient_pushButton->setText(QCoreApplication::translate("MainWindow", "Select Client", nullptr));
        screens->setTabText(screens->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
