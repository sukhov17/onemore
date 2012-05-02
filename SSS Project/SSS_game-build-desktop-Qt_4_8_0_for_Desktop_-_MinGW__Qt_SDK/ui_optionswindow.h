/********************************************************************************
** Form generated from reading UI file 'optionswindow.ui'
**
** Created: Tue 1. May 17:02:46 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSWINDOW_H
#define UI_OPTIONSWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *gameTab;
    QWidget *soundTab;
    QWidget *graphicsTab;
    QPushButton *backButton;
    QPushButton *acceptButton;

    void setupUi(QWidget *OptionsWindow)
    {
        if (OptionsWindow->objectName().isEmpty())
            OptionsWindow->setObjectName(QString::fromUtf8("OptionsWindow"));
        OptionsWindow->resize(1024, 768);
        OptionsWindow->setStyleSheet(QString::fromUtf8("QPushButton {background-image: url(gfx/button1.png);}\n"
""));
        tabWidget = new QTabWidget(OptionsWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(384, 234, 250, 300));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(250);
        sizePolicy.setVerticalStretch(29);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(250, 300));
        tabWidget->setMaximumSize(QSize(250, 300));
        tabWidget->setBaseSize(QSize(250, 300));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        tabWidget->setFont(font);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane { margin: 0px,1px,1px,1px; border: 1px solid black; border-radius: 7px; padding: 1px;}\n"
"QWidget{background-color: transparent;}"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(20, 20));
        tabWidget->setElideMode(Qt::ElideMiddle);
        gameTab = new QWidget();
        gameTab->setObjectName(QString::fromUtf8("gameTab"));
        tabWidget->addTab(gameTab, QString());
        soundTab = new QWidget();
        soundTab->setObjectName(QString::fromUtf8("soundTab"));
        tabWidget->addTab(soundTab, QString());
        graphicsTab = new QWidget();
        graphicsTab->setObjectName(QString::fromUtf8("graphicsTab"));
        tabWidget->addTab(graphicsTab, QString());
        backButton = new QPushButton(OptionsWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(820, 710, 200, 50));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(backButton->sizePolicy().hasHeightForWidth());
        backButton->setSizePolicy(sizePolicy1);
        backButton->setMinimumSize(QSize(200, 50));
        backButton->setMaximumSize(QSize(200, 50));
        backButton->setFont(font);
        acceptButton = new QPushButton(OptionsWindow);
        acceptButton->setObjectName(QString::fromUtf8("acceptButton"));
        acceptButton->setGeometry(QRect(610, 710, 200, 50));
        sizePolicy1.setHeightForWidth(acceptButton->sizePolicy().hasHeightForWidth());
        acceptButton->setSizePolicy(sizePolicy1);
        acceptButton->setMinimumSize(QSize(200, 50));
        acceptButton->setMaximumSize(QSize(200, 50));
        acceptButton->setFont(font);

        retranslateUi(OptionsWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(OptionsWindow);
    } // setupUi

    void retranslateUi(QWidget *OptionsWindow)
    {
        OptionsWindow->setWindowTitle(QApplication::translate("OptionsWindow", "Options Window", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(gameTab), QApplication::translate("OptionsWindow", "   Game   ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(soundTab), QApplication::translate("OptionsWindow", "  Sound   ", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(graphicsTab), QApplication::translate("OptionsWindow", " Graphics", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("OptionsWindow", "Back", 0, QApplication::UnicodeUTF8));
        acceptButton->setText(QApplication::translate("OptionsWindow", "Accept", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OptionsWindow: public Ui_OptionsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSWINDOW_H
