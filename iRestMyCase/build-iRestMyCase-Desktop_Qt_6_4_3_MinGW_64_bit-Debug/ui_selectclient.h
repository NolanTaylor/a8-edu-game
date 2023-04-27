/********************************************************************************
** Form generated from reading UI file 'selectclient.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTCLIENT_H
#define UI_SELECTCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectClient
{
public:
    QGridLayout *gridLayout;
    QTabWidget *manila;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QWidget *client1_tab;
    QLabel *client1;
    QTextBrowser *textBrowser;
    QPushButton *pickClient_pushButton;

    void setupUi(QWidget *SelectClient)
    {
        if (SelectClient->objectName().isEmpty())
            SelectClient->setObjectName("SelectClient");
        SelectClient->resize(638, 426);
        gridLayout = new QGridLayout(SelectClient);
        gridLayout->setObjectName("gridLayout");
        manila = new QTabWidget(SelectClient);
        manila->setObjectName("manila");
        manila->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 199, 163);\n"
"selection-background-color: rgb(255, 253, 205);"));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        manila->addTab(tab, QString());
        client1_tab = new QWidget();
        client1_tab->setObjectName("client1_tab");
        client1 = new QLabel(client1_tab);
        client1->setObjectName("client1");
        client1->setGeometry(QRect(10, 10, 161, 151));
        client1->setAutoFillBackground(false);
        client1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 251, 233);"));
        textBrowser = new QTextBrowser(client1_tab);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(180, 10, 411, 301));
        manila->addTab(client1_tab, QString());

        gridLayout->addWidget(manila, 1, 0, 1, 1);

        pickClient_pushButton = new QPushButton(SelectClient);
        pickClient_pushButton->setObjectName("pickClient_pushButton");
        pickClient_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 241, 192);\n"
"font: 700 12pt \"Courier\";\n"
"color:rgb(117, 93, 65)"));

        gridLayout->addWidget(pickClient_pushButton, 2, 0, 1, 1);


        retranslateUi(SelectClient);

        manila->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(SelectClient);
    } // setupUi

    void retranslateUi(QWidget *SelectClient)
    {
        SelectClient->setWindowTitle(QCoreApplication::translate("SelectClient", "Form", nullptr));
        label->setText(QCoreApplication::translate("SelectClient", "LIST OF CLIENTELE", nullptr));
        manila->setTabText(manila->indexOf(tab), QCoreApplication::translate("SelectClient", "Tab 1", nullptr));
        client1->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("SelectClient", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mr. White --- $500,000</p></body></html>", nullptr));
        manila->setTabText(manila->indexOf(client1_tab), QCoreApplication::translate("SelectClient", "Tab 2", nullptr));
        pickClient_pushButton->setText(QCoreApplication::translate("SelectClient", "Pick Client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectClient: public Ui_SelectClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTCLIENT_H
