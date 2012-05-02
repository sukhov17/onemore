/********************************************************************************
** Form generated from reading UI file 'mainmenuwindow.ui'
**
** Created: Tue 1. May 15:04:53 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENUWINDOW_H
#define UI_MAINMENUWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainMenuWindow
{
public:
    QPushButton *newGameButton;
    QPushButton *loadGameButton;
    QPushButton *scenarioEditorButton;
    QPushButton *optionsButton;
    QPushButton *exitButton;

    void setupUi(QWidget *MainMenuWindow)
    {
        if (MainMenuWindow->objectName().isEmpty())
            MainMenuWindow->setObjectName(QString::fromUtf8("MainMenuWindow"));
        MainMenuWindow->resize(1024, 768);
        MainMenuWindow->setWindowOpacity(1);
        MainMenuWindow->setStyleSheet(QString::fromUtf8("QPushButton {background-image: url(gfx/button1.png);}\n"
""));
        newGameButton = new QPushButton(MainMenuWindow);
        newGameButton->setObjectName(QString::fromUtf8("newGameButton"));
        newGameButton->setGeometry(QRect(412, 209, 200, 50));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(newGameButton->sizePolicy().hasHeightForWidth());
        newGameButton->setSizePolicy(sizePolicy);
        newGameButton->setMinimumSize(QSize(200, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        newGameButton->setFont(font);
        newGameButton->setStyleSheet(QString::fromUtf8(""));
        loadGameButton = new QPushButton(MainMenuWindow);
        loadGameButton->setObjectName(QString::fromUtf8("loadGameButton"));
        loadGameButton->setGeometry(QRect(412, 280, 200, 50));
        sizePolicy.setHeightForWidth(loadGameButton->sizePolicy().hasHeightForWidth());
        loadGameButton->setSizePolicy(sizePolicy);
        loadGameButton->setMinimumSize(QSize(200, 50));
        loadGameButton->setFont(font);
        scenarioEditorButton = new QPushButton(MainMenuWindow);
        scenarioEditorButton->setObjectName(QString::fromUtf8("scenarioEditorButton"));
        scenarioEditorButton->setGeometry(QRect(412, 349, 200, 50));
        sizePolicy.setHeightForWidth(scenarioEditorButton->sizePolicy().hasHeightForWidth());
        scenarioEditorButton->setSizePolicy(sizePolicy);
        scenarioEditorButton->setMinimumSize(QSize(200, 50));
        scenarioEditorButton->setFont(font);
        optionsButton = new QPushButton(MainMenuWindow);
        optionsButton->setObjectName(QString::fromUtf8("optionsButton"));
        optionsButton->setGeometry(QRect(412, 419, 200, 50));
        sizePolicy.setHeightForWidth(optionsButton->sizePolicy().hasHeightForWidth());
        optionsButton->setSizePolicy(sizePolicy);
        optionsButton->setMinimumSize(QSize(200, 50));
        optionsButton->setFont(font);
        exitButton = new QPushButton(MainMenuWindow);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(412, 489, 200, 50));
        sizePolicy.setHeightForWidth(exitButton->sizePolicy().hasHeightForWidth());
        exitButton->setSizePolicy(sizePolicy);
        exitButton->setMinimumSize(QSize(200, 50));
        exitButton->setFont(font);

        retranslateUi(MainMenuWindow);

        QMetaObject::connectSlotsByName(MainMenuWindow);
    } // setupUi

    void retranslateUi(QWidget *MainMenuWindow)
    {
        MainMenuWindow->setWindowTitle(QApplication::translate("MainMenuWindow", "MainMenuWidnow", 0, QApplication::UnicodeUTF8));
        newGameButton->setText(QApplication::translate("MainMenuWindow", "New Game", 0, QApplication::UnicodeUTF8));
        loadGameButton->setText(QApplication::translate("MainMenuWindow", "Load Game", 0, QApplication::UnicodeUTF8));
        scenarioEditorButton->setText(QApplication::translate("MainMenuWindow", "Scenario Editor", 0, QApplication::UnicodeUTF8));
        optionsButton->setText(QApplication::translate("MainMenuWindow", "Options", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("MainMenuWindow", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainMenuWindow: public Ui_MainMenuWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENUWINDOW_H
