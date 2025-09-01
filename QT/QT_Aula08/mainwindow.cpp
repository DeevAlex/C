#include "mainwindow.h"
#include "./ui_mainwindow.h"
// #include "janela2.h" // 1º forma de chamar a outra janela, caso incluido no mainwindow não precisa mais instanciar

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
    // Janela2 janela2; // instanciando

    // janela2.exec();

    form2 = new Janela2(this);
    form2->show(); // caso incluido no mainwindow

}

