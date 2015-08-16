/********************************************************************************
** Form generated from reading UI file 'dropthing.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DROPTHING_H
#define UI_DROPTHING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dropThing
{
public:

    void setupUi(QWidget *dropThing)
    {
        if (dropThing->objectName().isEmpty())
            dropThing->setObjectName(QStringLiteral("dropThing"));
        dropThing->resize(400, 300);

        retranslateUi(dropThing);

        QMetaObject::connectSlotsByName(dropThing);
    } // setupUi

    void retranslateUi(QWidget *dropThing)
    {
        dropThing->setWindowTitle(QApplication::translate("dropThing", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class dropThing: public Ui_dropThing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DROPTHING_H
