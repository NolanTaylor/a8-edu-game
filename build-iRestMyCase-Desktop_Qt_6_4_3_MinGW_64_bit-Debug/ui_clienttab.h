/********************************************************************************
** Form generated from reading UI file 'clienttab.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTTAB_H
#define UI_CLIENTTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_clientTab
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *client_image;
    QSpacerItem *verticalSpacer;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *clientTab)
    {
        if (clientTab->objectName().isEmpty())
            clientTab->setObjectName("clientTab");
        clientTab->resize(635, 490);
        clientTab->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:0.948864, x2:1, y2:0, stop:0 rgba(245, 232, 169, 255), stop:1 rgba(255, 246, 224, 255));"));
        gridLayout_2 = new QGridLayout(clientTab);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        client_image = new QLabel(clientTab);
        client_image->setObjectName("client_image");
        client_image->setMaximumSize(QSize(16000, 400));

        verticalLayout->addWidget(client_image);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(clientTab);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setMaximumSize(QSize(300, 16000));
        textBrowser->setStyleSheet(QString::fromUtf8("font: 12pt \"Courier\";"));

        gridLayout_2->addWidget(textBrowser, 0, 1, 1, 1);


        retranslateUi(clientTab);

        QMetaObject::connectSlotsByName(clientTab);
    } // setupUi

    void retranslateUi(QWidget *clientTab)
    {
        clientTab->setWindowTitle(QCoreApplication::translate("clientTab", "Form", nullptr));
        client_image->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("clientTab", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Hey gamers</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class clientTab: public Ui_clientTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTTAB_H
