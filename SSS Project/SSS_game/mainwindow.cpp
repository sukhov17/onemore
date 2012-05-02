#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setBaseParametrs();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setBaseParametrs()
{
    mainWidgetStack = new QStackedWidget (this);
    mainLayout = new QGridLayout ();
    mainMenuWindow = new MainMenuWindow ();
    optionsWindow = new OptionsWindow ();

    connect(mainMenuWindow,SIGNAL(setWindowId(int)),this,SLOT(setWindowId(int)));
    connect(optionsWindow,SIGNAL(setWindowId(int)),this,SLOT(setWindowId(int)));

    mainWidgetStack->addWidget(mainMenuWindow);
    mainWidgetStack->addWidget(optionsWindow);
    mainLayout->addWidget(mainWidgetStack);
    mainLayout->setContentsMargins(0,0,0,0);

    this->setLayout(mainLayout);
    //this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint | Qt::WindowTitleHint);
}

void MainWindow::setWindowId(int id)
{
    mainWidgetStack->setCurrentIndex(id);
}
