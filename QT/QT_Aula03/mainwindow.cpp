#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close())); // fazendo uma conexão, ao clicar no botão o formulario (this) será fechado, pode fazer isso na modo de design
}

MainWindow::~MainWindow()
{
    delete ui;
}

// criado no go to slot... no modo de edição
void MainWindow::on_pushButton_clicked()
{
    close();
}


void MainWindow::on_pushButton_2_clicked()
{

    QString css = "background-color: #ff0;color:#000";

    ui->label->setStyleSheet(css);
}

