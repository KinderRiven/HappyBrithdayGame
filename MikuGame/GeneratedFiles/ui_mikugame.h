/********************************************************************************
** Form generated from reading UI file 'mikugame.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MIKUGAME_H
#define UI_MIKUGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MikuGameClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MikuGameClass)
    {
        if (MikuGameClass->objectName().isEmpty())
            MikuGameClass->setObjectName(QStringLiteral("MikuGameClass"));
        MikuGameClass->resize(600, 400);
        menuBar = new QMenuBar(MikuGameClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MikuGameClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MikuGameClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MikuGameClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MikuGameClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MikuGameClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MikuGameClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MikuGameClass->setStatusBar(statusBar);

        retranslateUi(MikuGameClass);

        QMetaObject::connectSlotsByName(MikuGameClass);
    } // setupUi

    void retranslateUi(QMainWindow *MikuGameClass)
    {
        MikuGameClass->setWindowTitle(QApplication::translate("MikuGameClass", "MikuGame", 0));
    } // retranslateUi

};

namespace Ui {
    class MikuGameClass: public Ui_MikuGameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MIKUGAME_H
