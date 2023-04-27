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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
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
    QTabWidget *ruleBook;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QLabel *front_page;
    QLabel *contents;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QPushButton *title9Button;
    QLabel *title_4;
    QLabel *title_3;
    QPushButton *title7Button;
    QLabel *title_7;
    QPushButton *title6Button;
    QPushButton *title8Button;
    QPushButton *title12Button;
    QPushButton *title10Button;
    QPushButton *title4Button;
    QPushButton *title4Button_2;
    QLabel *title_5;
    QLabel *title_6;
    QLabel *title_2;
    QPushButton *title11Button;
    QLabel *title_1;
    QLabel *title_8;
    QLabel *title_9;
    QPushButton *title4Button_3;
    QPushButton *title4Button_4;
    QPushButton *title4Button_5;
    QPushButton *title4Button_6;
    QPushButton *title4Button_7;
    QPushButton *title4Button_8;
    QPushButton *title4Button_9;
    QLabel *title_10;
    QLabel *title_11;
    QLabel *title_12;
    QLabel *title_13;
    QLabel *title_14;
    QLabel *title_15;
    QLabel *title_16;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QStackedWidget *titles;
    QWidget *page_1;
    QLabel *label_2;
    QWidget *page_2_;
    QLabel *label_3;
    QWidget *page_3_;
    QLabel *label_4;
    QWidget *page_4_;
    QLabel *label_5;
    QWidget *page_5_;
    QLabel *label_6;
    QWidget *page_6_;
    QLabel *label_7;
    QWidget *page_7_;
    QLabel *label_8;
    QWidget *page_8_;
    QLabel *label_9;
    QWidget *page_9;
    QLabel *label_10;
    QWidget *page_10;
    QLabel *label_11;
    QWidget *page_11;
    QLabel *label_12;
    QWidget *page_12;
    QLabel *label_13;
    QWidget *page_13;
    QLabel *label_14;
    QWidget *page_14;
    QLabel *label_15;
    QWidget *page;
    QLabel *label_16;
    QWidget *page_2;
    QLabel *label_17;
    QWidget *tab_4;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit_2;
    QListWidget *listWidget;
    QPushButton *ruleBook_pushButton;
    QPushButton *closeRules_pushButton;
    QPushButton *newClient_pushButton;
    QPushButton *menu_pushButton;
    QPushButton *accept_pushButton;
    QPushButton *reject_pushButton;
    QPushButton *history_pushButton;
    QTextBrowser *dialougeHistory;
    QPushButton *next_pushButton;
    QTextBrowser *dialouge;
    QPushButton *page_turner;
    QPushButton *page_turner_2;
    QLabel *money;
    QLabel *reputation;
    QPushButton *promote;
    QLabel *level;
    QLabel *user_desk;
    QWidget *selectClient_screen;
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
    QLabel *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(995, 611);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(213, 197, 170);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        screens = new QStackedWidget(centralwidget);
        screens->setObjectName("screens");
        screens->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 243, 226);"));
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
        client->setGeometry(QRect(0, 50, 421, 411));
        client->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/general.png")));
        ruleBook = new QTabWidget(main_screen);
        ruleBook->setObjectName("ruleBook");
        ruleBook->setGeometry(QRect(310, 140, 551, 381));
        ruleBook->setStyleSheet(QString::fromUtf8("QTabWidget::pane {\n"
" margin: 1px,1px,1px,1px;\n"
" border: 2px solid #020202;\n"
" border-radius: 7px;\n"
" padding: 1px;\n"
"background-color: rgb(36, 64, 103);\n"
"}"));
        ruleBook->setTabPosition(QTabWidget::West);
        ruleBook->setTabShape(QTabWidget::Triangular);
        ruleBook->setTabsClosable(false);
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 64, 103);"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName("horizontalLayout");
        front_page = new QLabel(tab);
        front_page->setObjectName("front_page");
        front_page->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/utah_code.jpg")));

        horizontalLayout->addWidget(front_page);

        contents = new QLabel(tab);
        contents->setObjectName("contents");
        contents->setMinimumSize(QSize(300, 0));
        contents->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(contents);

        ruleBook->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tab_2->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 64, 103);"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName("gridLayout");
        title9Button = new QPushButton(tab_2);
        title9Button->setObjectName("title9Button");
        title9Button->setMaximumSize(QSize(200, 16777215));
        title9Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title9Button, 4, 1, 1, 1);

        title_4 = new QLabel(tab_2);
        title_4->setObjectName("title_4");
        title_4->setMaximumSize(QSize(50, 16777215));
        title_4->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_4, 3, 0, 1, 1);

        title_3 = new QLabel(tab_2);
        title_3->setObjectName("title_3");
        title_3->setMaximumSize(QSize(50, 16777215));
        title_3->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_3, 2, 0, 1, 1);

        title7Button = new QPushButton(tab_2);
        title7Button->setObjectName("title7Button");
        title7Button->setMaximumSize(QSize(200, 16777215));
        title7Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title7Button, 2, 1, 1, 1);

        title_7 = new QLabel(tab_2);
        title_7->setObjectName("title_7");
        title_7->setMaximumSize(QSize(50, 16777215));
        title_7->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_7, 6, 0, 1, 1);

        title6Button = new QPushButton(tab_2);
        title6Button->setObjectName("title6Button");
        title6Button->setMaximumSize(QSize(200, 16777215));
        title6Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title6Button, 1, 1, 1, 1);

        title8Button = new QPushButton(tab_2);
        title8Button->setObjectName("title8Button");
        title8Button->setMaximumSize(QSize(200, 16777215));
        title8Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title8Button, 3, 1, 1, 1);

        title12Button = new QPushButton(tab_2);
        title12Button->setObjectName("title12Button");
        title12Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title12Button, 7, 1, 1, 1);

        title10Button = new QPushButton(tab_2);
        title10Button->setObjectName("title10Button");
        title10Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title10Button, 5, 1, 1, 1);

        title4Button = new QPushButton(tab_2);
        title4Button->setObjectName("title4Button");
        title4Button->setMaximumSize(QSize(200, 16777215));
        title4Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title4Button, 0, 1, 1, 1);

        title4Button_2 = new QPushButton(tab_2);
        title4Button_2->setObjectName("title4Button_2");
        title4Button_2->setMaximumSize(QSize(200, 16777215));
        title4Button_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title4Button_2, 0, 3, 1, 1);

        title_5 = new QLabel(tab_2);
        title_5->setObjectName("title_5");
        title_5->setMaximumSize(QSize(50, 16777215));
        title_5->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_5, 4, 0, 1, 1);

        title_6 = new QLabel(tab_2);
        title_6->setObjectName("title_6");
        title_6->setMaximumSize(QSize(50, 16777215));
        title_6->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_6, 5, 0, 1, 1);

        title_2 = new QLabel(tab_2);
        title_2->setObjectName("title_2");
        title_2->setMaximumSize(QSize(50, 16777215));
        title_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_2, 1, 0, 1, 1);

        title11Button = new QPushButton(tab_2);
        title11Button->setObjectName("title11Button");
        title11Button->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title11Button, 6, 1, 1, 1);

        title_1 = new QLabel(tab_2);
        title_1->setObjectName("title_1");
        title_1->setMaximumSize(QSize(50, 16777215));
        title_1->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_1, 0, 0, 1, 1);

        title_8 = new QLabel(tab_2);
        title_8->setObjectName("title_8");
        title_8->setMaximumSize(QSize(50, 16777215));
        title_8->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_8, 7, 0, 1, 1);

        title_9 = new QLabel(tab_2);
        title_9->setObjectName("title_9");
        title_9->setMaximumSize(QSize(50, 16777215));
        title_9->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_9, 0, 2, 1, 1);

        title4Button_3 = new QPushButton(tab_2);
        title4Button_3->setObjectName("title4Button_3");
        title4Button_3->setMaximumSize(QSize(200, 16777215));
        title4Button_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title4Button_3, 1, 3, 1, 1);

        title4Button_4 = new QPushButton(tab_2);
        title4Button_4->setObjectName("title4Button_4");
        title4Button_4->setMaximumSize(QSize(200, 16777215));
        title4Button_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title4Button_4, 2, 3, 1, 1);

        title4Button_5 = new QPushButton(tab_2);
        title4Button_5->setObjectName("title4Button_5");
        title4Button_5->setMaximumSize(QSize(200, 16777215));
        title4Button_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title4Button_5, 3, 3, 1, 1);

        title4Button_6 = new QPushButton(tab_2);
        title4Button_6->setObjectName("title4Button_6");
        title4Button_6->setMaximumSize(QSize(200, 16777215));
        title4Button_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title4Button_6, 4, 3, 1, 1);

        title4Button_7 = new QPushButton(tab_2);
        title4Button_7->setObjectName("title4Button_7");
        title4Button_7->setMaximumSize(QSize(200, 16777215));
        title4Button_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title4Button_7, 5, 3, 1, 1);

        title4Button_8 = new QPushButton(tab_2);
        title4Button_8->setObjectName("title4Button_8");
        title4Button_8->setMaximumSize(QSize(200, 16777215));
        title4Button_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title4Button_8, 6, 3, 1, 1);

        title4Button_9 = new QPushButton(tab_2);
        title4Button_9->setObjectName("title4Button_9");
        title4Button_9->setMaximumSize(QSize(200, 16777215));
        title4Button_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(title4Button_9, 7, 3, 1, 1);

        title_10 = new QLabel(tab_2);
        title_10->setObjectName("title_10");
        title_10->setMaximumSize(QSize(50, 16777215));
        title_10->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_10, 1, 2, 1, 1);

        title_11 = new QLabel(tab_2);
        title_11->setObjectName("title_11");
        title_11->setMaximumSize(QSize(50, 16777215));
        title_11->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_11, 2, 2, 1, 1);

        title_12 = new QLabel(tab_2);
        title_12->setObjectName("title_12");
        title_12->setMaximumSize(QSize(50, 16777215));
        title_12->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_12, 3, 2, 1, 1);

        title_13 = new QLabel(tab_2);
        title_13->setObjectName("title_13");
        title_13->setMaximumSize(QSize(50, 16777215));
        title_13->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_13, 4, 2, 1, 1);

        title_14 = new QLabel(tab_2);
        title_14->setObjectName("title_14");
        title_14->setMaximumSize(QSize(50, 16777215));
        title_14->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_14, 5, 2, 1, 1);

        title_15 = new QLabel(tab_2);
        title_15->setObjectName("title_15");
        title_15->setMaximumSize(QSize(50, 16777215));
        title_15->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_15, 6, 2, 1, 1);

        title_16 = new QLabel(tab_2);
        title_16->setObjectName("title_16");
        title_16->setMaximumSize(QSize(50, 16777215));
        title_16->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(201, 227, 255);\n"
"font: 700 9pt \"Courier\";"));

        gridLayout->addWidget(title_16, 7, 2, 1, 1);

        ruleBook->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tab_3->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 64, 103);"));
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setObjectName("gridLayout_2");
        titles = new QStackedWidget(tab_3);
        titles->setObjectName("titles");
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        label_2 = new QLabel(page_1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 63, 20));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        titles->addWidget(page_1);
        page_2_ = new QWidget();
        page_2_->setObjectName("page_2_");
        label_3 = new QLabel(page_2_);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 20, 63, 20));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        titles->addWidget(page_2_);
        page_3_ = new QWidget();
        page_3_->setObjectName("page_3_");
        label_4 = new QLabel(page_3_);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 40, 63, 20));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        titles->addWidget(page_3_);
        page_4_ = new QWidget();
        page_4_->setObjectName("page_4_");
        label_5 = new QLabel(page_4_);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 10, 63, 20));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        titles->addWidget(page_4_);
        page_5_ = new QWidget();
        page_5_->setObjectName("page_5_");
        label_6 = new QLabel(page_5_);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 40, 63, 20));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        titles->addWidget(page_5_);
        page_6_ = new QWidget();
        page_6_->setObjectName("page_6_");
        label_7 = new QLabel(page_6_);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(120, 150, 63, 20));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        titles->addWidget(page_6_);
        page_7_ = new QWidget();
        page_7_->setObjectName("page_7_");
        label_8 = new QLabel(page_7_);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(100, 100, 63, 20));
        titles->addWidget(page_7_);
        page_8_ = new QWidget();
        page_8_->setObjectName("page_8_");
        label_9 = new QLabel(page_8_);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(130, 120, 63, 20));
        titles->addWidget(page_8_);
        page_9 = new QWidget();
        page_9->setObjectName("page_9");
        label_10 = new QLabel(page_9);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(100, 110, 63, 20));
        titles->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName("page_10");
        label_11 = new QLabel(page_10);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(100, 120, 63, 20));
        titles->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName("page_11");
        label_12 = new QLabel(page_11);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(200, 180, 63, 20));
        titles->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName("page_12");
        label_13 = new QLabel(page_12);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(130, 80, 63, 20));
        titles->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName("page_13");
        label_14 = new QLabel(page_13);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(160, 70, 63, 20));
        titles->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName("page_14");
        label_15 = new QLabel(page_14);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(120, 200, 63, 20));
        titles->addWidget(page_14);
        page = new QWidget();
        page->setObjectName("page");
        label_16 = new QLabel(page);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(240, 130, 63, 20));
        titles->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_17 = new QLabel(page_2);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(130, 160, 63, 20));
        titles->addWidget(page_2);

        gridLayout_2->addWidget(titles, 0, 0, 1, 1);

        ruleBook->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tab_4->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 64, 103);"));
        gridLayout_3 = new QGridLayout(tab_4);
        gridLayout_3->setObjectName("gridLayout_3");
        textEdit_2 = new QTextEdit(tab_4);
        textEdit_2->setObjectName("textEdit_2");

        gridLayout_3->addWidget(textEdit_2, 0, 1, 1, 1);

        listWidget = new QListWidget(tab_4);
        QBrush brush(QColor(244, 231, 218, 255));
        brush.setStyle(Qt::NoBrush);
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(12);
        font.setBold(true);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setForeground(brush);
        __qlistwidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        listWidget->setObjectName("listWidget");
        listWidget->setStyleSheet(QString::fromUtf8("color: rgb(255, 252, 237);"));

        gridLayout_3->addWidget(listWidget, 0, 0, 1, 1);

        ruleBook->addTab(tab_4, QString());
        ruleBook_pushButton = new QPushButton(main_screen);
        ruleBook_pushButton->setObjectName("ruleBook_pushButton");
        ruleBook_pushButton->setGeometry(QRect(800, 210, 161, 211));
        ruleBook_pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background-image: url(:/resources/img/rule_book.png);\n"
"background-repeat: none;\n"
"border-image: url(:/resources/img/rule_book.png);\n"
"\n"
""));
        closeRules_pushButton = new QPushButton(main_screen);
        closeRules_pushButton->setObjectName("closeRules_pushButton");
        closeRules_pushButton->setGeometry(QRect(760, 100, 91, 41));
        closeRules_pushButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"background: none;\n"
"background-repeat: none;"));
        newClient_pushButton = new QPushButton(main_screen);
        newClient_pushButton->setObjectName("newClient_pushButton");
        newClient_pushButton->setGeometry(QRect(810, 10, 131, 41));
        menu_pushButton = new QPushButton(main_screen);
        menu_pushButton->setObjectName("menu_pushButton");
        menu_pushButton->setGeometry(QRect(690, 10, 93, 29));
        accept_pushButton = new QPushButton(main_screen);
        accept_pushButton->setObjectName("accept_pushButton");
        accept_pushButton->setGeometry(QRect(20, 460, 121, 51));
        reject_pushButton = new QPushButton(main_screen);
        reject_pushButton->setObjectName("reject_pushButton");
        reject_pushButton->setGeometry(QRect(150, 460, 121, 51));
        history_pushButton = new QPushButton(main_screen);
        history_pushButton->setObjectName("history_pushButton");
        history_pushButton->setGeometry(QRect(580, 80, 21, 21));
        history_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 239, 243);\n"
"border: 2px solid rgb(149, 174, 207);\n"
"font: 12pt \"Courier\";\n"
""));
        dialougeHistory = new QTextBrowser(main_screen);
        dialougeHistory->setObjectName("dialougeHistory");
        dialougeHistory->setGeometry(QRect(290, 100, 291, 291));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setPointSize(9);
        dialougeHistory->setFont(font1);
        dialougeHistory->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 239, 243);\n"
"background-color: rgb(226, 190, 146);\n"
"\n"
"border: 2px solid rgb(149, 174, 207)"));
        next_pushButton = new QPushButton(main_screen);
        next_pushButton->setObjectName("next_pushButton");
        next_pushButton->setGeometry(QRect(580, 30, 41, 20));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI")});
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setItalic(false);
        next_pushButton->setFont(font2);
        next_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 239, 243);\n"
"border: 2px solid rgb(149, 174, 207);\n"
"font: 9pt \"Segoe UI\";\n"
""));
        dialouge = new QTextBrowser(main_screen);
        dialouge->setObjectName("dialouge");
        dialouge->setGeometry(QRect(290, 30, 291, 71));
        dialouge->setFont(font1);
        dialouge->setStyleSheet(QString::fromUtf8("background-color: rgb(231, 239, 243);\n"
"background-color: rgb(226, 190, 146);\n"
"border: 2px solid rgb(149, 174, 207)"));
        page_turner = new QPushButton(main_screen);
        page_turner->setObjectName("page_turner");
        page_turner->setGeometry(QRect(800, 460, 61, 61));
        page_turner->setStyleSheet(QString::fromUtf8("border-image: url(:/resources/img/final_page_turn.png);\n"
"background-color: transparent;\n"
""));
        page_turner_2 = new QPushButton(main_screen);
        page_turner_2->setObjectName("page_turner_2");
        page_turner_2->setGeometry(QRect(340, 460, 61, 61));
        page_turner_2->setStyleSheet(QString::fromUtf8("border-image: url(:/resources/img/final_page_turn.png);\n"
"background-color: transparent;\n"
""));
        money = new QLabel(main_screen);
        money->setObjectName("money");
        money->setGeometry(QRect(10, 10, 81, 20));
        reputation = new QLabel(main_screen);
        reputation->setObjectName("reputation");
        reputation->setGeometry(QRect(10, 30, 81, 20));
        promote = new QPushButton(main_screen);
        promote->setObjectName("promote");
        promote->setGeometry(QRect(0, 50, 75, 24));
        level = new QLabel(main_screen);
        level->setObjectName("level");
        level->setGeometry(QRect(110, 10, 181, 31));
        user_desk = new QLabel(main_screen);
        user_desk->setObjectName("user_desk");
        user_desk->setEnabled(true);
        user_desk->setGeometry(QRect(-10, 320, 991, 441));
        user_desk->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/desk.png")));
        screens->addWidget(main_screen);
        user_desk->raise();
        client->raise();
        ruleBook_pushButton->raise();
        closeRules_pushButton->raise();
        newClient_pushButton->raise();
        menu_pushButton->raise();
        accept_pushButton->raise();
        reject_pushButton->raise();
        history_pushButton->raise();
        dialougeHistory->raise();
        next_pushButton->raise();
        dialouge->raise();
        ruleBook->raise();
        page_turner->raise();
        page_turner_2->raise();
        money->raise();
        reputation->raise();
        level->raise();
        promote->raise();
        selectClient_screen = new QWidget();
        selectClient_screen->setObjectName("selectClient_screen");
        selectClient = new QTabWidget(selectClient_screen);
        selectClient->setObjectName("selectClient");
        selectClient->setGeometry(QRect(250, 0, 661, 501));
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
        selectClient_pushButton->setGeometry(QRect(790, 510, 121, 61));
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

        textBrowser = new QLabel(end_screen);
        textBrowser->setObjectName("textBrowser");

        gridLayout_4->addWidget(textBrowser, 0, 0, 1, 2);

        screens->addWidget(end_screen);

        verticalLayout_2->addWidget(screens);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 995, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        screens->setCurrentIndex(1);
        ruleBook->setCurrentIndex(2);
        titles->setCurrentIndex(15);
        selectClient->setCurrentIndex(0);
        instruction_tab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        client->setText(QString());
        front_page->setText(QString());
        contents->setText(QString());
        ruleBook->setTabText(ruleBook->indexOf(tab), QCoreApplication::translate("MainWindow", "Conte.", nullptr));
        title9Button->setText(QCoreApplication::translate("MainWindow", "Cultural and Community Engagement", nullptr));
        title_4->setText(QCoreApplication::translate("MainWindow", "TITLE 8", nullptr));
        title_3->setText(QCoreApplication::translate("MainWindow", "TITLE 7", nullptr));
        title7Button->setText(QCoreApplication::translate("MainWindow", "Financial Institutions Act", nullptr));
        title_7->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title6Button->setText(QCoreApplication::translate("MainWindow", " Assignment for Benefit of Creditors", nullptr));
        title8Button->setText(QCoreApplication::translate("MainWindow", "Cemeteries", nullptr));
        title12Button->setText(QCoreApplication::translate("MainWindow", "what the dawg doin", nullptr));
        title10Button->setText(QCoreApplication::translate("MainWindow", "Your mom", nullptr));
        title4Button->setText(QCoreApplication::translate("MainWindow", "Utah Agricultural Code", nullptr));
        title4Button_2->setText(QCoreApplication::translate("MainWindow", "Utah Agricultural Code", nullptr));
        title_5->setText(QCoreApplication::translate("MainWindow", "TITLE 9", nullptr));
        title_6->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title_2->setText(QCoreApplication::translate("MainWindow", "TITLE 6", nullptr));
        title11Button->setText(QCoreApplication::translate("MainWindow", "You dad", nullptr));
        title_1->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title_8->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title_9->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title4Button_3->setText(QCoreApplication::translate("MainWindow", "Utah Agricultural Code", nullptr));
        title4Button_4->setText(QCoreApplication::translate("MainWindow", "Utah Agricultural Code", nullptr));
        title4Button_5->setText(QCoreApplication::translate("MainWindow", "Utah Agricultural Code", nullptr));
        title4Button_6->setText(QCoreApplication::translate("MainWindow", "Utah Agricultural Code", nullptr));
        title4Button_7->setText(QCoreApplication::translate("MainWindow", "Utah Agricultural Code", nullptr));
        title4Button_8->setText(QCoreApplication::translate("MainWindow", "Utah Agricultural Code", nullptr));
        title4Button_9->setText(QCoreApplication::translate("MainWindow", "Utah Agricultural Code", nullptr));
        title_10->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title_11->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title_12->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title_13->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title_14->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title_15->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        title_16->setText(QCoreApplication::translate("MainWindow", "TITLE 4", nullptr));
        ruleBook->setTabText(ruleBook->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Rules", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Title 4", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Title 6", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Title 7", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Title 8", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Title 9", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "title 10", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "title 11", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "page  8", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "page 9", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "page 10", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "page 11", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "page 12", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "page 13", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "page 14", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "page 15", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "page 16", nullptr));
        ruleBook->setTabText(ruleBook->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Rules", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">&quot;</p>\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\">\n"
"<li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent"
                        ":0px;\">text 1</li>\n"
"<li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">text 2</li>\n"
"<li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">text 3</li></ul>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br />&quot;</p></body></html>", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Hello WORLD!", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        ruleBook->setTabText(ruleBook->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Map", nullptr));
        ruleBook_pushButton->setText(QString());
        closeRules_pushButton->setText(QCoreApplication::translate("MainWindow", "Close book", nullptr));
        newClient_pushButton->setText(QCoreApplication::translate("MainWindow", "NEW CLIENT", nullptr));
        menu_pushButton->setText(QCoreApplication::translate("MainWindow", "Main Menu", nullptr));
        accept_pushButton->setText(QCoreApplication::translate("MainWindow", "Accept", nullptr));
        reject_pushButton->setText(QCoreApplication::translate("MainWindow", "Reject", nullptr));
        history_pushButton->setText(QCoreApplication::translate("MainWindow", "V", nullptr));
        dialougeHistory->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier';\">#PLACEHOLDER</span></p></body></html>", nullptr));
        next_pushButton->setText(QCoreApplication::translate("MainWindow", "next", nullptr));
        dialouge->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Courier';\">#PLACEHOLDER</span></p></body></html>", nullptr));
        page_turner->setText(QString());
        page_turner_2->setText(QString());
        money->setText(QCoreApplication::translate("MainWindow", "Money: 0", nullptr));
        reputation->setText(QCoreApplication::translate("MainWindow", "Reputation: 0", nullptr));
        promote->setText(QCoreApplication::translate("MainWindow", "promote", nullptr));
        level->setText(QCoreApplication::translate("MainWindow", "level", nullptr));
        user_desk->setText(QString());
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
        textBrowser->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
