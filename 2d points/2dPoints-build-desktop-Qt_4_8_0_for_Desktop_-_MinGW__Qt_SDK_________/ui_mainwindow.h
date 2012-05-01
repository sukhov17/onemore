/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 19. Apr 15:33:54 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *startStopButton;
    QLineEdit *radiusEdit;
    QPushButton *selectButton;
    QPushButton *up;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        startStopButton = new QPushButton(centralWidget);
        startStopButton->setObjectName(QString::fromUtf8("startStopButton"));
        startStopButton->setGeometry(QRect(20, 682, 200, 50));
        QFont font;
        font.setPointSize(16);
        startStopButton->setFont(font);
        radiusEdit = new QLineEdit(centralWidget);
        radiusEdit->setObjectName(QString::fromUtf8("radiusEdit"));
        radiusEdit->setGeometry(QRect(260, 680, 260, 50));
        radiusEdit->setFont(font);
        selectButton = new QPushButton(centralWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(530, 680, 200, 50));
        selectButton->setFont(font);
        up = new QPushButton(centralWidget);
        up->setObjectName(QString::fromUtf8("up"));
        up->setGeometry(QRect(740, 690, 75, 23));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "2d Points", 0, QApplication::UnicodeUTF8));
        startStopButton->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        selectButton->setText(QApplication::translate("MainWindow", "Select", 0, QApplication::UnicodeUTF8));
        up->setText(QApplication::translate("MainWindow", "up ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
