#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QPixmap"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap logo("C:/Users/Alex/Desktop/Captura de tela 2025-08-12 012331.png"); // as barras devem ser invertidas

    ui->label->setPixmap(logo); // inserindo uma imagem no elemento label via codigo, pode ser feito na modo de Design também
    // ui->label->setScaledContents(true); // definindo que a scala da imagem seja definida com o tamanho da label
    ui->label->setPixmap(logo.scaled(100, 100, Qt::KeepAspectRatio)); // ou assim para manter a scala da imagem

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPixmap logo2("C:/Users/Alex/Desktop/Captura de tela 2025-08-12 012331.png");
    ui->label->setPixmap(logo2.scaled(100, 100, Qt::KeepAspectRatio));
}

