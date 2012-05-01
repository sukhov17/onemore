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
    radius = 20;
    pointsList.append(QPoint(244,256));
    pointsList.append(QPoint(324,256));
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
        timer->start(1);
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
int x1 = 0;
int x2 = 1800;
void PaintWindow::turnShift()
{

    for(int i=0; i<pointsList.count();i++)
    {
        QPoint *p = &pointsList[i];
        if(x1 < 900)
        {

           x1 = x1+10;
            x2 = x2-10;
            p->setX(p->x()+1/sin(0));
            p->setY(p->y()+ 1/sin(0));

        }
        if(x2 <= 900 )
        {

            if(x2 == 0)
            {
                x1 = 0;
                x2 = 1800;
            }
            x2 = x2-10;
            p->setX(p->x()-10);
            update();

        }


    }
    update();
}
