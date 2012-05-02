#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QStackedWidget>
#include <QGridLayout>

#include "mainmenuwindow.h"
#include "optionswindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    //public methods of the class
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    //private fields of the class
    Ui::MainWindow *ui;
    QStackedWidget *mainWidgetStack;
    QGridLayout *mainLayout;

    MainMenuWindow *mainMenuWindow;
    OptionsWindow *optionsWindow;

    //private methods of the class
    void setBaseParametrs();

private slots:
    //private slots methods of the class
    void setWindowId (int id);

signals:
    //signals of the class
};

#endif // MAINWINDOW_H
