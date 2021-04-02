#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_boldCheckBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->boldCheckBox->isChecked())
    {
        QPalette palette = ui->changeLabel->palette();
        palette.setColor(ui->changeLabel->foregroundRole(), Qt::red);
        ui->changeLabel->setPalette(palette);
        stream << "Bold is Checked" <<endl;
    }
    else
    {
        stream << "Bold is UnChecked" << endl;
    }
}

void MainWindow::on_italicCheckBox_clicked()
{
    QTextStream stream(stdout);
    if(ui->italicCheckBox->isChecked())
    {
        QPalette palette = ui->changeLabel->palette();
        palette.setColor(ui->changeLabel->foregroundRole(), Qt::green);
        ui->changeLabel->setPalette(palette);
        stream << "Italic is Checked" << endl;
    }
    else
    {
        stream << "Italic is UnChecked" << endl;
    }
}

void MainWindow::on_leftRadioButton_clicked()
{
    QTextStream stream(stdout);
    if(ui->leftRadioButton->isChecked())
    {

        QPalette palette = ui->changeLabel->palette();
        palette.setColor(ui->changeLabel->foregroundRole(), QColor("#FFA500"));
        ui->changeLabel->setPalette(palette);
        stream << "Left is Checked" << endl;
    }
    else
    {
        stream << "Left is UnChecked" << endl;
    }
}

void MainWindow::on_rightRadioButton_clicked()
{
    QTextStream stream(stdout);
    if(ui->rightRadioButton->isChecked())
    {
        QPalette palette = ui->changeLabel->palette();
        palette.setColor(ui->changeLabel->foregroundRole(), QColor("#FFC0CB"));
        ui->changeLabel->setPalette(palette);
        stream << "Right is Checked" << endl;
    }
    else
    {
        stream << "Right is UnChecked" << endl;
    }
}

void MainWindow::on_centerRadioButton_clicked()
{
    QTextStream stream(stdout);
    if(ui->centerRadioButton->isChecked())
    {
        QPalette palette = ui->changeLabel->palette();
        palette.setColor(ui->changeLabel->foregroundRole(), QColor("#800000"));
        ui->changeLabel->setPalette(palette);
        stream << "Center is Checked" << endl;
    }
    else
    {
        stream << "Center is UnChecked" << endl;
    }
}
