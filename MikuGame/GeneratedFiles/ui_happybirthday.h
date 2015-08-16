/********************************************************************************
** Form generated from reading UI file 'happybirthday.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAPPYBIRTHDAY_H
#define UI_HAPPYBIRTHDAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_happyBirthday
{
public:

    void setupUi(QWidget *happyBirthday)
    {
        if (happyBirthday->objectName().isEmpty())
            happyBirthday->setObjectName(QStringLiteral("happyBirthday"));
        happyBirthday->resize(400, 300);

        retranslateUi(happyBirthday);

        QMetaObject::connectSlotsByName(happyBirthday);
    } // setupUi

    void retranslateUi(QWidget *happyBirthday)
    {
        happyBirthday->setWindowTitle(QApplication::translate("happyBirthday", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class happyBirthday: public Ui_happyBirthday {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAPPYBIRTHDAY_H
