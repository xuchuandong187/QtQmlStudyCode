/********************************************************************************
** Form generated from reading UI file 'painteditem.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTEDITEM_H
#define UI_PAINTEDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaintedItem
{
public:

    void setupUi(QWidget *PaintedItem)
    {
        if (PaintedItem->objectName().isEmpty())
            PaintedItem->setObjectName(QStringLiteral("PaintedItem"));
        PaintedItem->resize(400, 300);

        retranslateUi(PaintedItem);

        QMetaObject::connectSlotsByName(PaintedItem);
    } // setupUi

    void retranslateUi(QWidget *PaintedItem)
    {
        PaintedItem->setWindowTitle(QApplication::translate("PaintedItem", "PaintedItem", 0));
    } // retranslateUi

};

namespace Ui {
    class PaintedItem: public Ui_PaintedItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTEDITEM_H
