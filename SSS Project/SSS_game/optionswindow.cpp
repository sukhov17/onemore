#include "optionswindow.h"
#include "ui_optionswindow.h"

OptionsWindow::OptionsWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OptionsWindow)
{
    ui->setupUi(this);
    setBaseParametrs();
}

OptionsWindow::~OptionsWindow()
{
    delete ui;
}

void OptionsWindow::setBaseParametrs()
{
    backgroundPicture.load("gfx/backgroundopt.bmp");
    mainLayout = new QGridLayout();
    upperLayout = new QGridLayout();
    downerLayout = new QGridLayout();
    buttonLayout = new QHBoxLayout();

    mainLayout->addLayout(upperLayout,0,0);
    mainLayout->addLayout(downerLayout,1,0);
    buttonLayout->addWidget(ui->acceptButton);
    buttonLayout->addWidget(ui->backButton);
    downerLayout->addLayout(buttonLayout,0,1);
    upperLayout->addWidget(ui->tabWidget,1,1);

    mainLayout->setColumnMinimumWidth(0,800);
    mainLayout->setRowMinimumHeight(0,530);
    mainLayout->setRowMinimumHeight(1,70);
    downerLayout->setColumnMinimumWidth(0,340);
    upperLayout->setColumnMinimumWidth(0,275);
    upperLayout->setColumnMinimumWidth(2,275);
    upperLayout->setRowMinimumHeight(1,230);
    buttonLayout->setSizeConstraint(QLayout::SetMinimumSize);
    downerLayout->addWidget(new QWidget(),0,0);
    this->setLayout(mainLayout);
}

void OptionsWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter (this);
    painter.scale((qreal)this->width()/1024,(qreal)this->height()/768);
    painter.drawImage(0,0,backgroundPicture);
}

void OptionsWindow::on_acceptButton_clicked()
{
    setWindowId(0);
}

void OptionsWindow::on_backButton_clicked()
{
    setWindowId(0);
}
