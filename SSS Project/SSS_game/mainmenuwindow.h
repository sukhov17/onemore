#ifndef MAINMENUWINDOW_H
#define MAINMENUWINDOW_H

#include <QWidget>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QPainter>

namespace Ui {
class MainMenuWindow;
}

class MainMenuWindow : public QWidget
{
    Q_OBJECT
    
public:
    //public methods of the class
    explicit MainMenuWindow(QWidget *parent = 0);
    ~MainMenuWindow();
    
private:
    //private fields of the class
    Ui::MainMenuWindow *ui;
    QGridLayout *mainLayout;
    QVBoxLayout *menuButtonsLayout;
    QImage backgroundPicture;

    //private methods of the class
    void setBaseParametrs();

protected:
    //protected methods of the class
    void paintEvent(QPaintEvent *);

private slots:
    //private slots of the class
    void on_newGameButton_clicked();
    void on_loadGameButton_clicked();
    void on_scenarioEditorButton_clicked();
    void on_optionsButton_clicked();
    void on_exitButton_clicked();

signals:
    //signals of the class
    void setWindowId(int);

};

#endif // MAINMENUWINDOW_H
