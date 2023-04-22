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
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <startmenu.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *screens;
    QWidget *menu_screen;
    StartMenu *start_menu;
    QWidget *main_screen;
    QLabel *client;
    QLabel *user_desk;
    QTabWidget *ruleBook;
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
    QPushButton *newClient_pushButton;
    QPushButton *menu_pushButton;
    QLabel *dialouge;
    QPushButton *accept_pushButton;
    QPushButton *reject_pushButton;
    QPushButton *next_pushButton;
    QTextBrowser *dialougeHistory;
    QWidget *selectClient_screen;
    QPushButton *addClient_pushButton;
    QTabWidget *selectClient;
    QWidget *tab_8;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *selectClient_pushButton;
    QWidget *instruction_screen;
    QGridLayout *gridLayout_5;
    QStackedWidget *instruction_tab;
    QWidget *instruction_page1;
    QTextBrowser *story_text;
    QWidget *instruction_page2;
    QTextBrowser *instruction_text;
    QPushButton *instr_nextPage_pushButton;
    QPushButton *instr_menu_pushButton;
    QWidget *end_screen;
    QGridLayout *gridLayout_4;
    QPushButton *continue_pushButton;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1003, 642);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        screens = new QStackedWidget(centralwidget);
        screens->setObjectName("screens");
        screens->setStyleSheet(QString::fromUtf8(""));
        menu_screen = new QWidget();
        menu_screen->setObjectName("menu_screen");
        start_menu = new StartMenu(menu_screen);
        start_menu->setObjectName("start_menu");
        start_menu->setGeometry(QRect(120, 0, 731, 551));
        screens->addWidget(menu_screen);
        main_screen = new QWidget();
        main_screen->setObjectName("main_screen");
        client = new QLabel(main_screen);
        client->setObjectName("client");
        client->setGeometry(QRect(30, 20, 221, 651));
        user_desk = new QLabel(main_screen);
        user_desk->setObjectName("user_desk");
        user_desk->setEnabled(true);
        user_desk->setGeometry(QRect(-150, 300, 1301, 481));
        user_desk->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tempDesk2A8.png")));
        ruleBook = new QTabWidget(main_screen);
        ruleBook->setObjectName("ruleBook");
        ruleBook->setGeometry(QRect(320, 170, 543, 353));
        ruleBook->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
" margin: 1px,1px,1px,1px;\n"
" border: 2px solid #020202;\n"
" border-radius: 7px;\n"
" padding: 1px;\n"
" background-color: #E6E6E3;\n"
"}"));
        ruleBook->setTabPosition(QTabWidget::West);
        ruleBook->setTabShape(QTabWidget::Triangular);
        ruleBook->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName("horizontalLayout");
        front_page = new QLabel(tab);
        front_page->setObjectName("front_page");
        front_page->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tempRuleBookCover.png")));

        horizontalLayout->addWidget(front_page);

        ruleBook->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName("gridLayout");
        rules1 = new QLabel(tab_2);
        rules1->setObjectName("rules1");
        rules1->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tempRuleBookP2A8.png")));

        gridLayout->addWidget(rules1, 0, 0, 1, 1);

        ruleBook->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName("gridLayout_2");
        rules2 = new QLabel(tab_3);
        rules2->setObjectName("rules2");
        rules2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tempRuleBookP3A8.png")));

        gridLayout_2->addWidget(rules2, 0, 0, 1, 1);

        ruleBook->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setObjectName("gridLayout_3");
        map = new QLabel(tab_4);
        map->setObjectName("map");
        map->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/tempRuleBookMap.png")));

        gridLayout_3->addWidget(map, 0, 0, 1, 1);

        ruleBook->addTab(tab_4, QString());
        ruleBook_pushButton = new QPushButton(main_screen);
        ruleBook_pushButton->setObjectName("ruleBook_pushButton");
        ruleBook_pushButton->setGeometry(QRect(800, 250, 121, 171));
        ruleBook_pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"border-image: url(:/resources/img/tempBooksA8.png);\n"
"background: none;\n"
"background-repeat: none;\n"
"\n"
""));
        closeRules_pushButton = new QPushButton(main_screen);
        closeRules_pushButton->setObjectName("closeRules_pushButton");
        closeRules_pushButton->setGeometry(QRect(350, 130, 91, 41));
        closeRules_pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;\n"
"background-repeat: none;"));
        question_pushButton = new QPushButton(main_screen);
        question_pushButton->setObjectName("question_pushButton");
        question_pushButton->setGeometry(QRect(20, 400, 121, 51));
        newClient_pushButton = new QPushButton(main_screen);
        newClient_pushButton->setObjectName("newClient_pushButton");
        newClient_pushButton->setGeometry(QRect(810, 10, 131, 41));
        menu_pushButton = new QPushButton(main_screen);
        menu_pushButton->setObjectName("menu_pushButton");
        menu_pushButton->setGeometry(QRect(690, 10, 93, 29));
        dialouge = new QLabel(main_screen);
        dialouge->setObjectName("dialouge");
        dialouge->setGeometry(QRect(290, 40, 291, 61));
        dialouge->setAutoFillBackground(false);
        dialouge->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 239, 243);\n"
"border: 2px solid rgb(149, 174, 207);\n"
"font: 12pt \"Courier\";\n"
""));
        dialouge->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        accept_pushButton = new QPushButton(main_screen);
        accept_pushButton->setObjectName("accept_pushButton");
        accept_pushButton->setGeometry(QRect(20, 460, 121, 51));
        reject_pushButton = new QPushButton(main_screen);
        reject_pushButton->setObjectName("reject_pushButton");
        reject_pushButton->setGeometry(QRect(150, 460, 121, 51));
        next_pushButton = new QPushButton(main_screen);
        next_pushButton->setObjectName("next_pushButton");
        next_pushButton->setGeometry(QRect(550, 70, 21, 21));
        next_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 239, 243);\n"
"border: 2px solid rgb(149, 174, 207);\n"
"font: 12pt \"Courier\";\n"
""));
        dialougeHistory = new QTextBrowser(main_screen);
        dialougeHistory->setObjectName("dialougeHistory");
        dialougeHistory->setGeometry(QRect(290, 100, 291, 291));
        dialougeHistory->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 239, 243);\n"
"border: 2px solid rgb(149, 174, 207)"));
        screens->addWidget(main_screen);
        selectClient_screen = new QWidget();
        selectClient_screen->setObjectName("selectClient_screen");
        addClient_pushButton = new QPushButton(selectClient_screen);
        addClient_pushButton->setObjectName("addClient_pushButton");
        addClient_pushButton->setGeometry(QRect(10, 20, 131, 61));
        selectClient = new QTabWidget(selectClient_screen);
        selectClient->setObjectName("selectClient");
        selectClient->setGeometry(QRect(250, 20, 661, 501));
        selectClient->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:0.948864, x2:1, y2:0, stop:0 rgba(245, 232, 169, 255), stop:1 rgba(255, 246, 224, 255));\n"
"alternate-background-color: rgb(255, 245, 205);"));
        tab_8 = new QWidget();
        tab_8->setObjectName("tab_8");
        verticalLayout = new QVBoxLayout(tab_8);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(tab_8);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777212, 16777215));
        label->setStyleSheet(QString::fromUtf8("font: 700 25pt \"Courier\";\n"
"color: rgb(148, 139, 118);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        selectClient->addTab(tab_8, QString());
        selectClient_pushButton = new QPushButton(selectClient_screen);
        selectClient_pushButton->setObjectName("selectClient_pushButton");
        selectClient_pushButton->setGeometry(QRect(10, 110, 121, 61));
        screens->addWidget(selectClient_screen);
        instruction_screen = new QWidget();
        instruction_screen->setObjectName("instruction_screen");
        gridLayout_5 = new QGridLayout(instruction_screen);
        gridLayout_5->setObjectName("gridLayout_5");
        instruction_tab = new QStackedWidget(instruction_screen);
        instruction_tab->setObjectName("instruction_tab");
        instruction_page1 = new QWidget();
        instruction_page1->setObjectName("instruction_page1");
        story_text = new QTextBrowser(instruction_page1);
        story_text->setObjectName("story_text");
        story_text->setGeometry(QRect(11, 11, 921, 571));
        story_text->setStyleSheet(QString::fromUtf8("font: 700 15pt \"Courier\";"));
        instruction_tab->addWidget(instruction_page1);
        instruction_page2 = new QWidget();
        instruction_page2->setObjectName("instruction_page2");
        instruction_text = new QTextBrowser(instruction_page2);
        instruction_text->setObjectName("instruction_text");
        instruction_text->setGeometry(QRect(10, 10, 391, 481));
        instruction_tab->addWidget(instruction_page2);

        gridLayout_5->addWidget(instruction_tab, 0, 0, 1, 1);

        instr_nextPage_pushButton = new QPushButton(instruction_screen);
        instr_nextPage_pushButton->setObjectName("instr_nextPage_pushButton");

        gridLayout_5->addWidget(instr_nextPage_pushButton, 1, 0, 1, 1);

        instr_menu_pushButton = new QPushButton(instruction_screen);
        instr_menu_pushButton->setObjectName("instr_menu_pushButton");

        gridLayout_5->addWidget(instr_menu_pushButton, 2, 0, 1, 1);

        screens->addWidget(instruction_screen);
        end_screen = new QWidget();
        end_screen->setObjectName("end_screen");
        end_screen->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(133, 156, 120, 255), stop:1 rgba(216, 234, 236, 255));"));
        gridLayout_4 = new QGridLayout(end_screen);
        gridLayout_4->setObjectName("gridLayout_4");
        continue_pushButton = new QPushButton(end_screen);
        continue_pushButton->setObjectName("continue_pushButton");
        continue_pushButton->setMinimumSize(QSize(0, 100));
        continue_pushButton->setStyleSheet(QString::fromUtf8("font: 700 15pt \"Courier\";\n"
"color: rgb(12, 65, 16);"));

        gridLayout_4->addWidget(continue_pushButton, 1, 1, 1, 1);

        textBrowser = new QTextBrowser(end_screen);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setMaximumSize(QSize(16777215, 400));
        textBrowser->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(textBrowser, 0, 0, 1, 2);

        screens->addWidget(end_screen);

        verticalLayout_2->addWidget(screens);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1003, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        screens->setCurrentIndex(1);
        ruleBook->setCurrentIndex(1);
        selectClient->setCurrentIndex(0);
        instruction_tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        client->setText(QString());
        user_desk->setText(QString());
        front_page->setText(QString());
        ruleBook->setTabText(ruleBook->indexOf(tab), QCoreApplication::translate("MainWindow", "Conte.", nullptr));
        rules1->setText(QString());
        ruleBook->setTabText(ruleBook->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Rules", nullptr));
        rules2->setText(QString());
        ruleBook->setTabText(ruleBook->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Rules", nullptr));
        map->setText(QString());
        ruleBook->setTabText(ruleBook->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Map", nullptr));
        ruleBook_pushButton->setText(QString());
        closeRules_pushButton->setText(QCoreApplication::translate("MainWindow", "Close book", nullptr));
        question_pushButton->setText(QCoreApplication::translate("MainWindow", "Question", nullptr));
        newClient_pushButton->setText(QCoreApplication::translate("MainWindow", "NEW CLIENT", nullptr));
        menu_pushButton->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
        dialouge->setText(QCoreApplication::translate("MainWindow", "#PLACEHOLDER", nullptr));
        accept_pushButton->setText(QCoreApplication::translate("MainWindow", "Accept", nullptr));
        reject_pushButton->setText(QCoreApplication::translate("MainWindow", "Reject", nullptr));
        next_pushButton->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        dialougeHistory->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier';\">#PLACEHOLDER</span></p></body></html>", nullptr));
        addClient_pushButton->setText(QCoreApplication::translate("MainWindow", "ADD CLIENT", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "CLIENTELE", nullptr));
        selectClient->setTabText(selectClient->indexOf(tab_8), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        selectClient_pushButton->setText(QCoreApplication::translate("MainWindow", "Select Client", nullptr));
        story_text->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:15pt; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">STORY:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">You're an up-and-coming lawyer who just joined their first law firm. Your gearing to prove your worth in some spectactular trail cases for sure, but you can't win everying case with fancy jargo"
                        "n and dramatic performances. There needs to be a vaild case to be made from your future clients. </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:400;\">Before you take someones cases you need to hear them out. Is their story as flimsy and nonsensitcisal as it sounds, or is their some obscure law that actual gives them some merit? You'll soon find out, as its 9:00 am already and your day is just about to begin...</span></p></body></html>", nullptr));
        instruction_text->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">HOW TO PLAY:</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">ACCEPT OR DENY PEOPLE</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\""
                        ">FIND CLUES</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt;\">HAVE FUN OR I WILL CRY</span></p></body></html>", nullptr));
        instr_nextPage_pushButton->setText(QCoreApplication::translate("MainWindow", "NEXT...", nullptr));
        instr_menu_pushButton->setText(QCoreApplication::translate("MainWindow", "MENU", nullptr));
        continue_pushButton->setText(QCoreApplication::translate("MainWindow", "CONTINUE...", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-fam"
                        "ily:'Courier'; font-size:25pt;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier'; font-size:25pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:24pt;\">UNFORTUNATELY YOU LOST THE CASE</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier'; font-size:10pt;\">Child soliders are illegal under the Geneva Convention...</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Courier'; font-size:24pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
