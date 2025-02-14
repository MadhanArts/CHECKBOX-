#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QMessageBox>

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


void MainWindow::on_radioButtonCheck_clicked()
{
    if(ui->radioButton->isChecked())
    {
        QMessageBox::information(0, "AGE", "AGE IS ABOVE 18");
    }

    if(ui->radioButton_2->isChecked())
    {
        QMessageBox::information(0, "AGE", "AGE IS BELOW 18");
    }
}

void MainWindow::on_checkBoxCheck_clicked()
{

    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(0, "LIKES", "MOVIES");
    }
    if(ui->checkBox_2->isChecked())
    {
        QMessageBox::information(0, "LIKES", "SPORTS");
    }
    if(ui->checkBox_3->isChecked())
    {
        QMessageBox::information(0, "LIKES", "FOOD");
    }
}
