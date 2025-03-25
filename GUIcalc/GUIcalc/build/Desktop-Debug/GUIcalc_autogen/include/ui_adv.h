/********************************************************************************
** Form generated from reading UI file 'adv.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADV_H
#define UI_ADV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adv
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adv)
    {
        if (adv->objectName().isEmpty())
            adv->setObjectName("adv");
        adv->resize(800, 600);
        centralwidget = new QWidget(adv);
        centralwidget->setObjectName("centralwidget");
        adv->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adv);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        adv->setMenuBar(menubar);
        statusbar = new QStatusBar(adv);
        statusbar->setObjectName("statusbar");
        adv->setStatusBar(statusbar);

        retranslateUi(adv);

        QMetaObject::connectSlotsByName(adv);
    } // setupUi

    void retranslateUi(QMainWindow *adv)
    {
        adv->setWindowTitle(QCoreApplication::translate("adv", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adv: public Ui_adv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADV_H
