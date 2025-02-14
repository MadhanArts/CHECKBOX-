#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->checkBox_1, SIGNAL(clicked(bool)), this, SLOT(on_checkBox_clicked()));
    connect(ui->checkBox_2, SIGNAL(clicked(bool)), this, SLOT(on_checkBox_clicked()));
    connect(ui->checkBox_3, SIGNAL(clicked(bool)), this, SLOT(on_checkBox_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_checkBox_clicked()
{
    QTextStream stream(stdout);

    if(ui->checkBox_1->isChecked())
    {
        stream << "Option 1 is checked"<<endl;
    }
    else
    {
        stream << "Option 1 is unchecked"<<endl;
    }

    if(ui->checkBox_2->isChecked())
    {
        stream << "Option 2 is checked"<<endl;
    }
    else
    {
        stream << "Option 2 is unchecked"<<endl;
    }


    if(ui->checkBox_3->isChecked())
    {
        stream << "Option 3 is checked"<<endl;
    }
    else
    {
        stream << "Option 3 is unchecked"<<endl;
    }

}
