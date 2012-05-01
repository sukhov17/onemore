#include "paintwindow.h"
#include "ui_paintwindow.h"
#include "math.h"

PaintWindow::PaintWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PaintWindow)
{
    ui->setupUi(this);
    setBaseParametrs();
}

PaintWindow::~PaintWindow()
{
    delete ui;
}

void PaintWindow::setBaseParametrs()
{
    turn = false;
    radius = 30;
    pointsList.append(QPoint(244,256));
    pointsList.append(QPoint(324,256));
    pointsList.append(QPoint(244,356));
    timer = new QTimer (this);
    connect (timer,SIGNAL(timeout()),this,SLOT(turnShift()));
}

void PaintWindow::setTurn()
{
    if(turn)
    {
        turn = false;
        timer->stop();
    }
    else
    {
        turn = true;
        timer->start(10);
    }
}

void PaintWindow::setRadius(int radius)
{
    this->radius = radius;
    update();
}

void PaintWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter (this);
    painter.setBrush(Qt::yellow);
    painter.drawRect(0,0,768,512);
    painter.setBrush(Qt::black);
    painter.setPen(Qt::black);
    foreach(QPoint p, pointsList)
    {
        painter.drawEllipse(p,radius,radius);
    }
}

double a = 0;
double r = 4;
double u = 35;
double v = 20;
double x1 = 0,x2 = 100;
void PaintWindow::turnShift()
{
     a += 0.24;
    setRadius(r*cos(a) + 20);
  //  x1 += 1;
//    x2 += 1;
// ����� ���� ���� � ��������?
    for(int i=0; i<pointsList.count();i++)
    {
        QPoint *p = &pointsList[i];                                                                                 
            p->setX((double)p->x() + r*cos(a)  );
            p->setY((double)p->y() + r*sin(a)  );
    }
    update();
}

void PaintWindow::setloc()
{

  update();




}
