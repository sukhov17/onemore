/********************************************************************************
** Form generated from reading UI file 'paintwindow.ui'
**
** Created: Thu 19. Apr 15:33:54 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTWINDOW_H
#define UI_PAINTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaintWindow
{
public:

    void setupUi(QWidget *PaintWindow)
    {
        if (PaintWindow->objectName().isEmpty())
            PaintWindow->setObjectName(QString::fromUtf8("PaintWindow"));
        PaintWindow->resize(768, 512);

        retranslateUi(PaintWindow);

        QMetaObject::connectSlotsByName(PaintWindow);
    } // setupUi

    void retranslateUi(QWidget *PaintWindow)
    {
        PaintWindow->setWindowTitle(QApplication::translate("PaintWindow", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PaintWindow: public Ui_PaintWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTWINDOW_H
