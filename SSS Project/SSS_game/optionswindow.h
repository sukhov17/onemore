#ifndef OPTIONSWINDOW_H
#define OPTIONSWINDOW_H

#include <QWidget>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QPainter>

namespace Ui {
class OptionsWindow;
}

class OptionsWindow : public QWidget
{
    Q_OBJECT
    
public:
    //public methods of the class
    explicit OptionsWindow(QWidget *parent = 0);
    ~OptionsWindow();
    
private:
    //private methods of the class
    Ui::OptionsWindow *ui;
    QGridLayout *mainLayout;
    QGridLayout *upperLayout;
    QGridLayout *downerLayout;
    QHBoxLayout *buttonLayout;
    QImage backgroundPicture;
    void setBaseParametrs();

protected:
    //protected methods of the class
    void paintEvent(QPaintEvent *);

private slots:
    //private slots methods of the class
    void on_acceptButton_clicked();
    void on_backButton_clicked();

signals:
    //signals of the class
    void setWindowId(int);
};

#endif // OPTIONSWINDOW_H
