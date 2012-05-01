#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "paintwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:

    void on_startStopButton_clicked();

    void on_selectButton_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_plus_clicked();

    void on_minus_clicked();

    void on_radiusEdit_cursorPositionChanged(int arg1, int arg2);

    void on_up_clicked();

private:
    Ui::MainWindow *ui;
    PaintWindow *paintWindow;

    void setBaseParameters();
};

#endif // MAINWINDOW_H
