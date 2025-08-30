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

void MainWindow::on_pushButton_clicked()
{
    // QMessageBox::about(this, "Titulo", "Texto Principal");
    // QMessageBox::aboutQt(this, "Texto Principal"); // mostra as informações sobre o QT
    // QMessageBox::critical(this, "Titulo", "Texto Principal");
    // QMessageBox::information(this, "Titulo", "Texto Principal");
    // QMessageBox::question(this, "Titulo", "Texto Principal");
    QMessageBox::warning(this, "Titulo", "Texto Principal");
}

