#ifndef PAINTWINDOW_H
#define PAINTWINDOW_H

#include <QWidget>
#include <QPainter>
#include <QList>
#include <QTimer>

namespace Ui {
class PaintWindow;
}

class PaintWindow : public QWidget
{
    Q_OBJECT
    
public:
    bool turn;
    int radius;
    double rect;
    QList <QPoint> pointsList;
    explicit PaintWindow(QWidget *parent = 0);
    ~PaintWindow();
    void setTurn();
    void setRadius (int radius);
    void setloc();
protected:
    void paintEvent(QPaintEvent *);
private:
    Ui::PaintWindow *ui;
    QTimer *timer;
    void setBaseParametrs();

private slots:
    void turnShift();
};

#endif // PAINTWINDOW_H
