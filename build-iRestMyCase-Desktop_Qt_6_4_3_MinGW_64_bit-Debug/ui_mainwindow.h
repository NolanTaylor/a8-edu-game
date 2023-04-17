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
    QTabWidget *tabWidget_2;
    QWidget *tab_7;
    StartMenu *widget;
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
    QPushButton *pushButton;
    QWidget *tab_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1003, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 0, 971, 591));
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        widget = new StartMenu(tab_7);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(120, 0, 731, 551));
        tabWidget_2->addTab(tab_7, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        client = new QLabel(tab_5);
        client->setObjectName("client");
        client->setGeometry(QRect(30, 20, 321, 651));
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
        pushButton = new QPushButton(tab_5);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(810, 10, 131, 41));
        tabWidget_2->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        tabWidget_2->addTab(tab_6, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1003, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QCoreApplication::translate("MainWindow", "Page", nullptr));
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
        pushButton->setText(QCoreApplication::translate("MainWindow", "NEW CLIENT", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
