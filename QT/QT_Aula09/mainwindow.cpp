#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"

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

void MainWindow::on_btnMostrar_clicked()
{
    QString nome = ui->txtNome->text(); // como pegar o valor digitado no campo de texto e atribuir a uma variavel
    QString telefone = ui->txtTelefone->text();
    QString email = ui->txtEmail->text();

    QMessageBox::information(this, "Dados Digitados", "Nome: " + nome + "\n" + "Telefone: " + telefone + "\n" + "Email: " + email);

}


void MainWindow::on_btnLimpar_clicked()
{
    ui->txtNome->clear();
    ui->txtTelefone->clear();
    ui->txtEmail->clear();

    ui->txtNome->setFocus();
}

