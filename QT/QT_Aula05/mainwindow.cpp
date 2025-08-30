#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"

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

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton resposta = QMessageBox::question(this, "Titulo", "Deseja encerrar a aplicação?", QMessageBox::Yes | QMessageBox::No);

    if(resposta == QMessageBox::Yes) {
        close(); // ou quit
    } else {
        qDebug() << "O programa não foi fechado"; // manda uma mensagem no console, somente será mostrada no desenvolvimento, caso a aplicação fique em produção não será exibida para o usuario
    }
}

