#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(mudaTexto())); //
}

void MainWindow::mudaTexto() { // slot criado no mainwindow.h
    ui->label->setText("Aula06");
}

MainWindow::~MainWindow()
{
    delete ui;
}
