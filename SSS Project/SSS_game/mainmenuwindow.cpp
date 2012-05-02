#include "mainmenuwindow.h"
#include "ui_mainmenuwindow.h"

MainMenuWindow::MainMenuWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainMenuWindow)
{
    ui->setupUi(this);
    setBaseParametrs();
}

MainMenuWindow::~MainMenuWindow()
{
    delete ui;
}

void MainMenuWindow::setBaseParametrs()
{
    mainLayout = new QGridLayout ();
    menuButtonsLayout = new QVBoxLayout ();
    backgroundPicture.load("gfx/backgroundmw.bmp");

    menuButtonsLayout->addWidget(ui->newGameButton);
    menuButtonsLayout->addWidget(ui->loadGameButton);
    menuButtonsLayout->addWidget(ui->scenarioEditorButton);
    menuButtonsLayout->addWidget(ui->optionsButton);
    menuButtonsLayout->addWidget(ui->exitButton);

    mainLayout->setColumnMinimumWidth(0,300);
    mainLayout->setColumnMinimumWidth(1,200);
    mainLayout->setColumnMinimumWidth(2,300);

    mainLayout->setRowMinimumHeight(0,125);
    mainLayout->setRowMinimumHeight(1,350);
    mainLayout->setRowMinimumHeight(2,125);

    mainLayout->addLayout(menuButtonsLayout,1,1);
    this->setLayout(mainLayout);

    ui->newGameButton->setDisabled(true);
    ui->loadGameButton->setDisabled(true);
    ui->scenarioEditorButton->setDisabled(true);
}

void MainMenuWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter (this);
    painter.scale((qreal)this->width()/1024,(qreal)this->height()/768);
    painter.drawImage(0,0,backgroundPicture);
}

void MainMenuWindow::on_newGameButton_clicked()
{

}

void MainMenuWindow::on_loadGameButton_clicked()
{

}

void MainMenuWindow::on_scenarioEditorButton_clicked()
{

}

void MainMenuWindow::on_optionsButton_clicked()
{
    setWindowId(1);
}

void MainMenuWindow::on_exitButton_clicked()
{
    exit(0);
}
