/********************************************************************************
** Form generated from reading UI file 'piechart.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIECHART_H
#define UI_PIECHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PieChart
{
public:

    void setupUi(QWidget *PieChart)
    {
        if (PieChart->objectName().isEmpty())
            PieChart->setObjectName(QStringLiteral("PieChart"));
        PieChart->resize(400, 300);

        retranslateUi(PieChart);

        QMetaObject::connectSlotsByName(PieChart);
    } // setupUi

    void retranslateUi(QWidget *PieChart)
    {
        PieChart->setWindowTitle(QApplication::translate("PieChart", "PieChart", 0));
    } // retranslateUi

};

namespace Ui {
    class PieChart: public Ui_PieChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIECHART_H
