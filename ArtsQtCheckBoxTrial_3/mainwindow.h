#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_boldCheckBox_clicked();

    void on_italicCheckBox_clicked();

    void on_leftRadioButton_clicked();

    void on_rightRadioButton_clicked();

    void on_centerRadioButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
